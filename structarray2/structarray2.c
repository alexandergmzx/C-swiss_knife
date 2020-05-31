#include <stdio.h>

int main()
{
	typedef struct{
		char day[10];
		float temp;
	}weather;
	weather today = { "Sunday", 72.5 };

	puts("Today's forecast:");
	printf("%10s %.1f degrees\n",
			today.day,
			today.temp);

	return(0);
}

