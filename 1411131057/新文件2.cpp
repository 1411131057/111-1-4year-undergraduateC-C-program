#include <stdio.h>

int main(void)
{
	int integer1;
	int integer2;

	printf("Enter first integer\n");
	scanf("%d", &integer1 );

	printf("Enter second integer\n");
	scanf( "%d", &integer2 );
	int sum;
	sum = integer1 + integer2;
	printf( "Sum is %d\n", sum );
    int product;
	product = integer1 * integer2;
	printf( "Product is %d\n", product );
	int difference;
	difference = integer1 - integer2;
	printf( "Difference is %d\n", difference );
    int quotiment;
    quotiment = integer1 / integer2;
	printf( "quotiment is %d\n", quotiment );
	
	
}


