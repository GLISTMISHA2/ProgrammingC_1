#ifndef DATE_H
#define DATE_H

typedef struct {// определение структуры Дата
    int day;
    int month;
    int year;
} Date;
// прототипы функций
Date initialize_date(int day, int month, int year);
void analyze_date(Date date);

#endif
