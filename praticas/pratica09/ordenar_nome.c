#include <stdio.h>
#include <string.h>

int main() {
    
    char str1[50];
    char str2[50];
    char str3[50];
    char tmp[50];

    printf("digite o valor da string 1: ");
    scanf("%s", str1);
    printf("digite o valor da string 2: ");
    scanf("%s", str2);
    printf("digite o valor da string 3: ");
    scanf("%s", str3);

    if(strcmp(str1, str2) > 0){
        strcpy(tmp, str1);
        strcpy(str1, str2);
        strcpy(str2, tmp);
    }

    if(strcmp(str1, str3) > 0) {
        strcpy(tmp, str1);
        strcpy(str1, str3);
        strcpy(str3, tmp);
    }

    if(strcmp(str2, str3) > 0){
        strcpy(tmp, str2);
        strcpy(str2, str3);
        strcpy(str3, tmp);
    }

    printf("\nOrdem alfabetica: %s, %s, %s", str1, str2, str3);

    return 0;
}