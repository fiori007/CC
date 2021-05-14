#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>


int main(){
    char arq_origem[30], arq_destino[30];
    char linha[100];
    printf("entre com o nome do arq origem\n");
    scanf("%s", arq_origem);
    printf("entre com o nome do arq destino\n");
    scanf("%s", arq_destino);

    FILE *fp= fopen(arq_origem, "r");
    FILE *fpDest= fopen(arq_destino, "w");

    if (fp==NULL){
        printf("erro na aberura do aqrquivo");
        return -1;

    }
    while (fgets(linha, 100, fp)!=NULL){
        char *tmp = strtok (linha, ",.;:?!\n\r\t");
        while(tmp != NULL){
            fprintf(fpDest, "%s\n", tmp);
            tmp = strtok(NULL, ",.:;?!\n\r\t");
        }
    }
    fclose(fp);
    fclose(fpDest);
    return 0;
}