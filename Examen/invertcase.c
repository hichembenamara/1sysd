#include <stdio.h>



void invertcase() 
{

  char s[100];

  printf("Entrez une chaine (maximum %d caracteres) : ", 100);
  if(scanf("%s", s) != 1) 
  {
    printf("Erreur \n");
    return;
  }

  int i = 0;
  while(s[i] != '\0') 
  {
    if(s[i] >= 'A' && s[i] <= 'Z') 
    {
      s[i] = s[i] - 'A' + 'a';
    }
    else if(s[i] >= 'a' && s[i] <= 'z') 
    {
      s[i] = s[i] - 'a' + 'A'; 
    }
    i++;
  }

  printf("Chaine invertée : %s\n", s);

}

int main() 
{

  invertcase();
  
  return 0;
}