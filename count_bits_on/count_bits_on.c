#include <stdio.h>

int count_bits_on(int num);

int main()
{
	unsigned int n, ct;
	printf("Input an integer: \n");
	scanf("%d",&n);

	ct = count_bits_on(n);

	printf("Number of bits that are set to represent %d: %d\n", n,ct);

	return (0);
}

int count_bits_on(int num){
	int check, counter = 0;
	while(num>0){
		check = num & 1;		//check for bit
		if(check != 0){ 		//if bit set
			++counter;			//accumulate
		}
		num=num>>1;				//shift register to count the next bit
	}
	return counter;
}