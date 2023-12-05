#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float a,b,P,S;
    printf("ENTREZ LA LONGUEUR DU RECTANGLE\n");
    scanf("%f",&a);
    printf("ENTREZ LA LARGEUR DU RECTANGLE\n");
    scanf("%f",&b);
    printf("LA LONGUEUR DU RECTANGLE EST : %.2f\nLA LARGEUR DU RECTANGLE EST : %.2f\n",a,b);
    P=(a+b)*2;
    S=(a*b);
    printf("LA SURFACE DE CE RECTANGLE EST : %.2f\nSON PERIMETRE EST : %.2f\n",S,P);
    if (S>30)
        printf("ce rectangle est aussi grand qu'un terrain\n");
    else
        if (S<=30)
        printf("ce rectangle n'est pas aussi grand\n");
    if (P<10)
        printf("c'est de là à là");
    else
        printf("c'est d'ici à là");
    return 0;
}
