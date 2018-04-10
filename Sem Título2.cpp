#include<stdio.h>
int main(){
	int cont, num, impar;
	cont=1;
	impar=0;
	while(cont<=10){
		printf("Digite 10 Numeros: ");
		scanf("%d", &num);
		if (num % 2 != 0){
			impar++;
		}			
	cont++; // cont = cont + 1
	}
	printf("%d\n", impar);
return 0;
}
