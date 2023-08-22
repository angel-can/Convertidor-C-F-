#include<stdio.h>
#include<windows.h>


int main()
{
	system("color F9");
	int c,f;
	float cf,fc;
	printf("\n              CONVERTIDOR DE TEMPERATURAS");
	printf("\n\nEste rograma convierte dos temperaturas:\n \n -La primera de grados celsius a grados farenheit\n -La segunda de farenheit a celsius.\n\n Dame la temperatura 1 en grados celsius:");
	scanf("%d",&c);
	printf("Dame la temperatura 2 en grados farenheit:");
	scanf("%d",&f);
	cf= c*1.8+32;
	fc=(f-32)/1.8;
	system("cls");
	
	printf("\nTemperatura 1 en grados celsius: %d    Temperatura 2 en grados farenheit:%d ",c,f);
	printf("\nTemperatura 1 en grados farenheit: %.1f    Temperatura 2 en grados celsius:%.1f ",cf,fc);

	return (0);
}
