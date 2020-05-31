#include <stdio.h>
#define test 5
int main(int argc, char const *argv[])
{
	// int data_arr[3][3] = {5,7,20,200,215,400,-10,-20,-21};
	// int (*data)[3][3] = &data_arr;
	// printf("%d\n", ***data);
	// printf("%d\n", ***(data + 1));
	// printf("%d\n", **(*data+1));
	// printf("%d\n", *(*(*data+1)+4));
	// int arr[2][3][4] = {{{2,3,4,5},{6,7,8,9},{11,12,13,14}},
	// 					{{2,3,4,5},{6,7,8,9},{11,12,13,14}}};
	// printf("%d\n",arr[1][0][0] );
	// double fvar = 8.7732;
	// printf("%.*f\n",2,fvar );
	char *foo[test+~0]={"hello","world"};
	char *ptr=foo[2+~0];
	printf("%c\n",*++ptr );

	return 0;
}