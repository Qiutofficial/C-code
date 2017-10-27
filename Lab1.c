#include <stdio.h>

void Error()
{
	printf("Error");
}

int main(int argc, char* argv[])
{
	char t;
	float z;
	if (argc < 2) { Error(); return 0; }
	if (argc == 2) 
	{ 
		sscanf(argv[1], "%f", &z);
		printf("\nC = %.2f\nK = %.2f\nF = %.2f\n\nC = %.2f\nK = %.2f\nF = %.2f\n\nC = %.2f\nK = %.2f\nF = %.2f", 
		z, z + 273.15, z * 1.8 + 32, z - 273.15, (z - 273.15) * 1.8 + 32, z, (z - 32) / 1.8, z, (z - 32) / 1.8 - 273.15);
	}
	if (argc == 3) 
	{
		t = argv[2][0];
		sscanf(argv[1], "%f", &z);
		if (t == 'C' || t == 'c') printf("\nC = %.2f\nK = %.2f\nF = %.2f", z, z + 273.15, z * 1.8 + 32);
		else
		{
			if (t == 'F' || t == 'f') printf("\nC = %.2f\nK = %.2f\nF = %.2f", z - 273.15, (z - 273.15) * 1.8 + 32, z);
			else
			{
				if (t == 'K' || t == 'k') printf("\nC = %.2f\nK = %.2f\nF = %.2f", (z - 32) / 1.8, z, (z - 32) / 1.8 - 273.15);
			}
		}
	}
	return 0;	
}
