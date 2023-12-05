#include<stdio.h>
#include<stdlib.h>

int main()
{
     int a,b,c;
    printf("PERMUTATION dE NOMBRE\n");
    printf("Entrez le premier nombre :\n");
    scanf("%d",&a);
     printf("Entrez le deuxieme nombre :\n");
    scanf("%d",&b);
    printf("Avant Permutation\n");
    printf("a = %d\nb = %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Apres Permutation\n");
    printf("a = %d\nb = %d\n" ,a,b);
    printf("AU REVOIR!");
    return 0;
    return 0;
}
