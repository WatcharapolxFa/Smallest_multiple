#include<stdio.h>
int main()
{
	int num1 = 1, num2 = 2 , sum = 0;
	while (num1 > 0 )
	{
		num2 = 1;
		while ((num1%num2 ==0 )&&(num2 <=20))
		{
			if (num2 == 0)
			{
				sum = num1;
				break;
			}


		}



	}




	return 0;
}