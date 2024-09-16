#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void totaliza_str(char *texto);

int main(){

char string[91];

printf("Entre com um texto(máximo 90 caracteres): ");

    fgets(string, 90, stdin);
  string[strlen(string)-1] = '\0';
  
totaliza_str(string);
  
}
void totaliza_str(char *texto){

int tot_char[256] = {0};

  int i;


  for(i = 0; i < strlen(texto); i++)
    tot_char[texto[i]]++;

        printf("*****RESUMO*****\n");
  
  for(i = 0; i < 256; i++)  
    {
    if(tot_char[i] !=0)
    {
      if (i==32)
            printf("Branco = %d\n", tot_char[i] );

      else
        printf("%c = %d\n", (char) i , tot_char[i] );


    }
    
}
printf("Total de caracteres digitados = %d.", strlen(texto));
}