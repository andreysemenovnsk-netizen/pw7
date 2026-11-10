#include <stdio.h>
#include <locale.h>
void sorting(int *ptr1, int *ptr2, int *ptr3);
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int a;
    int b;
    int c;
    printf("Введите числа: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Исходные данные:\n");
    printf("a = %d, b = %d, c = %d\n", a, b, c);
    sorting(&a, &b, &c);
    printf("Значения после сортировки\n");
    printf("a = %d, b = %d, c = %d\n", a,b,c);
    return 0;

}
void sorting(int *ptr1, int *ptr2, int *ptr3){
    int temp;
    if(*ptr1 > *ptr2){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
    if(*ptr2 > *ptr3){
        temp = *ptr2;
        *ptr2 = *ptr3;
        *ptr3 = temp;
    }
    if(*ptr1 > *ptr2){
        temp = *ptr1;
        *ptr1 = *ptr2;
        *ptr2 = temp;
    }
}