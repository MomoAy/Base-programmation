#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float tab[150],moy,som;
    int i,a,n;
    som=0;
    n=1;
    printf("combien de note voulez vous saisir?\n");
    scanf("%i",&a);
    for(i=0;i<a;i=i+1)
    {
        printf("entrez une note\n");
        scanf("%f",&tab[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("La note No %i : %.2f\n",n,tab[i]);
        n=n+1;
    }
    for(i=0;i<a;i++)
    {
        som=som+tab[i];
    }
    moy=som/a;
    printf("la moyenne est %.2f\n",moy);
    return 0;
}
