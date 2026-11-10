#include <stdio.h>
#include <ctype.h>
int main(){
    int ch;
    int count = 0;
    printf("Type symbols: \n");
    while((ch = getchar()) != EOF){
        if (isxdigit(ch)){
            count++;
        } else if(ch = '\n'){
            printf("total : %d\n", count);
        }
    }
    return 0;
}