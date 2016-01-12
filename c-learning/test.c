#include <stdio.h>

int swap_ints(int *first_nu, int *second_nu);

int main() 
{
int a=1, b=2;
printf("pre swapped values: a = %d, b = %d\n", a, b);
swap_ints(&a, &b);
printf("post swapped values: a = %d, b = %d\n", a, b);
return 0;
}

int swap_ints(int *c, int *d)
{
int e;
e = *c;
*c = *d;
*d = e;
return 0;
}
