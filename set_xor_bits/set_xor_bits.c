//set_xor_bits

#include <stdio.h>

int set_xor_bits(int num);
int count_max_bits(int num);
int max_bits(int num);

int main()
{
	unsigned int n, ct;
	printf("Input an integer: \n");
	scanf("%d",&n);

	ct = set_xor_bits(n);

	printf("Number of bits that are set to represent %d: %d\n", n,ct);

	return (0);
}

int count_max_bits(int num){
	int cor = 0;
	while(num > 0){
		num = num >> 1;
		cor++;
		//printf("ct:%d num:%d",cor,num);
	}
	return cor;
}

int set_xor_bits(int num){
	num = max_bits(num) ^ num;
	return num;
}

int max_bits(int num){
	num = (1 << (count_max_bits(num))) -1;
	return num;
}