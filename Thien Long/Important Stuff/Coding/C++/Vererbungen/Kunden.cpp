    #include <iostream>
    #include <fstream>
    #include <iomanip>
    #include <sstream>
    #include <vector>
    #include <algorithm>
    using namespace std;

    class User {
    private:
        string name;
        int bankNumber;
        int pin;
        float money;
        bool locked;

    public:
        User() : name(""), bankNumber(0), pin(0), money(0.0f), locked(false) {}
        User(string name, int bankNumber, int pin, float money, bool locked = false) {
            this->name = name;
            this->bankNumber = bankNumber;
            this->pin = pin;
            this->money = money;
            this->locked = locked;
        }

        string getName() const { return name; }
        int getBankNumber() const { return bankNumber; }
        int getPin() const { return pin; }
        float getMoney() const { return money; }
        bool isLocked() const { return locked; }

        void setMoney(float m) { money = m; }
        void setLocked(bool v) { locked = v; }
        void lock() { locked = true; }
        void unlock() { locked = false; }

        void deposit(float amount) {
            if (amount > 0.0f) money += amount;
        }

        bool withdraw(float amount) {
            if (amount > 0.0f && money >= amount) {
                money -= amount;
                return true;
            }
            return false;
        }

        // Save: name bankNumber pin money locked(0/1)
        void saveToFile(ofstream &file) const {

            file << name << " " << bankNumber << " " << pin << " " << money << " " << (locked ? 1 : 0) << endl;
        }

        void display() const {
            cout << fixed << setprecision(2);
            cout << "Name: " << name
                 << ", Bank number: " << bankNumber
                 << ", Money: " << money;
            if (locked) cout << " (LOCKED)";
            cout << endl;
        }
    };

vector<User> loadAllUsers(const string& filename = "databank.txt") {
    vector<User> users;
    ifstream in(filename);
    if (!in.is_open()) return users;

    string line, name;
    int bankNumber = 0, pin = 0;
    float money = 0.0f;
    bool locked = false;

    while (getline(in, line)) {
        if (line.find("Name: ") == 0)
            name = line.substr(6);

        else if (line.find("BankNumber: ") == 0)
            bankNumber = stoi(line.substr(12));

        else if (line.find("PIN: ") == 0)
            pin = stoi(line.substr(5));

        else if (line.find("Money: ") == 0)
            money = stof(line.substr(7));

        else if (line.find("Locked: ") == 0) {
            locked = (line.substr(8) == "true");
            users.emplace_back(name, bankNumber, pin, money, locked);
        }
    }

    return users;
}


void saveAllUsers(const vector<User>& users, const string& filename = "databank.txt") {
    ofstream out(filename, ios::trunc);
    if (!out.is_open()) {
        cerr << "Error: could not open file.\n";
        return;
    }

    out << fixed << setprecision(2);

    for (const auto& u : users) {
        out << "----------------------------------------\n";
        out << "Name: " << u.getName() << "\n";
        out << "BankNumber: " << u.getBankNumber() << "\n";
        out << "PIN: " << u.getPin() << "\n";
        out << "Money: " << u.getMoney() << "\n";
        out << "Locked: " << (u.isLocked() ? "true" : "false") << "\n";
    }
    out << "----------------------------------------\n";
}



    // Optional: keep your binarySearch, but now for vector (index-based)
    int binarySearchVec(const vector<User> &users, int target) {
        int left = 0, right = (int)users.size() - 1;
        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (users[mid].getBankNumber() == target)
                return mid;
            else if (users[mid].getBankNumber() < target)
                left = mid + 1;
            else
                right = mid - 1;
        }
        return -1;
    }

    int main() {
        // Ensure databank file exists
        { ofstream createFile("databank.txt", ios::app); }

        int userInput;
        cout << "Choose mode:\n1. Admin\n2. Normal User\n> ";
        if (!(cin >> userInput)) {
            cout << "Invalid input." << endl;
            return 1;
        }

        bool hasAdmin = (userInput == 1);

        if (hasAdmin) {
            int menu;
            cout << "\n1. Show databank\n2. Add user\n3. Unlock user\n> ";
            cin >> menu;

            if (menu == 1) {
                auto users = loadAllUsers();
                if (users.empty()) { cout << "No users found.\n"; return 0; }
                cout << "\n--- Databank ---\n";
                int index = 1;
                for (const auto &u : users)  {
                    cout << index << ": ";
                    u.display();
                    index++;
                }
            }
            else if (menu == 2) {
                string name;
                int bankNumber, pin;
                float money;
                cout << "Enter name: ";
                cin >> ws;
                getline(cin, name);
                cout << "Enter bank number: ";
                cin >> bankNumber;
                cout << "Enter PIN: ";
                cin >> pin;
                cout << "Enter money: ";
                cin >> money;

                auto users = loadAllUsers();

                // prevent duplicate bank numbers
                bool exists = any_of(users.begin(), users.end(),
                    [&](const User& u){ return u.getBankNumber() == bankNumber; });
                if (exists) {
                    cout << "Bank number already exists.\n";
                    return 0;
                }

                users.emplace_back(name, bankNumber, pin, money, false);
                saveAllUsers(users);
                cout << "User added successfully!\n";
            }
            else if (menu == 3) {
                auto users = loadAllUsers();
                if (users.empty()) { cout << "No users found.\n"; return 0; }

                int targetBank;
                cout << "Enter bank number to unlock: ";
                cin >> targetBank;

                bool found = false;
                for (auto &u : users) {
                    if (u.getBankNumber() == targetBank) {
                        if (!u.isLocked()) cout << "Account is not locked.\n";
                        else {
                            u.unlock();
                            saveAllUsers(users);
                            cout << "Account unlocked successfully.\n";
                        }
                        found = true;
                        break;
                    }
                }
                if (!found) cout << "User not found.\n";
            }
            else {
                cout << "Invalid input.\n";
            }
        }
        else {
            auto users = loadAllUsers();
            if (users.empty()) {
                cout << "No users found in databank." << endl;
                return 0;
            }

            // Sort for binary search
            sort(users.begin(), users.end(),
                 [](const User& a, const User& b){ return a.getBankNumber() < b.getBankNumber(); });

            int searchNumber;
            cout << "Enter your bank number: ";
            cin >> searchNumber;

            // EITHER: use our binarySearchVec
            int index = binarySearchVec(users, searchNumber);

            // OR (modern): use lower_bound (comment out above if you use this)
            // auto it = lower_bound(users.begin(), users.end(), searchNumber,
            //     [](const User& u, int target){ return u.getBankNumber() < target; });
            // int index = (it != users.end() && it->getBankNumber() == searchNumber) ? int(it - users.begin()) : -1;

            if (index != -1) {
                if (users[index].isLocked()) {
                    cout << "This account is locked. Please contact an administrator." << endl;
                    return 0;
                }

                const int MAX_ATTEMPTS = 3;
                int attempts = 0;
                bool accessGranted = false;

                while (attempts < MAX_ATTEMPTS && !accessGranted) {
                    int enteredPin;
                    cout << "Enter your PIN: ";
                    cin >> enteredPin;

                    if (enteredPin == users[index].getPin()) {
                        accessGranted = true;
                        cout << "Access granted" << endl;
                        break;
                    } else {
                        attempts++;
                        int triesLeft = MAX_ATTEMPTS - attempts;
                        if (triesLeft > 0) {
                            cout << "Wrong PIN. Attempts left: " << triesLeft << endl;
                        } else {
                            users[index].lock();
                            saveAllUsers(users);
                            cout << "Wrong PIN entered 3 times. Account locked. Please contact an administrator." << endl;
                        }
                    }
                }

                if (!accessGranted) return 0;

                bool done = false;
                while (!done) {
                    cout << "\n--- User Menu ---\n";
                    cout << "1. Show account info\n2. Deposit\n3. Withdraw\n4. Exit\n> ";
                    int choice;
                    cin >> choice;

                    switch (choice) {
                        case 1:
                            users[index].display();
                            break;
                        case 2: {
                            float amount;
                            cout << "Enter deposit amount: ";
                            cin >> amount;
                            if (amount <= 0.0f) {
                                cout << "Invalid amount. Enter a positive number." << endl;
                            } else {
                                users[index].deposit(amount);
                                saveAllUsers(users);
                                cout << fixed << setprecision(2)
                                     << "Deposit successful. New balance: " << users[index].getMoney() << endl;
                            }
                            break;
                        }
                        case 3: {
                            float amount;
                            cout << "Enter withdrawal amount: ";
                            cin >> amount;
                            if (amount <= 0.0f) {
                                cout << "Invalid amount. Enter a positive number." << endl;
                            } else if (users[index].withdraw(amount)) {
                                saveAllUsers(users);
                                cout << fixed << setprecision(2)
                                     << "Withdrawal successful. New balance: " << users[index].getMoney() << endl;
                            } else {
                                cout << "Withdrawal failed. Insufficient funds or invalid amount." << endl;
                            }
                            break;
                        }
                        case 4:
                            done = true;
                            break;
                        default:
                            cout << "Invalid choice." << endl;
                    }
                }
            } else {
                cout << "User not found" << endl;
            }
        }
        return 0;
    }
