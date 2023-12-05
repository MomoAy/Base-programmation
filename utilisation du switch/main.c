#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    char choix;
    choix=getchar();
    switch (choix) {
        case't': printf("Vous voulez un triangle\n") ; break ;
        case'c': printf("vous voulez un carre\n") ; break ;
        case'r': printf("vous voulez un rectangle\n") ; break ;
        default: printf("erreur. recommencez!\n") ;
        }
    return 0;
}
