#include <stdio.h>

int	    is_power_of_2(unsigned int n)
{
	if (n <= 0)
		return (0);
	if (n == 1 || n == 2)
		return (1);
	while (n > 1 && n % 2 == 0)
		n /= 2;
	return (n == 1 ? 1 : 0);
}




int main(void)
{
	unsigned int num1 = -1; //0
	unsigned int num2 = 0;//0
	unsigned int num3 = 1;//1
	unsigned int num4 = 2;//1
	unsigned int num5 = 3;//0
	unsigned int num6 = 4;//1
	unsigned int num7 = 6;//0
	unsigned int num8 = 8;//1

	printf("-1, %d\n", is_power_of_2(num1));
	printf("0, %d\n", is_power_of_2(num2));
	printf("1, %d\n", is_power_of_2(num3));
	printf("2, %d\n", is_power_of_2(num4));
	printf("3, %d\n", is_power_of_2(num5));
	printf("4, %d\n", is_power_of_2(num6));
	printf("6, %d\n", is_power_of_2(num7));
	printf("8, %d\n", is_power_of_2(num8));
}
