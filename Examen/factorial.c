#include <stdio.h>

int factorial(int numero) 
{
  if (numero < 0) 
    return -1;

  int resultat = 1;
  for(int i=1; i<=numero; i++) {
    resultat *= i;
  }

  return resultat;
}

int main() 
{

  int debut, fin;

  printf("Premier chiffre : ");
  scanf("%d", &debut);

  printf("Dernier chiffre : ");  
  scanf("%d", &fin);

  for(int i=debut; i<=fin; i++) 
  {
    int factorielle = factorial(i);
    printf("%d! = %d\n", i, factorielle);
  }

  return 0;
}