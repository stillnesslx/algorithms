#include <stdio.h>    
int gcd(int p, int q)
{
    int r;
    if(0 == q)
	{
		return p;
	}
	r = p % q;
	return gcd(q, r);
}
