#include <stdio.h>
int main(){
float salario=0,reajuste=0;
int tempo=0,bonus=0;
printf("Digite o valor do salario do funcionario:\n");
scanf("%f",&salario);
printf("Digite o tempo de serviço desse funcionario na empresa:\n");
scanf("%d",&tempo);

if (salario<=500)
{
    reajuste=salario+(salario*0.25);
    printf("O reajuste sera de 25%%, o salario que era R$ %.2f passara a ser de R$ %.2f\n", salario,reajuste);
}
else if (salario<=1000)
{
    reajuste=salario+(salario*0.20);
    printf("O reajuste sera de 20%%, o salario que era R$ %.2f passara a ser de R$ %.2f\n", salario,reajuste);
}
else if (salario<=1500)
{
    reajuste=salario+(salario*0.15);
    printf("O reajuste sera de 15%%, o salario que era R$ %.2f passara a ser de R$ %.2f\n", salario,reajuste);
}
else if (salario<=2000)
{
    reajuste=salario+(salario*0.10);
    printf("O reajuste sera de 10%%, o salario que era R$ %.2f passara a ser de R$ %.2f\n", salario,reajuste);
}
else
{
    printf("Valores acima de R$ 2000 nao teram um reajuste\n");
}


if (1>tempo)
{
    printf("Por ter trabalhado menos de 1 ano nao havera um bonus\n");
}
else if (tempo<=1 && tempo<=3)
{
    bonus=100;
    printf("Por ter trabalhado %d anos o bonus sera de R$ %d \n", tempo, bonus);
}
else if (tempo>=4 && tempo<=6)
{
    bonus=200;
    printf("Por ter trabalhado %d anos o bonus sera de R$ %d \n", tempo, bonus);
}
else if (tempo>=7 && tempo<=10)
{
    bonus=300;
    printf("Por ter trabalhado %d anos o bonus sera de R$ %d \n", tempo, bonus);
}
else
{
    bonus=500;
    printf("Por ter trabalhado %d anos o bonus sera de R$ %d \n", tempo, bonus);
}

if (reajuste>0 || bonus>0)
{
    salario=reajuste+bonus;
    printf("O salario total pos reajuste e bonus sera de R$ %.2f",salario);
}
else
{
    printf("O salario nao teve reajuste ou bonus e continuara sendo de R$ %.2f",salario);
}

}