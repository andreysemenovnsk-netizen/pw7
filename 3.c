#include <stdio.h>
#include <locale.h>
double calc(double a, double b);
int main(){
    setlocale(LC_ALL, "ru_RU.UTF-8");
    double NUMBER1,  NUMBER2;
    while(scanf("%lf %lf", &NUMBER1, &NUMBER2) == 2){
        double result = calc(NUMBER1,NUMBER2);
        printf("Резульат: %.4f\n", result);
    }
    return 0;
}
double calc(double a, double b){
    double sum = a + b;
    return( sum * sum * sum);
}