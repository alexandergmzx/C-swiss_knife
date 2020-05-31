#include <stdio.h>

int main(void)
{
	static char *s[] = {"black", "white", "yellow", "violet"};
	char **ptr[] = {s+3, s+2, s+1, s}, ***p;
	p = ptr;//*p = s+3 = ptr[0]
	**(++p);//*p = s+2 = ptr[1]
	printf("%s\n",*(--(*(++p))) + 3);
					  //(p = s+1 = ptr[2])
				 //(p = (s+1)-1 = s)
				// moves to _ _ _ ck 
	return (0);
}