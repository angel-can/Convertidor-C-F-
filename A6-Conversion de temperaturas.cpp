#include<stdio.h>
#include<windows.h>
#include<conio.h>
#include<math.h>

int main()
{
	system("color F9");
	int c,f;
	float cf,fc;
	printf("Dame la temperatura 1 en grados celsius:");
	scanf("%d",&c);
	printf("Dame la temperatura 2 en grados farenheit:");
	scanf("%d",&f);
	cf= c*1.8+32;
	fc=(f-32)/1.8;
	
	printf("Temperatura 1 en grados farenheit: %.3f    Temperatura 2 en grados celsius:%.3f ",cf,fc);

	return (0);
}
