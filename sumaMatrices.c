#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define NF 4
#define NC 3

void rellena(int m[NF][NC]);
void suma(int m1[NF][NC],int m2[NF][NC],int m3[NF][NC]);
int main(){
	int i,j;
	int mat1[NF][NC],mat2[NF][NC],mat3[NF][NC];

	printf("La matriz 1 es:\n");
	rellena(mat1);
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%4d",mat1[i][j]);
		}
		printf("\n");
	}
	
	printf("La matriz 2 es:\n");
	rellena(mat2);
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%4d",mat2[i][j]);
		}
		printf("\n");
	}
	
	printf("La matriz suma es:\n");
	suma(mat1,mat2,mat3);
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%4d",mat3[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}

void rellena(int m[NF][NC]){
	int i,j;
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			m[i][j]=rand()%(12)+6;
		}
	}
}

void suma(int m1[NF][NC],int m2[NF][NC],int m3[NF][NC]){
	int i,j;
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			m3[i][j]=((m1[i][j])+(m2[i][j]));
		}
	}
}

		
