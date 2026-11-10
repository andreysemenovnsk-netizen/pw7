#include <stdio.h>
#include <stdbool.h>
#include <locale.h>
bool recursive_h(int n, int d){
    if(d * d > n){
        return true;
    }
    if(n % d == 0){
        return false;
    }
    return recursive_h(n, d + 1);
}
bool recursive(int n){
    if (n <= 1){
        return false;
    }
    return recursive_h(n, 2);
}
bool iterative(int n){
    if(n <= 1){
        return false;
    }
    for(int d = 2; d*d <= n; d++){
        if(n % d == 0){
            return false;
        }
    }
    return true;
}
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int number;
    printf("Введите число: ");
    if(scanf("%d", &number) != 1){
        return 1;
    }
    bool res_rec = recursive(number);
    bool res_iter = iterative(number);
    printf("Проверка числа %d:\n", number);
    printf("Результат рекурсии: %s\n", res_rec ? "Простое" : "Составное");
    printf("Результат итерации: %s\n", res_iter ? "Простое" : "Составное");
    if(res_rec == res_iter){
        printf("Резлуьтаты совпадают\n");
    } else {
        printf("Резльтаты разливаются\n");
    }
    return 0;
}