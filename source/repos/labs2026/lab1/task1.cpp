#include <stdio.h>
#include <time.h>
struct MyDateTime
{
    unsigned short day : 5;
    unsigned short month : 4;
    unsigned short year : 12;

    unsigned short hour : 5;
    unsigned short minute : 6;
    unsigned short second : 6;
};
void task1()
{
    struct MyDateTime mydt;
    struct tm stdtm;

    int day, month, year, hour, minute, second;

    // Зчитування дати і часу
    printf("Type  day, month, year, hour, minute, second");
    scanf_s("%d %d %d %d %d %d", &day, &month, &year, &hour, &minute, &second);

    // Заповнення користувацької структури
    mydt.day = day;
    mydt.month = month;
    mydt.year = year;
    mydt.hour = hour;
    mydt.minute = minute;
    mydt.second = second;

    // Заповнення стандартної структури struct tm
    stdtm.tm_mday = day;
    stdtm.tm_mon = month - 1;
    stdtm.tm_year = year - 1900;
    stdtm.tm_hour = hour;
    stdtm.tm_min = minute;
    stdtm.tm_sec = second;

    // Вивід у заданому форматі
    printf("Date and Time now: %02d.%02d.%04d %02d:%02d:%02d\n", mydt.day, mydt.month, mydt.year, mydt.hour, mydt.minute, mydt.second);

    printf("My struct size: %zu bytes\n", sizeof(struct MyDateTime));
    printf("Standard struct tm size: %zu bytes\n", sizeof(struct tm));

}
