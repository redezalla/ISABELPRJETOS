#include<stdio.h>
#include<stdlib.h>
int main(void)
{
  //Declara��o das vari�veis
  float nota1, nota2, media;
  
  //Entrada de dados
  printf("Digite a primeira nota do aluno: ");
  scanf("%f",&nota1);
  
  printf("Digite a segunda nota do aluno: ");
  scanf("%f",&nota2);
  
  //Processamento
  media = (nota1 + nota2) / 2;
  
  //Sa�da
  printf("Media do aluno = %.1f\n",media);
  
  system("pause");//pausa da tela somente para Windows
  return 0;//retorno da fun��o main  
}
