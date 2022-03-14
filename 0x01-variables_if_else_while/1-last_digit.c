#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 *[A[BReturn: ALways[D[D[D[lw[C[C[C 0 (Success/correct)
 */
int main(void)

{
int n;
[A[B
srand(time(0));
n = rand() - RAND_MAX / 2;

if (n % 10 > 5)
{
printf("Last digit of %i is %i and[A[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[D[A[A[D[D
[A[A[B
[A[A[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C
[B[B[B[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C[C is greater than 5\n", n, n % 10);
}

else if (n % 10 == 0)
{
printf("Last digit 0f %i is %i and is 0\n", n % 10);
}

else {
prinrf("Last digit of %i is %i and is less than 6 and not 0\n", n, n % 10) [3~;
}


return(0);
}
