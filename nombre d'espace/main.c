#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int i,esp;
    char phrase[20];
    printf("entrez une phrase\n");
    gets(phrase);
    printf("la phrase est ");
    puts(phrase);
    esp=0;
    i=0;
    do
    {
        if(phrase[i]==' ')
            esp=esp+1;
        i++;

    }
    while(phrase[i]!='\0');
    printf("le nombre d'espace est %i\n",esp);

    return 0;
}
