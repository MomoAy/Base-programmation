#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Hello world!\n");
    float a,b,moy;
    printf("entrez la note d'algo\n");
    scanf("%f",&a);
    printf("entrez la note de LC\n");
    scanf("%f",&b);
    printf("la note d'algo est : %.2f \n la note de LC est : %.2f\n",a,b);
    moy=(a+b)/2;
    printf("la moyenne est M = %.2f\n",moy);
    if (moy>=12)
        printf("passe, ice man c'est bien\n");
    else
        if (moy>=10)
        printf("redouble, frere tu redoubles, courage parcequ'on vous parle non c'est rien je maîtrise\n");
    else
        printf(" dg tu as echoue, tu reprends l'an prochain\n");
    printf("les notes saisies  :\n a = %.2f\n b = %.2f et\n M = %.2f",a,b,moy);
    return 0;
}
