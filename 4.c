#include <stdio.h>

int bite(int numb, int bit);
int main(void)
{
    int numb, bit;
    printf("������� ����� �����: ");
    scanf("%i", &numb);
    printf("������� ������ �������: ");
    scanf("%i", &bit);
    printf("%d\r\n", bitt(numb, bit));
    return 0;
}
int bite(int numb, int bit)
{
    int mask = 1;
    mask <<= bit;
    return numb & mask;
}