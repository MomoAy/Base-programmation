#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float tab[150],moy,som,valmod,valrech;
    int i,n,a,err,ind,trouve;
    n=1;
    som=0;
    printf("vous voulez faire entrez un total de combien de note?\n");
    scanf("%i",&a);
    for(i=0;i<a;i++)
    {
        printf("Entrez la note No %i\n",n);
        scanf("%f",&tab[i]);
        n=n+1;
    }
    n=1;
    for(i=0;i<a;i++)
    {
        printf("La note No %i est %.2f\n",n,tab[i]);
        n=n+1;
    }
    printf("Avez vous fait une erreur lors de la saisie des notes?\n");
    scanf("%i",&err);
    n=0;
    if(err==1)
    {
        printf("Quel est l'indice de la case eronne?(comptez a partir de zero)\n");
        scanf("%i",&ind);
        printf("L'ancienne valeure est %.2f\nEntrez la nouvelle valeur\n",tab[ind]);
        scanf("%f",&valmod);
        tab[ind]=valmod;
        printf("Le nouveau tableau sera :\n");
     for(i=0;i<a;i++)
    {
        printf("La note No %i est %.2f\n",n,tab[i]);
        n=n+1;
    }
    }
    else
    {
         printf("Continuons  avec la moyenne\n");
    }
    for(i=0;i<a;i++)
    {
        som=som+tab[i];
    }
    moy=som/a;
    printf("la moyenne est %f",moy);
    printf("Entrez la note recherher\n");
    scanf("%f",&valrech);
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
        printf("valeur inconnue\n");
    }

    return 0;
}
