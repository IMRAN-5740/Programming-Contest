#include <stdio.h>
#include <conio.h>
int gcf( int n , int m ) ;
int lcm( int n , int m ) ;

int main()
{
	int a , b ;
	///clrscr();

	printf( "Enter two integers\n" ) ;
	scanf( "%d" , &a ) ;
	scanf( "%d" , &b ) ;

	if(gcf(a,b)==1)
	{
		printf("The numbers are co primes");
	}
	else
	{
		printf("The numbers are not co primes");
	}
	getch();
	return 0 ;
}

/*
gcf

Calculates the gcf (greatest common factor) for a pair
of integers.  If either number is zero, zero is returned.
Negative inputs are treated as if they were positive.
*/
int gcf( int n , int m )
{
	if( n == 0 || m == 0 )
		return 0 ;

	if( n < 0 )
		n = - n ;
	if( m < 0 )
		m = - m ;

	/* subtract the larger from the smaller until they are equal */
	while( 1 )
		if( n > m )
			n -= m ;
		else if ( n < m )
			m -= n ;
		else
			break ;

	return n ;
}
