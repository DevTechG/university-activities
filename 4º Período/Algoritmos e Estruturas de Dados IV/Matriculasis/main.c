#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct aluno {
  int matricula;
  char nome[50], curso[20];
  int periodo;
} Aluno;

int hash (long i, int t) {
  return i % t;
}

void matricular(Aluno *alunos, int tam) {
  long int matricula;
  Aluno aluno;
  
  printf("Digite a matrícula: ");
  scanf("%ld", &matricula);
  aluno.matricula = matricula;  

  printf("Digite o nome: ");
  scanf("%s",aluno.nome);

  printf("Digite o curso: ");
  scanf("%s",aluno.curso);

  printf("Digite o período: ");
  scanf("%d",&aluno.periodo);

  alunos[hash(matricula,tam)] = aluno;
  printf("Aluno Cadastrado com sucesso!\n");
  
}

void remover (Aluno *alunos, int qtd, long mat) {
  int chave=hash(mat, qtd);
  if(alunos[chave].matricula != 0){
    alunos[chave].matricula = 0;
    strcpy(alunos[chave].nome,"");
    strcpy(alunos[chave].curso,"");
    alunos[chave].periodo = 0;

    printf("Aluno removido com sucesso!\n");
  } else {
    printf("Matricula Invalida!\n");
  }
}  

void removerTodos(Aluno *alunos, int tam) {
  int cont=0;
  
  for (int i=0; i<tam; i++) {
    if (alunos[i].matricula != 0) {
      alunos[i].matricula = 0;
      strcpy(alunos[i].nome,"");
      strcpy(alunos[i].curso,"");
      alunos[i].periodo = 0;
      cont++;
    }
  }
  
  if (cont == 0){
    printf("Nenhum aluno cadastrado!\n");
  }
  else{
    printf("Todos os alunos foram removidos!\n");
  }
}
void mostrarAlunos(Aluno *alunos, int tam) {
  int cont=0;
  for (int i=0; i<tam; i++) {
    if (alunos[i].matricula != 0) {
      printf("Matrícula: %d \nNome: %s\nCurso: %s\nPeríodo: %d \n----------\n",alunos[i].matricula,alunos[i].nome,alunos[i].curso,alunos[i].periodo);
      cont = 1;
    }
  }
  if (cont==0) 
    printf("Nenhum aluno cadastrado!\n");
}

void buscarAluno(Aluno *alunos, int tam, long int mat_busc) {
  int chave=hash(mat_busc, tam);
  
  if(alunos[chave].matricula != 0){
    printf("Matrícula: %d \nNome: %s\nCurso: %s\nPeríodo: %d \n----------\n",alunos[chave].matricula,alunos[chave].nome,alunos[chave].curso,alunos[chave].periodo);
  }else{
    printf("Matricula Invalida!\n");
  }
}

Aluno* criarVetor(int tam) {
  Aluno *alunos = (Aluno*) calloc(tam, sizeof(Aluno));
  return alunos;
}

void menu(){
  printf("1 - Adicionar aluno\n");
  printf("2 - Consultar aluno\n");
  printf("3 - Excluir aluno\n");
  printf("4 - Alterar aluno\n");
  printf("5 - Excluir todos os alunos\n");
  printf("6 - Aumentar o numero de alunos\n");
  printf("7 - Consultar todos os alunos\n");
  printf("8 - Sair\n");
}

Aluno* aumentarAlunos (Aluno *alunos, int qtd_n, int qtd_a) {
  //int tamanho=;
  //Aluno *alunos = (Aluno*)calloc(qtd, sizeof(Aluno));
  //qtd = prox_primo(qtd);
  Aluno *aux = criarVetor(qtd_n);

  int i, cont = 0;

  for (i = 0; i < qtd_a; i++){
    if (alunos[i].matricula != 0) {
      aux[hash(alunos[i].matricula,qtd_n)] = alunos[i];
      cont = 1;
    }
  }
  if (cont == 0){
    printf("Nenhum aluno cadastrado!\n");
    return alunos;
  }
  alunos = (Aluno*)realloc(alunos, qtd_n * sizeof(Aluno));
  if(alunos == NULL){
    printf(" \nsem espaço na memoria\n");
  }
 for (i = 0; i < qtd_n; i++){
      alunos[i] = aux[i];
  }
  return alunos;
}

int primo (int num) {
  if (num == 1) 
    return 0;
  for (int i = 2; i <= num/2; i++) {
    if (num % i == 0) {
      return 0;
    }
    if (num /i < i) {
      return 1;
    }
  }
  return 1;
}

int prox_primo(int num) {
  if (primo(num)){
    return num;
  }
  return prox_primo(++num);    
}

void alterar (Aluno *alunos, int tam, long int mat_busc) {
  int op=0;
  if(alunos[hash(mat_busc, tam)].matricula != 0) {
    buscarAluno(alunos, tam, mat_busc);
    while(op != 5){
      printf("Informe o que deseja alterar:\n1 -Nome\n2 -Curso\n3 -Periodo\n4 - Visualizar cadastro\n5-Sair\n");
      scanf("%d",&op);
      switch(op) {
        case 1:
          printf("1 -Alterar nome:\n");
          scanf("%s",alunos[hash(mat_busc, tam)].nome);
          break;

        case 2:
          printf("2 - Alterar Curso: \n");
          scanf("%s",alunos[hash(mat_busc, tam)].curso);
          break;  

        case 3:
          printf("3 - Alterar Periodo: \n");
          scanf("%d", &alunos[hash(mat_busc, tam)].periodo);
          break;

        case 4:
          printf("4 - Visualizando dados alterados: \n");
          buscarAluno(alunos, tam, mat_busc);
          break;
        case 5: 
          printf("Alteralçao encerrada\n");
          break;

        default:
          printf("Opção invalida, digite novamente\n");
          break;
      }
    } 
  } else
    printf("Matricula Invalida!\n");
}

int main() {
  int tam = 0, op=0, tam_n;
  long int mat_busc;
  printf("Informe a quantidade de alunos que serão matriculados: ");
  scanf("%d", &tam);
  tam = prox_primo(tam);
  Aluno *alunos = criarVetor(tam);
  while(op != 8){
    menu();
    scanf("%d",&op);
    switch(op) {
      case 1:
        printf("1 - Adicionar aluno\n");
        matricular(alunos,tam);
        break;

      case 2:
        printf("2 - Consultar aluno\n");
        printf("Digite o numero da matricula: ");
        scanf("%ld", &mat_busc);
        buscarAluno(alunos, tam, mat_busc);
        break;  

      case 3:
        printf("3 - Excluir aluno\n");
        printf("Informe a matricula do aluno que deseja excluir: ");
        scanf("%ld", &mat_busc);
        remover(alunos, tam, mat_busc);
        break;

      case 4:
        printf("4 - Alterar aluno\n");
        printf("Informe a matricula do aluno: ");
        scanf("%ld", &mat_busc);
        alterar(alunos, tam, mat_busc);
        break;

      case 5:
        printf("5 - Excluir todos aluno\n");
        removerTodos(alunos, tam);
        break;
      case 6:
       printf("5 - Excluir todos aluno\n");
      removerTodos(alunos, tam);
      printf("6 - Aumentar o numero de alunos\n");

      printf("Digite a nova quantidade de alunos: ");
      scanf("%d", &tam_n);

      tam_n = prox_primo(tam_n);
      alunos = aumentarAlunos(alunos,tam_n, tam);
      break;
        
      case 7:
        printf("7 - Consultar todos os alunos\n");
        mostrarAlunos(alunos, tam);
        break;

      case 8:
        printf("8 - Sair\n");
        printf("Programa Encerrado\n");
        break;
    }
  }
}