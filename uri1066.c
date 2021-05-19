/*Pares, Ímpares, Positivos e Negativos*/ // URI Online Judge | 1066

/*Leia 5 valores Inteiros. A seguir mostre quantos valores digitados foram pares, 
quantos valores digitados foram ímpares, quantos valores digitados foram positivos e 
quantos valores digitados foram negativos.*/

#include <stdio.h>

int main (void) {
  
int i;
int value[5];
int valuePar = 0, valueImp = 0, valueNeg = 0, valuePos = 0; 

for(i = 0; i < 5; i++) {
  scanf("%d", &value[i]);

  if (value[i] % 2 == 0) {
    valuePar += 1;
  } else {
    valueImp += 1;
  }

  if (value[i] > 0) {
    valuePos += 1;
  } else if (value[i] < 0) {
    valueNeg += 1;
  }

} 

printf("%d valor(es) par(es)\n", valuePar);
printf("%d valor(es) impar(es)\n", valueImp);
printf("%d valor(es) positivo(s)\n", valuePos);
printf("%d valor(es) negativo(s)\n", valueNeg);
return 0;

}
