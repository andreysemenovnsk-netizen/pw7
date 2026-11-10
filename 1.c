#include <stdio.h>
#include <ctype.h>
int examination(char ch);
int main(){
    int ch;
    printf("Type words: ");
    while((ch = getchar()) != EOF){
        if (isalpha(ch) && examination(ch)){
            putchar('#');
        } else {
            putchar(ch);
        }
    }
    return 0;
}

int examination(char ch){
    ch = tolower(ch);
    if(ch >= 'a' && ch <= 'z'){
        return(ch != 'a' && ch != 'e' && ch != 'y' && ch != 'u' && ch != 'o' && ch != 'i');
    }
    return 0;
}