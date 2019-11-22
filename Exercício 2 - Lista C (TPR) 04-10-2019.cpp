#include <stdio.h>
#include <stdlib.h>
#include <math.h>

 
main()

{
	int num1,num2,num3,num4,soma;
	printf("Digite o primeiro numero: ");
	scanf("%d",&num1);
	printf("Digite o segundo numero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro numero: ");
	scanf("%d",&num3);
	printf("Digite o quarto numero: ");
	scanf("%d",&num4);
	
	if (num1>num2 && num1>num3 && num1>num4)
	soma=num2+num3+num4;
	
	
	if (num2>num1 && num2>num3 && num2>num4)
	soma=num1+num3+num4;
	
	
	if (num3>num1 && num3>num2 && num3>num4)
	soma=num1+num2+num4;
	
	
	if (num4>num1 && num4>num2 && num4>num3)
	soma=num1+num2+num3;
	
	printf("A soma dos tres menores equivale a: %d\n",soma);
	system("PAUSE");
	return 0;
}
