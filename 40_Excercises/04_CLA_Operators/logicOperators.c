#include <stdio.h>

int main(int argc, char *argv[] )
{
	// falls nicht 3 argumente erhalten, dann --> block 7 bis 10 
	if( argc != 3 ){
		printf("usage:\n");
		printf("logicOperators Input1 Input 2\n");
	}
	// input valid --> genau 3 argumente erhalten
	printf("number of input arguments: %d\n", argc ); // anzahl args. printen 
	
		//die drei elemnte in der for loop deklaration
		//---------------------------------------------
		// nimm eine- variable i und starte mit 0.
		// fuhre folgene code aus, solang i < argc
		// inkremente i bei jedem druchlauf um 1 (++)
	for( int i = 0; i < argc; i++ )
	{
		printf( "argument %d was %s\n", i, argv[i]);
		// argv: - ./logicoperators
		// 	 - 23
		//	 - 99
	}
	return 0;
}




/*
	double e = 2.718281821

	printf(
*/







