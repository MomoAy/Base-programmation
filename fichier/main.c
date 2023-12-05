#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int n,i,j,a,b;
    float som,min,max;
    n=1;
    som=0;
    printf("entrez le nombre d'etudiant\n");
    scanf("%i",&a);
    struct etudiant
    {
        int mat;
        char nom[15];
        float moy[4];
    };
    struct etudiant etud[a];
    for(j=0;j<a;j++)
    {
    printf("Entrez le matricule de l'eleve %i\n",j+1);
    scanf("%i",&etud[j].mat);
    printf("Entrez le nom %i\n",j+1);
    scanf("%s",etud[j].nom);
    for(i=0;i<4;i++)
    {
    printf("Entrez la note No %i\n",n);
    scanf("%f",&etud[j].moy[i]);
    n=n+1;
    som=som+etud[j].moy[i];
    }
    etud[j].moy[4]=som/4;
    n=1;
     for(i=0;i<4;i++)
    {
    printf("La note No %i  saisie : %.2f\n",n,etud[j].moy[i]);
    n=n+1;
    }
    printf("Information de l'etudiant %s\nMatricule : %i\n Nom : %s\nMoyenne General : %.2f\n",etud[j].nom,etud[j].mat,etud[j].nom,etud[j].moy[4]);
    n=1;
    som=0;
    }
    max=etud[a].moy[4];
    for(j=0;j<a;j++)
    {
        if(max<etud[j].moy[4])
            max=etud[j].moy[4];
    }

    min=etud[0].moy[4];
    for(j=0;j<a;j++)
    {
        if(min>etud[j].moy[4])
            {
                min=etud[j].moy[4];
            }
    }
    printf("le nul : %.2f\nle meilleur : %.2f\n",min,max);
    return 0;
}
