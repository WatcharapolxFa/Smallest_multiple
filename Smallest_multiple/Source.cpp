#include<stdio.h>
int main()
{
	int num1 = 1, num2 = 1 , sum = 0;
	while (num1 > 0 )
	{
		num2 = 1;
		while ((num1 % num2 == 0 )&&( num2 <=20))
		{
			if (num2 == 20)
			{
				sum = num1;
				break;
			}
			num2++;
		}
		num1++;
		if (sum > 0)
		{
			break;
		}

	}
	printf_s("%d\n", sum);
	return 0;
}