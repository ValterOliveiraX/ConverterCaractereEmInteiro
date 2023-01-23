#include <stdio.h>
#include <stdlib.h>


int converterint(char palavra[20]){
    int valor = atoi(palavra);
  return valor;
}


int main(void) {
char num[10] = "100";
int valor = converterint(num);
  printf("\n valor convertido em inteiro é %d", valor);
}



void imprimir(elemento e) {
  printf("\n----- Exibindo dados --------\n");
  printf("NR_ZONA: %s\n", e.NR_ZONA);
  printf("NR_SECAO: %s\n", e.NR_SECAO);//deve ser inteiro
  printf("QT_APTOS: %s\n", e.QT_APTOS);//deve ser inteiro
  printf("QT_COMPARECIMENTO: %s\n", e.QT_COMPARECIMENTO);//deve ser inteiro
  printf("QT_ABSTENCOES: %s\n", e.QT_ABSTENCOES);//deve ser inteiro
  printf("NR_VOTAVEL: %s\n", e.NR_VOTAVEL);
  printf("NM_VOTAVEL: %s\n", e.NM_VOTAVEL);
  printf("QT_VOTOS: %s\n", e.QT_VOTOS);//deve ser inteiro
  printf("\n-----------------------------\n");
}