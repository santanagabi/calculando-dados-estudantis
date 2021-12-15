typedef struct {
  //Definindo as Variáveis
  int idade;
  float notas[2];
  float frequencia;
} Estudante;


//Protótipo da função que recebeos dados dos estudantes e armaezena no vetor recebido;
void recebeDados(Estudante v[], int tam);

//Função que apresenta as opções para o usuário;
void apresentaMenu(void);

//função que recebe o vetor de estruturas dos Estudante e retorna a média entre as idades dos estudantes cadastrados
float mediaIdade(Estudante v[], int tam);

// Função que retorna a média de frequência dos estudantes
float mediaFrequencia(Estudante v[], int tam);

//Reprovados por frequência menor que 75%
int quantidadeReprovadosFreq(Estudante v[], int tam);

// Função que retorna a quantidade de estudantes com média final >= 6,0 e frequência maior ou igual a 75%
int quantidadeAprovados(Estudante v[], int tam);

// Função que retorna a média das médias finais da turma
float mediaDaTurma(Estudante v[], int tam);

// Função que retorna a maior média final entre os estudantes
float maiorMediaFinal(Estudante v[], int tam);

// Função que retorna a menor média final entre os estudantes
float menorMediaFinal(Estudante v[], int tam);

// Função que calcula a média das notas dos estudantes
float calculaMediaFinal(Estudante v);
