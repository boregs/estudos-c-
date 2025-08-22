#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	//tabuada do 9
	
	int count = 10;
	int i = 0;
	for (i=1; i <= count; i++){  // para i começando em 1, enquanto i for menor ou igual a count, incremente i em 1
								 // 
		printf("%d x 9 =%d\n", i,i*9);
	}
	
	return 0;
}
