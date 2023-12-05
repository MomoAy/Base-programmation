#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=5;
    b=10;
    printf("PERMUTATION DE NOMBRE\n");
    printf("Avant Permutation\n");
    printf("a = %d\nb = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Apres Permutation\n");
    printf("a = %d\nb = %d\n" ,a,b);
    printf("AU REVOIR!");
    return 0;
}
