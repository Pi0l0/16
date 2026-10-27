#include <stdio.h>
#include "func.mia.c"
#include "mac.mia.c"

int main(){

int SELECT;
int vector[20];
int num = 20;
int flag = 0;

random999(vector,num);
mostrar(vector,num);

	scanf("%d",&SELECT);

while (SELECT < 4 && SELECT > -1){
		if(flag){


			scanf("%d",&SELECT);
		}
		flag = 1;

	switch(SELECT){

	case 0:
		printf(" \nValor maximo generado: %d",maximo(vector,num));
	break;

	case 1:
		printf(" \nValor minimo generado: %d",minimo(vector,num));
	break;

	case 2:
		printf(" \nEl vector ordenado es:");
		maytomen(vector,num)
		mostrar(vector,num);
	break;

	case 3:
		printf(" \nEl vector ordenado es:");
		mentomay(vector,num)
		mostrar(vector,num);
	break;

	}

}


return 0 ;
}
