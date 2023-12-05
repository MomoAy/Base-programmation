#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    int nm,pu,mt;
    float pttc,pap,som,TVA,rem1,rem2;
    char choix;
    TVA=0.18;
    rem1=0.05;
    rem2=0.15;
    do
    {
    printf("Entrez le nombre d'article achete\n");
    scanf("%i",&nm);
    printf("Entrez le prix unitaire de l'article\n");
    scanf("%i",&pu);
    mt=pu*nm;
    printf("le prix hors taxe de l'article est %i\n",mt);
    som=som+mt;

    printf("Voulez vous achetez d'autres articles?\n(O pour oui et N pour non)\n");
    choix=getch();
 //   if(choix==O)

    /*do
    {
        printf("entrez une reponse valable");
        scanf("%c",&choix);
    }
    while(choix!='o'&&'n');*/
    }
    while(choix=='O');
    pttc=som*(1+TVA);
    printf("Le montant total de vos achats est %.2f\n",pttc);
    if(pttc<10000)
    {
        printf("Aucune remise\n");
        pap=pttc;
    }
    else
        if(pttc>10000 && pttc<20000)
    {
        printf("Vous beneficiez d'une remise de 5%%\n");
        pap=pttc-(pttc*rem1);
    }
    else
        {
            printf("Vous beneficiez d'une remise de 15%%\n");
            pap=pttc-(pttc*rem2);
        }
    printf("Le prix a payer est %.2f\n",pap);

    return 0;
}
