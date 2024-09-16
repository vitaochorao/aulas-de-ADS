#include <stdio.h>
#include <stdlib.h>

// Definição do tamanho mÃ¡ximo da pilha
#define MAX_TAM 100

// Definição da estrutura de dados da pilha
typedef struct {
    int items[MAX_TAM];
    int top;
} Pilha;

// Função para inicializar a pilha
void inic_pilha(Pilha *pilha) {
    pilha->top = -1;
}

// Funcão para verificar se a pilha estÃ¡ vazia
int isEmpty(Pilha *pilha) {
    return pilha->top == -1;
}

// Função para verificar se a pilha estÃ¡ cheia
int pilha_cheia(Pilha *pilha) {
    return pilha->top == MAX_TAM - 1;
}

// Função para empilhar um elemento na pilha
void push(Pilha *pilha, int valor) {
    if (pilha_cheia(pilha)) {
        printf("Erro: a pilha está¡ cheia.\n");
        return;
    }
      pilha->items[++pilha->top] = valor;
}

// Função para desempilhar um elemento da pilha
int pop(Pilha *pilha) {
    if (isEmpty(pilha)) {
        printf("Erro: a pilha está¡ vazia.\n");

    }
    return pilha->items[pilha->top--];
}

// Função para imprimir os elementos da pilha
void impPilha(Pilha *pilha) {
    printf("Elementos da pilha: ");
    for (int i = 0; i <= pilha->top; i++) {
        printf("%d ", pilha->items[i]);
    }
    printf("\n");
}

int main() {

    int desempilhado, i, vl;
    char opc;
    
    Pilha pilha;
    inic_pilha(&pilha);

    // Empilhando alguns elementos
    while(1)
    {
      fflush(stdin);
      printf("\nVocê deseja empilhar ou desemplinhar(E/D)? (S = Sair): ");
      scanf("%c", &opc);
      fflush(stdin);
                                                                    
      switch(opc)
      {
        case 'S':
        case 's':
            // Imprimindo os elementos da pilha
            impPilha(&pilha);
            return 0;

        case 'E':
        case 'e':
            printf("Digite um número inteiro para ser empilhado: ");
            scanf("%d", &vl);
            fflush(stdin);
            push(&pilha, vl);
            break;

        case 'D':
        case 'd':
            // Desempilhando um elemento
            desempilhado = pop(&pilha);
            printf("Elemento desempilhado: %d\n", desempilhado);
            break;

      }

    }

    return 0;
}