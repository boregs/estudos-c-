#include <stdio.h>
#include <stdlib.h>

/* AULA DE IF E ELSE, E WHILE LOOPS */

int main(int argc, char *argv[]) {
	int A = 10;
	int B = 14;
	char ch= 'S';
	long num= 10;
	short int C = 3;
	
	/* if else comum, parecido com python */
	if (A > B){         /* a principal diferen�a do python � a inclusao da condi��o dentro de parenteses*/
		printf("\nA maior que B");
	}
	else {
		printf("\nB maior que A");
	}
	
	/*ISSO TAMBEM FUNCIONA
	
	if (A > B){
		ch = 'S';
	}
	else{
		ch = 'N';
	}
	
	if (ch=='N') printf("\nA menor que B");
	else printf("\nA maior que B");]
	
	**Uma boa pratica de programa��o em C �**
	'N' == ch
	isso previne que um erro bobo como esquecer um dos simbolos de igual cause um problem�o
	causando um erro de compila��o pq vc estaria atribuindo uma variavel a uma variavel
	N(variavel) = ch(variavel)
	
	*/
	
	
	
	//WHILE LOOP basico, bastante parecido com o if else acima
	while (A < B){
		printf("\n1");
		A++; // legal colocar isso para evitar um loop infinito
	}
	
	return 0;
}
