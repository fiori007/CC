#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

/*
Implemente uma função que receba como parâmetro um array de números reais de tamanho N e retorne quantos numeros negativos 
há nesse array. Essa função deve obedecer ao prototipo: int negativos(float *vet, int N);

 */ 

int main(){
    char linha[50];
    FILE *fp = fopen("batata.txt", "a");
    while (fgets(linha, 50, fp) != NULL)
        puts(linha);
    printf("Entre com a linha: ");
    scanf("%[^\n]s", linha);
    //fputs(linha, fp);
    fprintf(fp, "\n\n\n\n\n%s", linha);
    fclose(fp);
    return 0;
}