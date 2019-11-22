#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
main()

{
	
	
	
	
	
	
	int num1,num2,num3,soma,media,produto;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
	
	soma=num1+num2+num3;
	
	media=(num1+num2+num3)/3;
	
	produto=num1*num2*num3;
	
	
	printf("A soma dos 3 numeros equivale a: %d \nA media dos 3 numeros equivale a: %d \nO produto dos 3 numeros equivale a: %d \n-",soma,media,produto);
	
	system("PAUSE");
	return 0;
}

