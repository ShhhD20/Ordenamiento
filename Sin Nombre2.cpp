#include <stdio.h>
#include <stdlib.h> 
#include <time.h>

int main() {
	int i,j,n,temp=0, posicion=0; srand(time(NULL));
	printf("Numero de elementos a ordenar\n");
	scanf("%d", &n); 
	int lista[n];
	printf("Lista sin ordenar\n"); 
	for (i=0;i<n;i++){
		lista[i]=rand() % (100) + 1; 
		printf("%d ",lista[i]);
	}
	printf("\n");
	for (i=0;i<n;i++){
		posicion = i;
		for (j=i+1;j<n;j++){
			if(lista[posicion]>lista[j]) 
			posicion = j;
		}
		if (posicion != i){
			temp = lista[i];
			lista[i]= lista[posicion]; 
			lista[posicion] = temp;
		}
	}
	printf("Lista ordenada\n"); 
	for (i=0;i<n;i++) 
		printf("%d ",lista[i]);
	
	return 0;
}
