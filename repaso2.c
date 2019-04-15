#include <stdio.h>

int division(int n1, int n2);
int main(){
	int num1,num2,resultado;
	printf("Introduce un numero:");
	scanf("%d",&num1);
	printf("Introduce otro numero menor:");
	scanf("%d",&num2);
	resultado=division(num1,num2);
	printf("El resultado es=%d\n",resultado);
	return 0;
}

int division(int n1, int n2){
	int cont=0;
	while(n1>=n2){
		n1=n1-n2;	
		cont++;
	}
	return (cont);
}
