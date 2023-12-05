#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n1,n,n2,c,i,j,k,nbr,cop2,tab[100],note[100],not[100];
    char A,cop1;
    printf("                   Exo X                \n");
   /* printf("entrez deux notes\n");
    scanf("%i",&n1);
    scanf("%i",&n2);
    printf("La note No 1 est %i et la note No 2 est %i\n",n1,n2);
    c=n1;
    n1=n2;
    n2=c;
    printf("La note No 1 devient %i et la note No 2 devient %i\n",n1,n2);


    printf("Entrez une lettre de l'alphabet\n");
    A=getchar();
    printf("le code ASCII de %c est %i\n",A,A);


    printf("Entrrez un nombre\n");
    scanf("%i",&nbr);
    printf("le code ASCII de %i est %c\n",nbr,nbr);*/
    /*for(cop1='A';cop1<='Z';cop1++)
    {
        printf("caractere %c code ascii %i code hexadecimal %x code octal %o\n",cop1,cop1,cop1,cop1);
    }*/
   /*printf("valeur\n");
    scanf("%i",&nbr);
    if(nbr%2)
    {
        printf("impaire");
    }
    else{printf("paire");}*/
    n1=1;
    printf("Entrez le nombre de valeur a saisir?\n");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("Entrez la valeur No%i :\n",n1);
        scanf("%i",&tab[i]);
        n1++;
        if(tab[i]<0)
    {
        note[j]=tab[i];
        j=j++;
    }
        else
    {
            not[k]=tab[i];
            k++;
    }
    }
    printf("Les valeurs positives sont :\n");
    for(i=0;i<n;i++)
    {
        printf("%i",note[j]);
    }
    return 0;
}
