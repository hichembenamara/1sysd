#include <stdio.h>
#include <stdlib.h>

void display_histogram(int tab[], int taille) 
{

  for(int i=0; i<taille; i++) {
    
    
    printf("%d : ", tab[i]);
    
    
    for(int w=0; w<tab[i]; w++) 
    {
      printf("*");
    }
    
    printf("\n");
  }

}

int main() {

  int values[] = {4, 9, 8, 2, 0, 1, 10, 5, 8};

  display_histogram(values, 9);

  exit(EXIT_SUCCESS);
}