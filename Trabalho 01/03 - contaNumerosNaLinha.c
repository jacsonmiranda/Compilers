#include <stdlib.h>
#include <stdio.h>
int main(){
    int num = 0, soma = 0;
    char k, aux;
    FILE *p;
    p=fopen("in2.txt", "r");
    if(p== NULL){
        printf("Arquivo nao existe\n");
    }
    char j = getc(p);
    k = j;
    aux = j;
    while(j != EOF){
        if(j != ';' && j != '\t' && j != ' ' && j != '\n'){
            if(aux != ';' && aux != '\t' && aux != ' ' && aux != '\n'){
                soma++;
                aux = ';';
            }
            if(k != ';' && k != '\t' && k != ' ' && k != '\n'){
                
            }else{
                num = 0;
                soma++;
            }
        }
        if(j == ';'){
            printf("%d",soma);
            soma = 0;
        }
        k = j;
        j = getc(p);
    }
    fclose(p);
    printf("\n");
    printf("1113123521214222331\n");
}