#include <stdio.h>
#include <stdlib.h>

void menu() {
  printf("\n1 - Somar\n");
  printf("2 - Subtrair\n");
  printf("3 - Multiplicacao\n");
  printf("4 - Divisao\n");
  printf("5 - Sair\n");
}

int soma2(int num1, int num2) { return num1 + num2; }

int soma3(int num1, int num2, int num3) { return num1 + num2 + num3; }

int sub2(int num1, int num2) { return num1 - num2; }

int sub3(int num1, int num2, int num3) { return num1 - num2 - num3; }

int mult2(int num1, int num2) { return num1 * num2; }

int mult3(int num1, int num2, int num3) { return num1 * num2 * num3; }

int div2(int num1, int num2) { return num1 / num2; }

int div3(int num1, int num2, int num3) { return num1 / num2 / num3; }

int main(void) {
  int op = 0, num1, num2, num3, qtde_num;
  menu();
  scanf("%d", &op);
  while (op != 5) {
    printf("Informe a quantidade de numeros\n");
    scanf("%d", &qtde_num);
    printf("Digite os numeros:\n");
    if (qtde_num == 2)
      scanf("%d %d", &num1, &num2);
    else
      scanf("%d %d %d", &num1, &num2, &num3);
    switch (op) {
    case 1:
      if (qtde_num == 2)
        printf("%d + %d = %d", num1, num2, soma2(num1, num2));
      else
        printf("%d + %d + %d = %d", num1, num2, num3, soma3(num1, num2, num3));
      break;

    case 2:
      if (qtde_num == 2)
        printf("%d - %d = %d", num1, num2, sub2(num1, num2));
      else
        printf("%d - %d - %d = %d", num1, num2, num3, sub3(num1, num2, num3));
      break;

    case 3:
      if (qtde_num == 2)
        printf("%d * %d = %d", num1, num2, mult2(num1, num2));
      else
        printf("%d * %d * %d = %d", num1, num2, num3, mult3(num1, num2, num3));
      break;

    case 4:
      if (qtde_num == 2)
        printf("%d / %d = %d", num1, num2, div2(num1, num2));
      else
        printf("%d / %d / %d = %d", num1, num2, num3, div3(num1, num2, num3));
      break;

    default:
      printf("Opcao invalida\n");
      break;
    }
    menu();
    scanf("%d", &op);
  }
  printf("Calculadora finalizada");
  return 0;
}