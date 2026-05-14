#include <stdio.h>

int main() {
    float m[3][3];
    int i, j;

    for(i=0;i<3;i++){
        for(j=0;j<3;j++){
            printf("Digite um numero: ");
            scanf("%f", &m[i][j]);
        }
    }

    printf("\nOrdem inversa:\n");
    for(i=2;i>=0;i--){
        for(j=2;j>=0;j--){
            printf("%.2f ", m[i][j]);
        }
        printf("\n");
    }

    getch();
}