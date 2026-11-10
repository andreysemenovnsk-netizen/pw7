#include <stdio.h>
#include <locale.h>
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double num1, num2, result;
    char opretion;
    printf("Введите первое число: ");
    if(scanf("%lf", &num1) != 1){
        printf("Ошибка: Введенно больше одного числа / Введено не число\n");
        return 1;
    }
    printf("Введите знак: (*, /, +, -) \n");
    scanf(" %c", &opretion);

    printf("Введите второе число: \n");
    if(scanf("%lf", &num2) != 1){
        printf("Ошибка: Введенно больше одного числа / Введено не число\n");
        return 1;
    }
    switch(opretion){
        case '+':
           result = num1 + num2;
           printf("Сложение чисел: %.2lf + %.2lf = %.2lf", num1, num2, result);
           break;
        case '-':
           result = num1 - num2;
           printf("Вычитание чисел: %.2lf - %.2lf = %.2lf", num1, num2, result);
           break;
        case '*':
           result = num1 * num2;
           printf("Умножение чисел: %.2lf * %.2lf = %.2lf", num1, num2, result);
           break;
        case '/':
           if (num2 == 0){
            printf("На ноль делить нельзя");
           } else {
            result = num1 / num2;
           printf("Деленеи чисел: %.2lf / %.2lf = %.2lf", num1, num2, result);
           }
           break;
        default:
           printf("Ошибка Ввода");
           break;
    }
    return 1;
}