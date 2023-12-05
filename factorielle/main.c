#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,F,i;
    F=1;
    printf("Entrez un nombre\n");
    scanf("%i",&n);
    /*for(i=2;i<=n;i++)
    {
        F=F*i;
    }*/
    i=2;
    while(i<=n)
    {
        F=F*i;
        i++;
    }
    printf("la factorielle est %i\n",F);

    return 0;
}
