#include <stdio.h>
#include <stdlib.h>

void random999(int[],int);
int maximo(int[],int);
int minimo(int[],int);
void mostrar(int[],int);



void random999(int vec[],int N){


for(int i = 0; i < N ; i++){

	vec[i] = (rand() % 999);

	}
}

int maximo(int vec[],int N){

int may = 0;

	for(int i = 0; i < N ; i++){
		if(may < vec[i])
			may = vec[i];
	}
	return may;
}


int minimo(int vec[],int N){

int men = 1000;

	for(int i = 0; i < N ; i++){
		if(men > vec[i])
			men = vec[i];
	}
	return men;
}

void mostrar(int vec[],int N){

	for(int i = 0; i < N ; i++){

		printf("|%02d| \n",vec[i]);

	}
}

