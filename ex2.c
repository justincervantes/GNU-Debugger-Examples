#include <stdlib.h>
#include <stdio.h>

int sum (int, int, int);

int main (int argc, char *argv[]) 
{
    int val1, val2, val3;
    int result;

    if (argc == 1) 
    {
        printf("Enter 3 integer arguments\n");
        exit(1);
    }

    val1 = atoi (argv[1]);
    val2 = atoi(argv[2]);
    val3 = atoi(argv[3]);

    result = sum (val1, val2, 10) + sum (val2, val3, 25) + sum (val1, val3, 50);

    printf ("%d\n", result);

  return 0;
}

int sum (int val1, int val2, int val3) 
{
    char var1 = 4;
    int *var2 = 0;

    return (var1 + val1 + val2 + val3 + *var2) / 3;
}
