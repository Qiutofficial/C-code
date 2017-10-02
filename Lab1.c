#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char t;
	float z;
	
	printf("Vvedite znachenie: ");
	scanf("%f", &z);
	printf("Ukazhite tip temperaturi: ");
	getchar();
	t = getchar();

	if (t == 'C' || t == 'c') printf("\nC = %f\nK = %f\nF = %f", z, z + 273.15, z * 1.8 + 32);
	else
	{
		if (t == 'F' || t == 'f') printf("\nC = %f\nK = %f\nF = %f", z - 273.15, (z - 273.15) * 1.8 + 32, z);
		else
		{
			if (t == 'K' || t == 'k') printf("\nC = %f\nK = %f\nF = %f", (z - 32) / 1.8, z, (z - 32) / 1.8 - 273.15);
		}
	}
	_getch();
}