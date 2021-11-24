#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int  main()
{
	srand(time(NULL));
	int a[10] , i, tmp, range;
	range = 10;
	
	for (i = 0; i <= 10; i++)
	{
		a[i] = 1 + rand() % 100;
	}
	while (range > 0)
	{
		for (i = 0; i < range; i++)
		{
			if (a[i] > a[i + 1])
			{
				tmp = a[i + 1];
				a[i+ 1] = a[i];
				a[i] = tmp;
			}
		}
		range--;
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	system("pause");
	return 0;
}