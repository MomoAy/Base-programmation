#include <stdio.h>
#include <stdlib.h>

int main()
{
    float tab[150],moy,som,min,max,valrech,valmod;
    int i,trouve,a,n,err,rep,n1;
    printf("Hello world!\n");
    som=0;
    n=0;
    n1=0;
    printf("combien de note voulez vous saisir?\n");
    scanf("%i",&a);
    for(i=0;i<a;i=i+1)
    {
        printf("entrez une note\n");
        scanf("%f",&tab[i]);
    }
    for(i=0;i<a;i++)
    {
        n=n+1;
        printf("La note No %i : %.2f\n",n,tab[i]);
    }
    for(i=0;i<a;i++)
    {
        som=som+tab[i];
    }
    moy=som/a;
    printf("la moyenne est %.2f\n",moy);
    min=tab[0];
    for(i=0;i<a;i++)
    {
        if(min>tab[i])
            min=tab[i];
    }
    printf("le minimum est: %.2f\n",min);
    max=tab[a];
    for(i=0;i<a;i++)
    {
        if(max<tab[i])
            max=tab[i];
    }
    printf("le maximum est: %.2f\n",max);
    printf("Entrez la valeur a rechercher\n");
    scanf("%f",&valrech);
    trouve=0;
    for(i=0;i<a;i++)
    {
        if(valrech==tab[i])
            trouve=1;
    }
    if(trouve!=0)
    {
        printf("la valeur a ete retrouve\n");
    }
    else
    {
        printf("valeur inconnu\n");
    }
    printf("Avez vous fait une erreur? 1 pour oui et 2 pour non \n");
    scanf("%i",&rep);
    if(rep==1)
    {
        printf("A quel position avez vous fait l'erreur ?(comptez a partir de 0)\n");
        scanf("%i",&err);
        printf("La note dite eronne est %f\n",tab[err]);
        printf("entrez la nouvelle note\n");
        scanf("%f",&valmod);
        tab[err]=valmod;
        printf("le nouveau tableau est \n");
         for(i=0;i<a;i++)
        {
        n1=n1+1;
        printf("La note No %i : %.2f\n",n1,tab[i]);
        }
    }
    else
    {
        printf("OK\n");
    }
    return 0;
}
