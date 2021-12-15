#include <stdio.h>
#include "funcoes.h"

// Função que recebe os dados dos estudantes e armaezena no vetor recebido
void recebeDados(Estudante v[], int tam){
  int i;
  // Laço para receber dados dos estudantes
  for(i = 0; i < tam; i++){
    printf("Entre com a idade do estudante %d: ", i + 1);
    scanf("%d", &v[i].idade);
    printf("Entre com a nota 1 do estudante %d: ", i + 1);
    scanf("%f", &v[i].notas[0]);
    printf("Entre com a nota 2 do estudante %d: ", i + 1);
    scanf("%f", &v[i].notas[1]);
    printf("Entre com a frequência do estudante %d: ", i + 1);
    scanf("%f", &v[i].frequencia);
    printf("\n\n");
  }
}

// Função que apresenta o menu na tela
void apresentaMenu(void){
   // Opções do menu
    printf("Opção 1: Média de idade da turma;\n");
    printf("Opção 2: Média de frequência da turma;\n");
    printf("Opção 3: Quantidade de reprovados por frequência;\n");
    printf("Opção 4: Quantidade de aprovados por média final;\n");
    printf("Opção 5: Média da Média Final da turma;\n");
    printf("Opção 6: Maior Média Final da turma;\n");
    printf("Opção 7: Menor Média Final da turma;\n");
    printf("Opção 8: Finaliza o programa.\n");
    printf("Entre com o opção desejada: ");
}

// Função que calcula a média de idade entre os estudantes
float mediaIdade(Estudante v[], int tam){
  float mediaI = 0;
  for(int i = 0; i < tam; i++){
    mediaI = mediaI + v[i].idade;
  }

  return (mediaI / tam);
}

// Função que retorna a média de frequência dos estudantes
float mediaFrequencia(Estudante v[], int tam){  
  float Frequencia = 0;
  for(int i = 0; i < tam; i++){
    Frequencia = Frequencia + v[i].frequencia;
  }

  return (Frequencia / tam);
}

// Função que retorna a quantidade de estudantes com frequência menor de 75%
int quantidadeReprovadosFreq(Estudante v[], int tam){
  int i, num;  

  num = 0;
  for(i = 0; i < tam; i++){
    if(v[i].frequencia < 75) num++;
         
   }
  return num;
}

// Função que retorna a quantidade de estudantes com média final >= 6,0 e frequência maior ou igual a 75%
int quantidadeAprovados(Estudante v[], int tam){
  float MediaNotas;
  int num = 0, i;


  for(i = 0; i < tam; i++){
    MediaNotas = ( v[i].notas[0] * 0.4) + ( v[i].notas[1] * 0.6);
    if(MediaNotas >= 6.0 && v[i].frequencia > 75) num++;
  } 
  return num;
}

// Função que retorna a média das médias finais da turma
float mediaDaTurma(Estudante v[], int tam){
  float media;
  int i;
  
  for(i = 0; i < tam; i++){
    media = calculaMediaFinal(v[i]);
  }
  return media ;
}

// Função que retorna a maior média final entre os estudantes
float maiorMediaFinal(Estudante v[], int tam){
  float maior, media;
  int i;

  maior = 0;

  for(i = 0; i < tam; i++){
    media = calculaMediaFinal(v[i]);
    if(media > maior) maior = media;
  }
  return maior;
}

// Função que retorna a menor média final entre os estudantes
float menorMediaFinal(Estudante v[], int tam){
  float menor, media;
  int i;

  menor = 0;

  for(i = 0; i < tam; i++){
    media = calculaMediaFinal(v[i]);
    if(media < menor) menor = media;
  }
  return menor;
}

// Função que calcula a média das notas dos estudantes
float calculaMediaFinal(Estudante v){
  return (v.notas[0] * 0.4) + (v.notas[1] * 0.6);
}