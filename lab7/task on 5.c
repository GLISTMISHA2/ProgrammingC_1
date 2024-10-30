// вариант 2	"В исходном предложении удалить все символы пробела. Вывести преобразованный текст" 
#include <stdio.h>
#include <string.h>

int main() {
    char text[] = "Lorem ipsum dolor sit amet, consectetur adipiscing elit, sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. Excepteur sint occaecat cupidatat non proident, sunt in culpa qui officia deserunt mollit anim id est laborum.";
    int len = strlen(text);
    int count = 0;

    for (int i = 0; i < len; i++) { // Вычисляем количество пробелов
        if (text[i] == ' ') {
            count++;
        }
    }
    
    int j = 0;
    for (int i = 0; i < len; i++) { // Удаляем пробелы
        if (text[i] != ' ') {
            text[j++] = text[i];
        }
    }
    text[j] = '\0'; // Добавляем завершающий нулевой символ

    printf("Преобразованный текст: %s\n", text);
    printf("Количество удаленных пробелов: %d\n", count);
}
