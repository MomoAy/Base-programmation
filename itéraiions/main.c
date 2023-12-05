#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,nb,nb1;

    //boucle for
    /*for(i=0;i<10;i=i+2)
    {
        printf("%d\n",i);
    }*/

    //boucle while
    nb=0;
    nb1=0;
    while(nb<100)
    {
        printf(" Nombre No %d : %d\n",nb,nb);
        nb=nb+2;
    }

    //boucle do
    /*nb1=0;
    do
    {
         printf(" Nombre No %d : %d\n",nb1+1,nb1);
        nb1=nb1+1;
    }
    while(nb1<10);*/
    return 0;
}
