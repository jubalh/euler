#include <stdio.h>
#include <string.h>

int palindromic(char *psz)
{
	int len, mid, i;

	len = strlen(psz);
	mid = len/2;
	if (len%2) mid++;
	for (i=0; i<mid; i++)
	{
		if ( psz[i] != psz[len-1-i] )
			return 0;
	}
	return 1;
}

int problem4( void )
{
	int i, n;
	char szNum[64];
	int temp=0;
	int biggest=0;
	for (i=999; i>=100; i--)
	{
		for (n=999; n>=100; n--)
		{
			temp = i*n;
			sprintf( szNum, "%d", temp);
			if ( palindromic(szNum) )
			{
				if ( temp > biggest )
					biggest = temp;
			}
		}
	}
	return biggest;
}
