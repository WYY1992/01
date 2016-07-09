#include <stdio.h>

void main ()
{
    int n, i;
    scanf("%d", &n);
    int F[n-1];
    F[0] = 0;
    F[1] = 1;
    int *p0, *p1;
    p0 = &F[0];
	p1 = &F[1];
	
	for (i = 2; i <= n; i++, p0++, p1++)
	{
		F[i] = *p0 + *p1;
	}
	printf("%d\n", F[n]);
}
