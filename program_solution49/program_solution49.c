#include <stdio.h>

int main(void)
{
	void *vp;
	char ch = 'g', *cp = "goofy";
	int j = 20;
	vp = &ch;//saves 'g' in vp
	printf("%c\n",*(char *)vp);
	vp = &j;//saves 20 in vp
	printf("%d\n",*(int *)vp);
	vp = cp;//saves goofy in vp
	printf("%s\n",(char *)vp + 3);//moves to _ _ _ fy"

	return (0);
}
