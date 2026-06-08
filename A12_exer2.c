#include <stdio.h>

int main() {
    char nome[30];
    int quant = 0;

    printf("Digite seu primeiro nome: ");
    scanf("%29s", nome);

    for(int i = 0; nome[i] != '\0'; i++) {
       if(nome[i] >= 'A' && nome[i] <= 'Z') {
           nome[i] = nome[i] + 32;
       }
        quant ++;
    }
    printf("Quantidade de letras: %d\n", quant);
    
    printf("Nome invertido: ");
    
    
    for(int i = quant - 1; i >= 0; i--) {
        printf("%c", nome[i]);
    }
    return 0;
}
