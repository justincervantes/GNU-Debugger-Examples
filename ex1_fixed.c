#include <stdio.h>
#include <stdlib.h>
#include "string.h"

#define MAX 1000

int TestInt (int*, int);

int main (int argc, char* argv[]) 
{
	int i, k=0;

	int val[MAX];

	for (i = 0; i < MAX; ++i)
            val[i] = i;
	
	printf ("Enter integer in the range: 0:9999: ");
	scanf ("%d", &k);

	TestInt (val, k);
}

int TestInt (int* c, int k) 
{
	printf ("val[%d] = %d\n", k, c[k]);
        return (1);
}
