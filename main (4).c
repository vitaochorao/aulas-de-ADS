#include <stdio.h>
 void imprimir(int num){ 
if(num==0)
    printf("%d ",num);
  else{
  printf("%d ",num);
  imprimir(num-1);
  printf("%d ",num);
  }
}
int main(void){
  int num;

  printf("digite um valor maior que zero: ");
  scanf("%d",&num);

  imprimir(num);
  return 0;
}