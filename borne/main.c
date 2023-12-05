#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int bi,bs,i,n,nb;
    n=1;
    printf("Entrez une borne superieure\n");
    scanf("%i",&bs);
    printf("Entrez une borne inferieur\n");
    scanf("%i",&bi);
    while(bs<bi)
    {
        printf("Saisie eronne\n");
        printf("Entrez une borne superieure\n");
        scanf("%i",&bs);
        printf("Entrez une borne inferieur\n");
        scanf("%i",&bi);

    }

    if(bi%2)
    {

        for(i=bi+1;i<=bs;i=i+2)
        {
            printf("le nombre No %i est %i\n",n,i);
            n=n+1;
        }
    }
    else
    {
          for(i=bi;i<=bs;i=i+2)
        {
            printf("le nombre No %i est %i\n",n,i);
            n=n+1;
        }
    }


    return 0;
}
