#include <stdio.h>
#include <stdlib.h>

int main()
{
    char A;
    printf("Entrez un caractere :\n");
    //scanf("%c",&A);
    A=getchar();
    printf("Le caractere saisie est : %c\n Son code numerique est %d :",A,A);

    return 0;
}
