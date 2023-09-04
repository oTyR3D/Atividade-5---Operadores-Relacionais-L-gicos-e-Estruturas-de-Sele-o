#include <stdio.h>
#include <math.h>
int main(){
int a,b,c,delta,raiz1,raiz2;
printf("Digite os valores de A, B e C da equacao: \n");
scanf("%d%d%d",&a,&b,&c);

if (a==0)
{
    printf("Nao e equacao de segundo grau\n");
}
else
{
    delta=(b*b)-4*a*c;
    printf("O valor de delta e: %d\n",delta);
        if (delta<0){
            printf("Nao existe raiz\n");
        }
        else if (delta>0){
            printf("Duas raízes reais\n");
            raiz1=(-b+(sqrt(delta)))/(2*a);
            raiz2=(-b-(sqrt(delta)))/(2*a);
            printf("Raiz POSITIVA: %d\n",raiz1);
            printf("Raiz NEGATIVA: %d\n",raiz2);
        }
        else{
            raiz1=-b/(2*a);
            printf("Raiz Unica: %d\n",raiz1);
        }
}
}