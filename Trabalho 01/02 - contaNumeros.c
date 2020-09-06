#include <stdio.h>
#include <stdlib.h>

int main()
{
    char url[] = "in1.txt";
    int m;

    FILE *arq;

    arq = fopen(url, "r");

    if(arq == NULL) {
        printf("Erro, nao foi possivel abrir o arquivo\n");
        return 0;
    }

    printf("%d", numbersLength(m, arq));

    fclose(arq);



    return 0;
}

int numbersLength(int m, FILE *arq) {
    int numbers = 0;
    while((fscanf(arq,"%d", &m)) != EOF ) {
        numbers++;
    }
    return numbers;
}
