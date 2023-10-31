#include <stdio.h> //Hash para switch
#include <stdlib.h>
#include <time.h>

int menor(int A[100], int n, int Lim[100], int nivel){
	int bueno = A[0];
	int pos = 0;
	int y = 0;
	
	for(int b = 0; b < n; b++){
		if(b < nivel){
			//skip
		}
		else if(bueno > A[b]){
			bueno = A[b];
			pos = b;
		}
	}
	return pos;
}

int main(){
	int res, peque = -1;
	srand(time(NULL));
	
	int Arreglo[100], Bueno[100];
	for(int a = 0; a < 100; a++){
		Arreglo[a] = rand() % 100 - 50;
		printf("Valor %d: %d\n", a, Arreglo[a]);
	}
	printf("\n");
	for(int c = 0; c < 100; c++){
		res = menor(Arreglo, 100, Bueno, c);
		Bueno[c] = res;
		printf("Organizado %d: %d\n", c, Bueno[c]);
	}
	
	return 0;
}
