#include <stdio.h>

int problem5( void )
{
	int i;
	int nr=0;
	long found=0;

	do
	{
		found=1;
		nr++;
		for( i=1;i<20; i++ )
		{
			if ( nr%i )
			{
				found=0;
				break;
			}
		}
	} while(found==0);
	return nr;
}
