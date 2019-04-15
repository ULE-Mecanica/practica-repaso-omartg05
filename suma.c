#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NF 6
#define NC 6

void inicializa(int mat[NF][NC]);
int suma(int mat[NF][NC]);
int main(){
	int i,j;
	int matriz[NF][NC];
	int resul;
	srand(time(NULL));
	inicializa(matriz);
	printf("La matriz es:\n");
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%4d",matriz[i][j]);
		}
		printf("\n");
	}
	
	resul=suma(matriz);
	printf("La suma es= %d\n",resul);

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

int suma(int mat[NF][NC]){
	int i,j;
	int sum=0;
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			sum=sum+mat[i][j];
		}
	}
	return (sum);
}
