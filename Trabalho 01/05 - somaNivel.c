//Implementar um programa em linguagem C para ler o arquivo e fazer a soma dos
//números em cada nível de parênteses (contando ou não os que estão dentro de
//outro nível). Ler os arquivos in3.txt e in4.txt.
#include <stdlib.h>
#include <stdio.h>
int main(){
    int num = 4, soma = 0, r;
    char k, aux;
    FILE *p;
    p=fopen("in3.txt", "r");
    if(p== NULL){
        printf("Arquivo nao existe\n");
    }
    char j = getc(p);
    k = j;
    //aux = j;
    while(j != EOF){
        printf("%c",j);
        if(num == 1){
            //r = atoi(k);
            printf(" teste %d",r);
            //soma =soma + r;
            //if(k != ' ' && k != '\t' && k != ' ' && k != '(' && k != ')'){
        }
        if (num == 0){
            r = atoi(j);
            printf("%c",r);
            //soma =soma + r;
            printf("total %d\n",soma);
        }
        if(k == '('){
            num = 1;
        }
        if(k == ')'){
            num = 0;
        }
        k = j;
        j = getc(p);
    }
    fclose(p);
    printf("\n");
}
