#include <stdio.h>
#include <string.h>

typedef struct timestamp
{
    int day;
    int month;
    int year;
    int hour;
    int minutes;
    int second;
} timestamp;

void display(timestamp t1, timestamp t2)
{
    printf("First Timestamp = %d/%d/%d  %d:%d:%d\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    printf("Second Timestamp = %d/%d/%d  %d:%d:%d\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
}
timestamp compare(timestamp t1, timestamp t2)
{
    if (t1.year > t2.year)
    {
        printf("First timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    }
    else if (t1.year < t2.year)
    {
        printf("Second timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
    }
    else if (t1.year == t2.year && t1.month > t2.month)
    {
        printf("First timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    }
    else if (t1.year == t2.year && t1.month < t2.month)
    {
        printf("Second timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day > t2.day)
    {
        printf("First timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day < t2.day)
    {
        printf("Second timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour > t2.hour)
    {
        printf("First timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour < t2.hour)
    {
        printf("Second timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour == t2.hour && t1.minutes > t2.minutes)
    {
        printf("First timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour == t2.hour && t1.minutes < t2.minutes)
    {
        printf("Second timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour == t2.hour && t1.minutes == t2.minutes && t1.second > t2.second)
    {
        printf("First timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t1.day, t1.month, t1.year, t1.hour, t1.minutes, t1.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour == t2.hour && t1.minutes == t2.minutes && t1.second < t2.second)
    {
        printf("Second timestamp i.e., %d/%d/%d  %d:%d:%d is newest\n", t2.day, t2.month, t2.year, t2.hour, t2.minutes, t2.second);
    }
    else if (t1.year == t2.year && t1.month == t2.month && t1.day == t2.day && t1.hour == t2.hour && t1.minutes == t2.minutes && t1.second == t2.second)
    {
        printf("Equal TimeStamps\n");
    }
}

int main()
{
    timestamp t1, t2;
    printf("Details of first timestamp\n");
    printf("Enter day: ");
    scanf("%d", &t1.day);
    printf("Enter month: ");
    scanf("%d", &t1.month);
    printf("Enter year: ");
    scanf("%d", &t1.year);
    printf("Enter hour: ");
    scanf("%d", &t1.hour);
    printf("Enter minutes: ");
    scanf("%d", &t1.minutes);
    printf("Enter seconds: ");
    scanf("%d", &t1.second);
    printf("Details of second timestamp\n");
    printf("Enter day: ");
    scanf("%d", &t2.day);
    printf("Enter month: ");
    scanf("%d", &t2.month);
    printf("Enter year: ");
    scanf("%d", &t2.year);
    printf("Enter hour: ");
    scanf("%d", &t2.hour);
    printf("Enter minutes: ");
    scanf("%d", &t2.minutes);
    printf("Enter second: ");
    scanf("%d", &t2.second);
    display(t1, t2);
    compare(t1, t2);
    return 0;
}