#include <stdio.h>
#include <ctype.h>

void modify(char *s);

int main(void)
{
	char texto[64];

	puts("Type some text with spaces");
	fgets(texto,64,stdin);
	modify(texto);
	printf("Here is your new text without spaces ;)\n%s", texto);

	return 0;
}

void modify(char *s){
	while(*s){
		*s = toupper(*s);
		
		if(*s==' ')
			*s = '_';

		s++;
	}
}