#include <stdio.h>
#include <string.h>

typedef struct{
	char name[32];
	int age;
	float iq;
}person;

person fetchStruct(void);
void showStruct(person p);

int main()
{
	showStruct(fetchStruct());
	return(0);
}

person fetchStruct(void)
{
	static person author;

	strcpy(author.name,"Dan Gookin");
	author.age = 54;
	author.iq = 287.5;

	return(author);
}

void showStruct(person p)
{
	printf("Author %s is %d years old\n",
			p.name,
			p.age);
	printf("%s has an IQ of %.1f\n",
			p.name,
			p.iq);
}

