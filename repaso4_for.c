#include <stdio.h>

int funcion1(int n1);

int main(){

	int num,bucle;
	printf("Introduce un numero:");
	scanf("%d",&num);
	bucle=funcion1(num);
	printf("El resultado es %d\n",bucle);

	return 0;
}

int funcion1(int n1){
	int i,res=1;
	for(i=1;i<=n1;i++){
		res=res*i;
	}
	return (res);
}

