#include <stdio.h>
#include <conio.h>

int main(int argc, char *argv[]) {
  int Resultado, valorA=0, valorB=0, valorC=0;
  printf("\nMultiplicando valores passados na linha de comando\n");

  //atoi converte de alfanumérico para inteiro
  valorA = atoi(argv[1]);
  valorB = atoi(argv[2]);
  valorC = atoi(argv[3]);

  Resultado = valorA * valorB + valorC;
  printf("%d",Resultado);
  getch();
  return 0;
}
