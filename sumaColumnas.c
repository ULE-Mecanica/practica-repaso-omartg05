#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NF 3
#define NC 6

void inicializa(int mat[NF][NC]);
void suma(int mat[NF][NC], int v[NC]);
int main(){
	int i,j;
	int matriz[NF][NC];
	int vector[NC];
	
	srand(time(NULL));
	inicializa(matriz);
	printf("La matriz es:\n");
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%4d",matriz[i][j]);
		}
		printf("\n");
	}
	
	suma(matriz,vector);
	printf("La suma por columnas es:\n");
	for(i=0;i<NC;i++){
		printf("%4d",vector[i]);
	}
	printf("\n");
	return 0;
}

void inicializa(int mat[NF][NC]){
	int i,j;
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			mat[i][j]=rand()%(9)+1;
		}
	}
}

void suma(int mat[NF][NC],int v[NC]){
	int i,j;
	for(j=0;j<NC;j++){
		v[j]=0;
		for(i=0;i<NF;i++){
			v[j]=v[j]+mat[i][j];
		}
		
	}
}
