#include <stdio.h>
#include <stdlib.h>

typedef struct
{
	char name[32];
	int age;
}persona;

persona *allocatePerson();
void fillPerson(persona *p);
void showPerson(persona *p);

int main()
{
	persona *hola;
	hola = allocatePerson();
	fillPerson(hola);
	showPerson(hola);

	return 0;
}

persona *allocatePerson(void)
{
	persona *p;

	p = (persona *)malloc(sizeof(persona));
	if( p == NULL)
	{
		perror("Unable to allocate structure");
		exit(1);
	}
	return(p);
}

void fillPerson(persona *p){
	printf("Type your name:\n");
	scanf("%s",p->name);
	printf("Type your age of empires num:\n");
	scanf("%d",&p->age);
}

void showPerson(persona *p){
	printf("%s is %d years old.\n", p->name, p->age);
}