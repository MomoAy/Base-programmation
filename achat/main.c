#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int nm,pu,mt;
    float pttc,pap;
    printf("Entrez le nombre de materiel achete\n");
    scanf("%i",&nm)
    printf("Entrez le prix unitaire de l'article\n");
    scanf("%i",&pu);
    mt=pu*nm;
    pttc=((mt*18)/100)+mt;
    printf("Le montant TTC est %.2f\n",pttc);
    if(pttc<10000)
    {
        printf("Aucune remise\n");
        pap=pttc;
    }
    else
        if(pttc>10000 && pttc<20000)
    {
        printf("Vous beneficiez d'une remise de 5%%\n");
        pap=pttc-((pttc*5)/100);
    }
    else
        {
            printf("Vous beneficiez d'une remise de 15%%\n");
            pap=pttc-((pttc*15)/100);
        }
    printf("Le pap est %.2f",pap);
    return 0;
}
