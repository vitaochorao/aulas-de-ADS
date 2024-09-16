#include <stdio.h>

void ordenacaoBolha(int arr[], int n) 
{
  int trocou, temp; // Variável para rastrear se houve trocas em uma iteração
  do 
  {
    trocou = 0; // Inicialmente, não houve trocas nesta iteração
    for (int i = 0; i < n - 1; i++) 
    { // Loop sobre os elementos da lista
      if (arr[i] > arr[i + 1]) 
      { // Verifica se o elemento atual é maior que o próximo
        // Troca os elementos de posição
        temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
        trocou = 1; // Indica que houve pelo menos uma troca nesta iteração
      }
    }
  } while (trocou); // Repete o processo até não haver mais trocas em uma iteração
}


int buscaSequencial(int array[], int tamanho, int chave) 
{

  int i;
  for (int i = 0; i < tamanho; i++) 
  {
    if (array[i] == chave) 
    {
      return i;
    }
    if (array[i] > chave) 
    {
      break;
    }
  }
  return -1;
}


int main() {
  int array[] = {26, 9,  14, 56, 68, 41, 37, 5,  85, 86,
                 69, 10, 76, 42, 76, 54, 89, 17, 50, 81};
  int tamanho, chave, resultado,i;
  tamanho = sizeof(array) / sizeof(array[0]);
  

  
  ordenacaoBolha(array, tamanho);
  printf("Escreva 10 numeros:\n");
  int numeros_usuario[10];
  for (int i = 0; i < 10; i++) {
      scanf("%d", &numeros_usuario[i]);
  }
 ;

  printf("Números que você acertou:\n");
  for (int i = 0; i < 10; i++) {
      
      int resultado = buscaSequencial(array, tamanho, numeros_usuario[i]);
      if (resultado != -1) {
          printf("%d ", numeros_usuario[i]);
      }
  }
  return 0;
}