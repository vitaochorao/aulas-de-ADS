#include <stdio.h>

// Função recursiva para calcular o próximo termo da sequência de Fibonacci
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

// Função recursiva para imprimir os primeiros 'n' termos da sequência de Fibonacci
void imprimirFibonacci(int n) {
    if (n <= 0)
        return;
    imprimirFibonacci(n - 1);
    printf("%d ", fibonacci(n - 1));
}

int main() {
    int termos;

    printf("Digite o número de termos da sequência de Fibonacci que deseja gerar: ");
    scanf("%d", &termos);

    printf("Sequência de Fibonacci com %d termos:\n", termos);
    imprimirFibonacci(termos);
    printf("\n");

    return 0;
}
