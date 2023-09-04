int main(){
float prova1,prova2,prova3,media;   
printf("Escreva o valor da PRIMEIRA PROVA\n");
scanf("%f",&prova1);
printf("Escreva o valor da SEGUNDA PROVA\n");
scanf("%f",&prova2);
printf("Escreva o valor da TERCEIRA PROVA\n");
scanf("%f",&prova3);

media=(prova1+prova2+ (prova3*2))/4;

if (media>=7)
{
    printf("O aluno foi APROVADO com media: %.2f",media);
}
else
{
    printf("O aluno foi REPROVADO com media: %.2f",media);
}

    return 0;
}
/*7. Faça um algoritmo que calcule a media ponderada das notas de 3 provas. 
A primeira e  a segunda prova tem peso 1 e a terceira tem peso 2. 
Ao final, mostrar a média do aluno e indicar se o aluno foi aprovado ou reprovado. 
A nota para aprovação deve ser igual ou  superior a 7.0 pontos. 
*/