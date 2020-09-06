#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i, j;

    for (i = 0; i < list(); i++) {
        for (j = 0; j <= i; j++) {
            printf("%d", j + 1);
        }
        printf("\n");
    }

    return 0;
}

int list() {
    int lines[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    return sizeof(lines) / sizeof(int);
}