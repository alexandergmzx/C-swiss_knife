# include <stdio.h>
# include <stdlib.h>
# include <math.h>

double get_pair_distance( double pos[][3] , int i1 , int i2 );

int main () {
	int nrow ;
	double dist = 0.0;
	int i1 , i2 ;
	// read number of points from terminal
	printf (" Enter number of points : ");
	scanf ("%d", & nrow ) ;
	/* dynamically allocated matrix where each row
	* will represent the coordinates of a point */
	double (* pos ) [3] = malloc ( sizeof ( double [ nrow ][3]) );
	// intialize the positions to some arbitrary values
	for (int i = 0; i < nrow ; ++i) 
		for (int j = 0; j < 3; ++ j) 
			pos [i ][ j] = i /5.0 - j /10.0;
		
	
	// try it!
	printf (" Get distance between points : ");
	scanf ("%d %d", & i1 , & i2 );

	dist = get_pair_distance ( pos , i1 , i2 );	
	printf (" Euclidean distance : %.4lf\n", dist ) ;	
	free ( pos );
}

// euclidean distance between rows i1 and i2 in the n x 3 array pos
double get_pair_distance ( double pos [][3] , int i1 , int i2 ) {
	double dist = 0.0;
	for (int j = 0; j < 3; ++ j) 
		dist += ( pos [ i1 ][ j] - pos [ i2 ][ j ]) * ( pos [ i1 ][ j] - pos [ i2 ][ j ]) ;
	
	dist = sin(dist);
	return dist ;
}
