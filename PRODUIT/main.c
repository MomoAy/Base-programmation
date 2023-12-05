#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int a,b,c;
    printf("CE PROGRAMME CALCULE LE PRODUIT DE DEUX NOMBRES\n");
    printf("ENTRER UN PREMIER NOMBRE\n");
    scanf("%d",&a);
    printf("ENTREZ UN DEUXIEME NOMBRE\n");
    scanf("%d",&b);
    c=a*b;
    printf(" LE PRODUIT DE a=%d PAR b=%d EST : c=%d\n",a,b,c);
    printf("MERCI!");
    return 0;
}
