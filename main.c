#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "main.h"
#define date1 argv[1]
#define date2 argv[2]



int main(int argc, char **argv) {
    struct date firstDate;
    struct date secondDate;
//    struct date dateDifference;
//    int secondsSumFirst, secondsSumSecond, secondsSumDifference;

    firstDate.years = strtol(&date1[6], NULL, 10);
    firstDate.months = strtol(&date1[3], NULL, 10);
    firstDate.days = strtol(&date1[0], NULL, 10);
    firstDate.hours = strtol(&date1[11], NULL, 10) * 3600;
    firstDate.minutes = strtol(&date1[14], NULL, 10) * 60;
    firstDate.seconds = strtol(&date1[17], NULL, 10);

    secondDate.years = strtol(&date2[6], NULL, 10);
    secondDate.months = strtol(&date2[3], NULL, 10);
    secondDate.days = strtol(&date2[0], NULL, 10);
    secondDate.hours = strtol(&date2[11], NULL, 10) * 3600;
    secondDate.minutes = strtol(&date2[14], NULL, 10) * 60;
    secondDate.seconds = strtol(&date2[17], NULL, 10);

    time_counter(firstDate, secondDate);
//    dateDifference.years = secondDate.years - firstDate.years;
//    dateDifference.months = secondDate.months - firstDate.months;
//    dateDifference.days = secondDate.days - firstDate.days;

//    /* This algorithm translates the difference of hours, minutes and seconds into seconds format,
//and then, using division and multiplication, it finds the number of new hours, minutes and seconds
//for date difference */
//
//    secondsSumFirst = firstDate.hours + firstDate.minutes + firstDate.seconds;
//    secondsSumSecond = secondDate.hours + secondDate.minutes + secondDate.seconds;
//    secondsSumDifference = secondsSumSecond - secondsSumFirst;
//
//    dateDifference.hours = secondsSumDifference / 3600;
//    secondsSumDifference -= dateDifference.hours * 3600;
//    dateDifference.minutes = secondsSumDifference / 60;
//    secondsSumDifference -= dateDifference.minutes * 60;
//    dateDifference.seconds = secondsSumDifference;
//



//    if (argc != 3) {
//        printf("Incorrect number of program arguments");
//    } else {
//        printf("%02d.%02d.%04d %02d:%02d:%02d\n", dateDifference.days, dateDifference.months, dateDifference.years, dateDifference.hours, dateDifference.minutes, dateDifference.seconds);
//    }
//    return 0;
}
