#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,n,som;
    float x;
    scanf("%i",&n);
    scanf("%f",&x);
   // x=x*x;
    /*som=0;
    /*for(i=0;i<11;i+=2)
    {
        som+=i;
    }*/
   /* i=0;
    while(i<11)
    {
        som=som+i;
        i=i+2;
    }

    printf("somme %d\n",som);*/
    for(i=1;i<n;i++)
    {
        x=x*x;
    }
    printf("%f",x);
    return 0;
}
