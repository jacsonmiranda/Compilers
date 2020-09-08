%{
	#include "stdio.h"
	#include "hash.h"

	int linha = 0;
%}

%%

[\n] {
	printf("Linha %d", atoi(yytext));
	linha = linha + 1;
}

[a-zA-Z]+ {
	printf("Palavra match: %s \n Linha: %d", yytext, atoi(yytext));
}

[0-9]+ {
	printf("Inteiro");
}

%%

