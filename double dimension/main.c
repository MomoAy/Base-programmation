#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float sal[2][3],som1,som,min,max;
    int i,j,n;
    n=1;
    som=0;
    for(i=0;i<2;i++)
    {
        som1=0;
       for(j=0;j<3;j++)
       {

           printf("entrez le salaire des employes\n");
           scanf("%f",&sal[i][j]);
           som=som+sal[i][j];

       }
        som1=som1+sal[i][j];
    }
    for(i=0;i<2;i++)
    {
       for(j=0;j<3;j++)
       {
           printf("Le salaire de l'employe %i : %.2f\n",n,sal[i][j]);
           n=n+1;
       }
        printf("Le salaire de l'employe %i : %.2f\n",n,sal[i][j]);
    }

    min=sal[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           if(min>sal[i][j])
            min=sal[i][j];
        }
    }
    printf("Le minimum est %.2f\n",min);

    max=sal[0][0];
    for(i=0;i<2;i++)
    {
        for(j=0;j<3;j++)
        {
           if(max<sal[i][j])
            max=sal[i][j];
        }
    }
    printf("Le maximum est %.2f\n",max);
    printf("la somme est %.2f\n",som);
    printf("la somme 1 est %.2f\n",som1);
    return 0;
}
