#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
	char name[32];
	int age;
	float iq;
}person;

person *allocateStruct(void);
void fetchStruct(person *p);
void showStruct(person *p);

int main()
{
	person *author;

	author = allocateStruct();
	fetchStruct(author);
	showStruct(author);
	return(0);
}

person *allocateStruct(void)
{
	person *p;

	p = (person *)malloc(sizeof(person));
	if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
	return(p);
}

void fetchStruct(person *p)
{
	strcpy(p->name,"Dan Gookin");
	p->age = 54;
	p->iq = 287.5;
}

void showStruct(person *p)
{
	printf("Author %s is %d years old\n",
			p->name,
			p->age);
	printf("%s has an IQ of %.1f\n",
			p->name,
			p->iq);
}

