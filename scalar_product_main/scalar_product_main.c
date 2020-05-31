/* Write a program with a function that computes the scalar product between to arrays. 
 * In the main function, read a length from the command line and create two vectors 
 * of that length for which you calculate the scalar product.
 */
# include <stdio.h>
# include <stdlib.h>

//Declaration of custom function
double scalar_product (int len , double * arr1 , double * arr2 );

int main () {

	int len ;
	// read the length of the vectors from the terminal
	printf (" Enter an array length : ");
	scanf ("%d", &len ); // note that we need to pass a pointer to scanf
	// dynamically allocate two 1D arrays
	double * v1 = malloc ( sizeof ( double[len] ));
	double * v2 = malloc ( sizeof ( double[len] ));
	double res ;
	// intialize to some arbitrary values
	for (int i = 0; i < len ; ++i ) {
		v1 [i] = i+1;
		v2 [i] = 2.0 * v1[i] ;
		printf("%.2lf %.2lf \n", v1[i], v2[i]);
	}
	// compute the scalar product with our function
	res = scalar_product ( len , v1 , v2 );
	printf (" The scalar product is %.4lf \n", res );
	// dont forget to free the memory!!!
	free ( v1 );
	free ( v2 );
}

double scalar_product (int len , double * arr1 , double * arr2 ) {

	double res = 0.0;

	for (int i = 0; i < len ; ++ i ) 
		res += arr1 [i]* arr2 [i];
	
	return res ;
}