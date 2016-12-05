/* *************************************************************************
Чёткий конвертер.                                                          *
Автор этой чёткой проги: Удвук                                             *
Контактний адрес создателя этой чёткой проги: https://vk.com/rumataestor   *
************************************************************************** */
#include <stdio.h>

// Главная функция программы.
int main(void)
{
    int snumber, quit;

    // Заголовок программы.
    printf("\t\t\t***Converter***\n");

// Цикл do{ }while(); для для повторения работи программы.
    do{

        // Меню программы
        printf("\t\t\t*Menu program*\nButton 1 - binary system\tButton 2 - octal system\nButton 3 - decimal system\tButton 4 - hexadecimal system\n");

        // Предложение пользователю выбора системы счисления.
        printf("Enter number system conversion: ");

        // Ввод номера системы.
        scanf("%d", &snumber);

        // Оператор выбора в котором идет перечисление систем счисления.
        switch(snumber)
        {
        case 1:
            // Двоичная система счисления.
            binarry();
            break;
        case 2:
            // Восьмеричная система счисления.
            octall();
            break;
        case 3:
            // Десятичная система счисления.
            decimall();
            break;
        case 4:
            // Шестнадцатеричная система счисления.
            hexadecimall();
            break;
        }

        printf("\n*****************************\n");
        printf("1 - Continue the program!\n2 - Exit program\n");
        printf("******************************\n");
        scanf("%d", &quit);
    }while(quit != 2);

    return 0;
}

// Двоичная система счисления.
void binarry(void)
{
    int numberr, cnumberr;

    // Предложения пользователю ввести свое число.
    printf("\nEnter Your number for conversion >>> ");
    scanf("%b", &numberr);

    // Список доступних систем для перевода вводимого числа.
    printf("\nButton 1 - in decimal, Button 2- in octal, Button 3 - in hexadecimal\n");

    // Предложения пользователю ввести номер системы в которую нужно перевести вводимое число.
    printf("Enter number conversion: ");
    scanf("%d", &cnumberr);

    // Оператор в котором перечислени системы для конвертации вводимого числа.
    switch(cnumberr)
    {
    case 1:
        // Перевод в десятичную систему.
        printf("Your number = (%d)", numberr);
        break;
    case 2:
        // Перевод в восьмеричную систему.
        printf("Your number = (%o)", numberr);
        break;
    case 3:
        // Перевод в шестнадцатеричную систему.
        printf("Your number = (%x)", numberr);
        break;
    }

    return;
}

// Восьмеричная система счисления.
void octall(void)
{
    int number, cnumber;

    // Предложения пользователю ввести свое число.
    printf("\nEnter Your number for conversion >>> ");
    scanf("%o", &number);

    // Список доступних систем для перевода вводимого числа.
    printf("\nButton 1 - in decimal, Button 2 - in binary, Button 3 - in hexadecimal\n");

    // Предложения пользователю ввести номер системы в которую нужно перевести вводимое число.
    printf("Enter number conversion: ");
    scanf("%d", &cnumber);

    // Оператор в котором перечислени системы для конвертации вводимого числа.
    switch(cnumber)
    {
    case 1:
        // Перевод в десятичную систему.
        printf("Your number = (%d)", number);
        break;
    case 2:
        // Перевод в двоичную систему.
        printf("Your number = (%b)", number);
        break;
    case 3:
        // Перевод в шестнадцатеричную систему.
        printf("Your number = (%x)", number);
        break;
    }

    return;
}

// Десятичная система счисления.
void decimall(void)
{
    int nummber, cnummber;

    // Предложения пользователю ввести свое число.
    printf("\nEnter Your number for conversion >>> ");
    scanf("%d", &nummber);

    // Список доступних систем для перевода вводимого числа.
    printf("\nButton 1 - in binary, Button 2 - in octal, Button 3 - in hexadecimal\n");

    // Предложения пользователю ввести номер системы в которую нужно перевести вводимое число.
    printf("Enter number conversion: ");
    scanf("%d", &cnummber);

    // Оператор в котором перечислени системы для конвертации вводимого числа.
    switch(cnummber)
    {
    case 1:
        // Перевод в двоичную систему.
        printf("Your number = (%b)", nummber);
        break;
    case 2:
        // Перевод в восьмеричную систему.
        printf("Your number = (%o)", nummber);
        break;
    case 3:
        // Перевод в шестнадцатеричную систему.
        printf("Your number = (%x)", nummber);
        break;
    }

    return;
}

// Шестнадцатеричная система счисления.
void hexadecimall(void)
{
    int nnumber, cnnumber;

    // Предложения пользователю ввести свое число.
    printf("\nEnter Your number for conversion >>> ");
    scanf("%x", &nnumber);

    // Список доступних систем для перевода вводимого числа.
    printf("\nButton 1 - in binary, Button 2 - in octal, Button 3 - in decimal\n");

    // Предложения пользователю ввести номер системы в которую нужно перевести вводимое число.
    printf("Enter number conversion: ");
    scanf("%d", &cnnumber);

    // Оператор в котором перечислени системы для конвертации вводимого числа.
    switch(cnnumber)
    {
    case 1:
        // Перевод в двоичную систему.
        printf("Your number = (%b)", nnumber);
        break;
    case 2:
        // Перевод в восьмеричную систему.
        printf("Your number = (%o)", nnumber);
        break;
    case 3:
        // Перевод в десятичную систему.
        printf("Your number = (%d)", nnumber);
        break;
    }

    return;
}

/* ЧЁТКАЯ ПРОГРАММА, ОТВЕЧАЮ */