#include <iostream>
#include <ctime>
#include <cstdio>

int main() {
    std::tm t = {};
    std::cout << "Datum: ";
    scanf_s("%d/%d/%d", &t.tm_mday, &t.tm_mon, &t.tm_year);
    t.tm_mon -= 1;
    t.tm_year -= 1900;
    std::mktime(&t);
    const char* daysOfWeek[] = { "So", "Mo", "Di", "Mi", "Do", "Fr", "Sa" };
    std::cout << daysOfWeek[t.tm_wday] << std::endl;
    return 0;
}
