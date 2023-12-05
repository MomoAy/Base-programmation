#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float note[15],som,moy;
    int n,a,i;
    n=1;
    printf("entrez le nombre de note a saisir\n");
    scanf("%i",&a);

    for(i=0;i<a;i++)
    {
        printf("entrez une note\n");
        scanf("%f",&note[i]);
    }
    for(i=0;i<a;i++)
    {
        printf("la note No %i : %.0f\n",n,note[i]);
        n=n+1;
    }

     som=0;
    for(i=0;i<a;i++)
    {
        som=som+note[i];
    }
    printf("la  somme est : %.2f\n",som);
    moy=som/a;
    printf("la moyenne est : %.2f\n",moy);
    return 0;
}
