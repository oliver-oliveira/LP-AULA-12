#include <stdio.h>
#include <math.h> 

int main() {
    float x[4], y[4];
    
    float lado1, lado2, lado3, lado4;
    
    float diagonal1, diagonal2;

    printf("--- Verificador de Quadrado ---\n");

    printf("Digite a coordenada (X) do Vertice 1: ");
    scanf("%f", &x[0]);
    printf("Digite a coordenada (Y) do Vertice 1: ");
    scanf("%f", &y[0]);
    
    printf("Digite a coordenada (X) do Vertice 2: ");
    scanf("%f", &x[1]);
    printf("Digite a coordenada (Y) do Vertice 2: ");
    scanf("%f", &y[1]);
    
    printf("Digite a coordenada (X) do Vertice 3: ");
    scanf("%f", &x[2]);
    printf("Digite a coordenada (Y) do Vertice 3: ");
    scanf("%f", &y[2]);
    
    printf("Digite a coordenada (X) do Vertice 4: ");
    scanf("%f", &x[3]);
    printf("Digite a coordenada (Y) do Vertice 4: ");
    scanf("%f", &y[3]);
    
    printf("------------------------------------------------\n");

    lado1 = sqrtf(powf(x[1] - x[0], 2) + powf(y[1] - y[0], 2));
    lado2 = sqrtf(powf(x[2] - x[1], 2) + powf(y[2] - y[1], 2));
    lado3 = sqrtf(powf(x[3] - x[2], 2) + powf(y[3] - y[2], 2));
    lado4 = sqrtf(powf(x[0] - x[3], 2) + powf(y[0] - y[3], 2));

    diagonal1 = sqrtf(powf(x[2] - x[0], 2) + powf(y[2] - y[0], 2));
    diagonal2 = sqrtf(powf(x[3] - x[1], 2) + powf(y[3] - y[1], 2));

   
    printf("O comprimento do Lado 1: %.4f\n", lado1);
    printf("O comprimento do Lado 2: %.4f\n", lado2);
    printf("O comprimento do Lado 3: %.4f\n", lado3);
    printf("O comprimento do Lado 4: %.4f\n", lado4);
    printf("O comprimento da Diagonal 1: %.4f\n", diagonal1);
    printf("O comprimento da Diagonal 2: %.4f\n", diagonal2);
    printf("------------------------------------------------\n");

    if (lado1 == lado2 && lado2 == lado3 && lado3 == lado4 && diagonal1 == diagonal2) {
        printf("A figura formada e um quadrado.\n");
    } else {
        printf("A figura formada nao e um quadrado.\n");
    }
    printf("------------------------------------------------\n");
    return 0;
}
