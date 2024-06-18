#include <stdio.h>
#include <string.h>
#include "calc.h"

#define MAX_EXP_SIZE 100
#define OPERADORES "+-*/^"

int main() {

    // Mudar a expressão
    char entryPosfixada[] = "45 tan 60 cos * 2.5 *";

    Expressao exp;

    strcpy(exp.posFixa, entryPosfixada);
    exp.Valor = getValor(exp.posFixa);
    strcpy(exp.inFixa, getFormaInFixa(exp.posFixa));

    printf("\nExpressao no formato posfixado: %s\n", entryPosfixada);
    printf("Expressao no formato infixado: %s\n", exp.inFixa);
    printf("Valor final da expressao: %.2f\n", exp.Valor);

    printf("\n\t\tPara altera os valores das entradas pos fixas, altere na função main\n\n");

    return 0;
}