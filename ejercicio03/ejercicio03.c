#include <stdio.h>

int main(int argc, char *argv[])
{
	printf("There were %d command line arguments\n",argc);
	printf("This program is named: %s\n", argv[0]);

	if (argc < 2)
	{
		puts("Please specify a filename");
		return (1);
	}

	printf("I will examine file %s\n", argv[1]);

	return(0);
}

