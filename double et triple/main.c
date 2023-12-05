#include <stdio.h>
#include <stdlib.h>

int ddouble(X)
{
    int D;
    D=X*2;
    return D;
}
int ttriple(Y)
{
    int T;
    T=Y*3;
    return T;
}
int main()
{
    printf("Hello world!\n");
    int res,n,n2,res2;
    printf("Entrez un nombre pour son double\n");
    scanf("%i",&n);
    res=ddouble(n);
    printf("le double de ce nombre est %i\n",res);
    printf("Entrez un nombre pour son triple\n");
    scanf("%i",&n2);
    res2=ttriple(n2);
    printf("le trile de ce nombre est %i\n",res2);
    return 0;
}
