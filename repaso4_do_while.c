#include <stdio.h>

int funcion(int n);

int main(){

	int num,bucle;
	printf("Introduce un numero:");
	scanf("%d",&num);
	bucle=funcion(num);
	printf("El resultado es %d\n",bucle);

	return 0;
}

int funcion(int n){
	int i=1,res=1;
	do{
		res=res*i;
		i++;
	}
	while(i<=n);
	
	return (res);
}

