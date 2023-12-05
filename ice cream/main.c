#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
   printf("Entrez une premiere valeur\n");
   scanf("%d",&a);
    printf("Entrez une deuxieme valeur\n");
    scanf("%d",&b);
    printf("PERMUTATION DE NOMBRE\n");
    printf("Avant a=%d et b=%d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("Apres a=%d et b=%d\n",a,b);
    return 0;
}
