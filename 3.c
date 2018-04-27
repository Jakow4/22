#include <stdio.h>

int bit(int n);

int main(void) {
	
	int n = 192;
	printf("Number: %d\n", n);
	
    printf("Number of bits: %d\n", bit(n));
	
	return 0;
}

int bit(int n)
{
	int y = 0;
	int i = 0;
	while(i<16)
	{
		if((1&n) == 1) {
		y++;
		}
		n>>=1;
		i++;
	}
	
	return y;
} 