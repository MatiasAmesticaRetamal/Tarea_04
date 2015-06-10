//Matias Gabriel Amestica Retamal
//tarea 04
//lenguaje de programacion

#include <stdio.h>
#define N 31

int main(){
	int i=0,a=0,j=1,s=0,b,cant,count=0;
	char arr[N];
	// llenar matriz con asteriscos
	for (i = 0; i < N; ++i){
		arr[i]='*';
	}
	//pedir palabra
	printf("ingrese palabra \n");
	scanf("%s",arr);
	//buscar cantidad de letras
	for (i = 0; i < N; ++i){
		if (arr[i]=='*'){
			break;
		}
		count++;
	}
	count=count-1;
	cant=count;
	count=count/2;
	//busca cantidad de letras iguales
	i=0;
	while(i<cant-1){
		for (j = cant-1; j>i; --j){
			if (arr[i]==arr[j]){
				s++;
			}
		}
		i++;
	}
	// si la cantidad de letras iguales es menor a la mitad en enteros no puede ser palindromo
	if (count==s || count==s-2){
		printf("1  \n");
	}else{
		printf("0\n");
	}
	return 0;
}