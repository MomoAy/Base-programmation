#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
     const float TVA = 0.18;
   char choix;
   //int Qte = 14;
   //float PU = 2000,MHT,TTC,PAP;
   float PU,MHT,TTC,PAP,Qte,som=0;
   do
    {
   printf("Entrez le prix d'un article \n");
   scanf("%f",&PU);
   printf("Entrez la quantite de cle a acheter \n");
   scanf("%f",&Qte);
   printf("La Quantite d'articles achetees est %.0f \n",Qte);
   printf("Le prix d'un article est %.0f F\n",PU);
   MHT=Qte*PU;
   som=som+MHT;
   printf("Voulez vous continuer a acheter ?\n Tapez o (pour oui) ou n (pour non) \n");
    scanf("%c",&choix);
    if(choix!='o'&&'n')
    {
        printf("Veuillez saisir 'o' ou 'n' \n");
        scanf("%c",&choix);
    }
    }while(choix == 'o');

   printf("Le montant hors taxe de tous les articles donne par la relation MHT=QTE*PU est %.0f F\n",som);
   TTC=som*(1+TVA);
   printf("Le prix TTC donne par la relation PTTC=MHT*(1+TVA) est %.0f F\n",TTC);
   if(TTC >= 20000)
    {
       PAP = TTC - TTC*0.1;
      printf("Le prix a payer avec une remise de 15%% est %.0f F\n",PAP);
    }
       else if(TTC >= 10000 && TTC < 20000)
            {
           PAP = TTC - TTC*0.05;
           printf("Le prix a payer avec une remise de 5%% est %.0f F\n",PAP);
            }

                else if(TTC < 10000)
                    {
                    PAP = TTC;
                    printf("Le prix a payer sans remise est %.0f F\n",PAP);
                    }




    printf("MERCI POUR VOS ACHATS ! ");
    return 0;
}
