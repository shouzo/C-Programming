#include <stdio.h>
main()
{
	int year, k;
	scanf("%d", &year);
	
	if (year % 400 != 0)
		if ((year % 4 == 0) && (year % 100 != 0))
			k = 1;
		else
			k = 0;
	else
		k = 1;
	
	printf("%d\n", k);
}