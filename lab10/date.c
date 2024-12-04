#include <stdio.h>
#include "date.h"

Date initialize_date(int day, int month, int year) {// инициализация даты
    Date date;
    date.day = day;
    date.month = month;
    date.year = year;
    return date;
}

void analyze_date(Date date){// определение декады, сезона и века
    int decade = (date.day - 1)/10+1; // декада-Промежуток времени в десять дней, третья часть месяца.

    char* season;// указатель
    if (date.month == 12 || date.month == 1 || date.month == 2)
        season = "Зима";
    else if (date.month >= 3 && date.month <= 5)
        season = "Весна";
    else if (date.month >= 6 && date.month <= 8)
        season = "Лето";
    else
        season = "Осень";

    int century = (date.year - 1)/100+1; // 1901 -1 /10 +1 = 20
    printf("Дата: %d.%d.%d — Декада: %d, Сезон: %s, Век: %d\n",
           date.day, date.month, date.year, decade, season, century);
}
