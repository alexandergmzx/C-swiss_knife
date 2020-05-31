#include <stdio.h>

int main()
{
	typedef struct{
		char day[10];
		float temp;
	}weather;

	weather t;

	weather week[7] = {
		{ "Sunday", 2.5 },
		{ "Monday", 8.4 },
		{ "Tuesday", 5.0 },
		{ "Wednesday", 3.8 },
		{ "Thursday", 5.1 },
		{ "Friday", 2.8 },
		{ "Saturday", 5.2 }
	};


/* Sort the array */
	for(int outer=0;outer<7;outer++)
		for(int inner=outer+1;inner<7;inner++)
		{
			if( week[outer].temp > week[inner].temp)
			{
				t = week[inner];
				week[inner] = week[outer];
				week[outer] = t;
			}
		}

	puts("This week's forecast:");
	for(int x=0;x<7;x++)
		printf("%10s %.1f degrees\n",
				week[x].day,
				week[x].temp);

	return(0);
}


