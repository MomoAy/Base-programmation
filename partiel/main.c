#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,i,nb,j;
    float tab[100];
    printf("combien de note voulez vous saisir en tout\n");
    scanf("%i",&nb);
    for(i=0;i<nb;i++)
    {
        tab[i]=5;
    }
    printf("Entrez vos notes\n");
    for(i=0;i<nb;i++)
    {
        scanf("%i",&j);
        tab[i]=tab[i]+j;
        while(tab[i]>20)
        {
            printf("saisie incorrecte, Entrez une valeur convenante\n");
            scanf("%f",&tab[i]);
        }
    }
    n=1;
    for(i=0;i<nb;i++)
    {
        printf("les notes No%i : %.2f\n",n,tab[i]);
        n++;
    }
    return 0;
}
