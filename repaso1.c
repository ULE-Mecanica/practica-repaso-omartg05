#include <stdio.h>

int multiplica(int n1, int n2);
int main(){
	int num1,num2,resultado;
	printf("Introduce un numero:");
	scanf("%d",&num1);
	printf("Introduce otro numero:");
	scanf("%d",&num2);
	resultado=multiplica(num1,num2);
	printf("El resultado es=%d\n",resultado);
	return 0;
}

int multiplica(int n1, int n2){
	int res=0,i=1;
	
	while(i<=n2){	
		res=res+n1;	
		i++;
	}
	
	return (res);
}
