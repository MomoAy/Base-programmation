#include <stdio.h>
#include <stdlib.h>

int main()
{
    //printf("Hello world!\n");
    //char nom[6];
    char nom[15];
    int som,i;
    printf("Entrez un nom :\n");
    //scanf("%s",nom);
   // printf("nom : %s",nom);
    gets(nom);
    printf("le nom est ");
    puts(nom);
    som=0;
    i=0;
    do
    {
        som=som+1;
        i=i+1;
    }
    while(nom[i]!='\0');
    printf("le nombre est %i\n",som);
   return 0;
}
