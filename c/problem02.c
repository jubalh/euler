#include <stdio.h>
#include <string.h>

int fib( int *z1, int *z2 )
{
	int t;
	t = *z1;
	*z1=*z2;
	*z2=t+*z1;
	return *z2;
}

int problem2( void )
{
	int zahl1=1;
	int zahl2=2;
	int z;
	int sumEven=0;

	while ( zahl1<4000000 && zahl2<4000000 )
	{
		if (zahl1%2==0)
			sumEven += zahl1;
		z = fib(&zahl1, &zahl2);

		if (zahl2%2==0)
			sumEven += zahl2;
	}
	return sumEven;
}
