#include <stdio.h>

int main()
{

	int num = 0;
	scanf_s("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		if (i == 1)
		{
			for (int j = 1; j <= num; j++)
				printf("*");
			printf("\n");
		}
		else if (i < num)
		{
			for (int j = 1; j <= num; j++)
			{
				if (j == 1)
					printf("*");
				else if (j < num)
					printf(" ");
				else
					printf("*");
			}
			printf("\n");
		}
		else
		{
			for (int j = 1; j <= num; j++)
				printf("*");
			printf("\n");
		}
	}
	return 0;
}







//
//for (int i = 1; i <= num; i++)
//{
//	for (int j = 1; j <= num; j++)
//		printf("¤±");
//	printf("\n");
//}
