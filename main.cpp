#include <iostream>
using namespace std;

const int MAX_OPERACOES = 100; 

struct Operacao {
  float operando1;
  char operador;
  float operando2;
  float resultado;
};

float calcula (float operando1, char operador, float operando2) {
  switch (operador) {
    case '+': return operando1 + operando2;
    case '-': return operando1 - operando2;
    case '*': return operando1 * operando2;
    case '/': return operando1 / operando2;
  }
  return 0;
}

int main() {
  Operacao calculadora[MAX_OPERACOES];
  int iOperacao = 0;

  /* 
    LEIA o primeiro operando da i-ésima operação (iOperacao) da calculadora
    ENQUANTO o primeiro operando da i-ésima operação for diferente de zero EXECUTE
      LEIA o operador da i-ésima operação (iOperacao) da calculadora
      LEIA o segundo operando da i-ésima operação (iOperacao) da calculadora
      O resultado da i-ésima operação da calculadora RECEBE o resultado da função calcula que tem três parâmetros
      INCREMENTE iOperacao
      LEIA o primeiro operando da próxima operação da calculadora
    FIM-ENQUANTO
  */
  
  for (int i = 0; i < iOperacao; i++) {
    cout << calculadora[i].resultado << endl;
  }

  return 0;
}
