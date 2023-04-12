#include <stdio.h>
#include "main.h"

void time_counter(struct date firstDate, struct date secondDate)
{
    struct date dateDifference;
    int secondsSumFirst, secondsSumSecond, secondsSumDifference;

    dateDifference.years = secondDate.years - firstDate.years;
    dateDifference.months = secondDate.months - firstDate.months;
    dateDifference.days = secondDate.days - firstDate.days;


    /* This algorithm translates the difference of hours, minutes and seconds into seconds format,
and then, using division and multiplication, it finds the number of new hours, minutes and seconds
for date difference */

    secondsSumFirst = firstDate.hours + firstDate.minutes + firstDate.seconds;
    secondsSumSecond = secondDate.hours + secondDate.minutes + secondDate.seconds;
    secondsSumDifference = secondsSumSecond - secondsSumFirst;

    dateDifference.hours = secondsSumDifference / 3600;
    secondsSumDifference -= dateDifference.hours * 3600;
    dateDifference.minutes = secondsSumDifference / 60;
    secondsSumDifference -= dateDifference.minutes * 60;
    dateDifference.seconds = secondsSumDifference;



    printf("%02d.%02d.%04d %02d:%02d:%02d\n", dateDifference.days, dateDifference.months, dateDifference.years, dateDifference.hours, dateDifference.minutes, dateDifference.seconds);
}