#include <stdio.h>
int main(){
int idade,tempo;
printf("Digite a idade do trabalhador:");
scanf("%d",&idade);
printf("Digite o tempo de servico do trabalhador:");
scanf("%d",&tempo);

if (idade>=65)
{
    printf("O trabalhador pode se aposentar por causa da idade");
}
else if (tempo>=30)
{
    printf("O trabalhador pode se aposentar por causa do tempo trabalhado");

}
else if (idade>=60 && tempo>=25)
{
    printf("O trabalhador pode se aposentar por ter mais de 60 anos e ter trabalhado por pelo menos 25 anos");
}
else
{
    printf("O trabalhador nao pode se aposentar");
}

}

/*8. Leia a idade e o tempo de serviço de um trabalhador e escreva se ele pode ou não se  aposentar. 
As condições para aposentadoria são: 
• Ter pelo menos 65 anos; 
• Ou ter trabalhado pelo menos 30 anos;, 
• Ou ter pelo menos 60 anos e trabalhado pelo menos 25 anos. */