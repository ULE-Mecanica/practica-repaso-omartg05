#include<stdio.h>

int main(){
	int contrasena,i;
	

	for(i=1;i<=3;i++){
		printf("Introduce tu contraseña:");
		scanf("%d",&contrasena);
		
		if(contrasena==4567){
			printf("Contraseña correcta\n");
			return -1;
		}
		else{
			if(contrasena<4567){
			printf("Esta clave es menor que la contraseña\n");
			}
			else{
				printf("Esta clave es mayor que la contraseña\n");
			}
		}
		
	}
	return 0;
}


