#include <iostream>
using namespace std;

// Wochentage (0 = Sonntag, ..., 6 = Samstag)
string weekdays[7] = {
    "Sonntag", "Montag", "Dienstag", "Mittwoch",
    "Donnerstag", "Freitag", "Samstag"
};

// Doomsday-Tage je Monat
int doomsdayDay[12] = {
    3,   // Januar
    28,  // Februar
    14,  // März
    4,   // April
    9,   // Mai
    6,   // Juni
    11,  // Juli
    8,   // August
    5,   // September
    10,  // Oktober
    7,   // November
    12   // Dezember
};

bool isLeapYear(int y) {
    return (y % 400 == 0) || (y % 4 == 0 && y % 100 != 0);
}

// Century Anchor Day (0=So, 1=Mo ... 6=Sa)
int getCenturyAnchor(int year) {
    int century = year / 100;
    if (century == 18) return 5; // 1800s: Freitag
    if (century == 19) return 3; // 1900s: Mittwoch
    if (century == 20) return 2; // 2000s: Dienstag
    if (century == 21) return 0; // 2100s: Sonntag
    return 0;
}

// Berechne Doomsday-Wochentag für gegebenes Jahr
int getDoomsdayOfYear(int year) {
    int anchor = getCenturyAnchor(year);
    int y = year % 100;
    // Schritte: für jedes Jahr im Jahrhundert einen Tag vor, plus zusätzlicher Tag bei jedem Schaltjahr
    for (int i = 1; i <= y; ++i) {
        anchor++;
        if (anchor > 6) anchor = 0;
        if (isLeapYear((year / 100) * 100 + i)) {
            anchor++;
            if (anchor > 6) anchor = 0;
        }
    }
    return anchor;
}

// Berechne Wochentag des Datums nur mit Schleifen
string getWeekday(int day, int month, int year) {
    int weekday = getDoomsdayOfYear(year);
    int refDay = doomsdayDay[month - 1];
    if (month == 1 && isLeapYear(year)) refDay = 4;
    if (month == 2 && isLeapYear(year)) refDay = 29;
    if (day > refDay) {
        for (int i = refDay; i < day; ++i) {
            weekday++;
            if (weekday > 6) weekday = 0;
        }
    } else if (day < refDay) {
        for (int i = refDay; i > day; --i) {
            weekday--;
            if (weekday < 0) weekday = 6;
        }
    }
    return weekdays[weekday];
}

int main() {
    int day, month, year;
    cout << "Datum eingeben (Tag Monat Jahr): ";
    cin >> day >> month >> year;
    cout << "Der Wochentag ist: " << getWeekday(day, month, year) << endl;
    return 0;
}
