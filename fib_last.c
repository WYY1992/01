#include <stdio.h>

void main ()
{
    long long  n, i;
    scanf("%lld", &n);
    long long F[n];
    F[0] = 0;
    F[1] = 1;
    long long *p0, *p1;
    p0 = &F[0];
	p1 = &F[1];
	
	for (i = 2; i <= n; i++, p0++, p1++)
	{
		F[i] = (*p0 + *p1) % 10;
	}

	printf("%lld\n", F[n]);
}
