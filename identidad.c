#include <stdio.h>
#include <stdlib.h>
#define NF 9 
#define NC 9

void inicializa(int mat[NF][NC]);

int main(){
	int i,j;
	int matriz[NF][NC];
	inicializa(matriz);
	for(i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			printf("%5d",matriz[i][j]);
		}
		printf("\n");
	}

	return 0;
}

void inicializa(int mat[NF][NC]){
	int i,j;
	for (i=0;i<NF;i++){
		for(j=0;j<NC;j++){
			if(i==j){
				mat[i][j]=1;
			}
			else{
				mat[i][j]=0;
			}
		}
		
	}
}
