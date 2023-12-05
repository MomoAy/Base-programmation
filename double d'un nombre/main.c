#include <stdio.h>
#include <stdlib.h>

int ddouble(int np)
{
    int nn1;
    nn1=np*2;
    return nn1;
}
int ttriple(Cx)
{
    int D;
    D=Cx*3;
    return D;
}
int main()
{
    int n,res;
    int C,res2;
    printf("entrez une valeur pour son double: \n");
    scanf("%i",&n);
    res=ddouble(n);
    printf("le double de ce nombre precedemment entre est %i\n",res);
    printf("entrez une valeur pour son triple\n");
    scanf("%i",&C);
    res2=ttriple(C);
    printf("le triple de ce nombre est %i\n",res2);
    return 0;
}
