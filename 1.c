#include <stdio.h>
#include <math.h>

int decimal(char bin[]);

int main(void)
{
	printf("Десятичное число: %i\n", decimal("01001001"));
	return 0;
}

int decimal(char bin[])
{
	int dec = 0;
	int bin_int[8];

	for(int i = 0; i <= 7; ++i)
	{
		if(bin[i] == '1')
			bin_int[i] = 1;
		else bin_int[i] = 0;
	}

	for(int i = 0; i <= 7; i++) {
	  dec = dec + bin_int[i] * pow(2,7-i);
	}

	return dec;
}