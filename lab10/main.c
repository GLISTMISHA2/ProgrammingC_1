
#include <stdio.h>
#include "date.h"

int main() {
    Date birth_date = initialize_date(1, 2, 2007);// инициализация даты рождения
    analyze_date(birth_date); //вызывает функцию analyze_date передавая ей инициализированную дату
}
