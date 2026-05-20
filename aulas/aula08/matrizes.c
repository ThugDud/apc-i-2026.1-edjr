#include <stdio.h>

int main() {

    int tabela[3][3] = {{1,2,3},
                        {4,5,6},
                        {7,8,9}};

    // 1 x x
    // x x x
    // x x x
    // ou
    //{{1,x,x},{x,x,x},{x,x,x}}

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("|%i| ", tabela[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("\nEscreva valor para linha %d coluna %d: ", i+1, j+1);
            scanf("%d", &tabela[i][j]);
        }
    }
    printf("\n\n");

    for (int i = 0; i < 3; i++){
        for (int j = 0; j < 3; j++){
            printf("|%i| ", tabela[i][j]);
        }
        printf("\n");
    }
    return 0;
}