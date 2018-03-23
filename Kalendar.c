#include <stdlib.h>
#include <stdio.h>
#include <time.h>


int main(void)
{
    int day=0;
    int month=0;
    int year=0;
    time_t rawtime;
    struct tm * timeinfo;
    printf("Enter a day ");
    scanf("%d",&day);
    printf("Enter a month ");
    scanf("%d",&month);
    printf("Enter a year ");
    scanf("%d",&year);
    const char * weekday[] = { "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday"};
    

    time(&rawtime);
    timeinfo = localtime (&rawtime);
    timeinfo->tm_year = year-1900;
    timeinfo->tm_mon = month-1;
    timeinfo->tm_mday = day;
    timeinfo->tm_hour = 0;
    timeinfo->tm_min = 0;
    timeinfo->tm_sec = 0;
    timeinfo->tm_isdst = 0;

    mktime(timeinfo);
    printf("That day is a %s.\n", weekday[timeinfo->tm_wday]);
    return 0;
}
