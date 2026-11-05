#include <stdio.h>
#include <string.h>

int main() {
    
    char verbalistico[50];

    printf("Escreve o verbo: ");
    scanf("%s", verbalistico);
    int leng = strlen(verbalistico);
    
    if(verbalistico[leng-1] == 'r' && verbalistico[leng-2] == 'a'){
        printf("\nÉ verbo infinitivo");
    } else {
        printf("\nNão é no infinitivo");
    }


    return 0;
}