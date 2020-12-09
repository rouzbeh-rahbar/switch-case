#include <stdio.h>

int main(void) 
{
  int a, z1, z2;
  printf("case-Beispiel\n\n");
  printf("Bitte wählen Sie eine Aktion:\n");
  printf("1 ... Addition\n");
  printf("2 ... Subtraktion\n");
  printf("3 ... Multiplikation\n");
  printf("Ihre Auswahl: ");
  scanf("%d", &a);  // die getroffene Auswahl
  printf("Bitte 1. Zahl eingeben: ");
  scanf("%d",&z1);
  printf("Bitte 2. Zahl eingeben: ");
  scanf("%d",&z2);
  switch(a)
  {
    case 1: printf("%d + %d = %d\n", z1, z2, z1+z2); break;
    case 2: printf("%d - %d = %d\n", z1, z2, z1-z2); break;
    case 3: printf("%d * %d = %d\n", z1, z2, z1*z2); break;
    default: printf("Ihre Auswahl war ungültig\n\n");
  }
  
  printf("Programmende.\n\n");
  

  return 0;
}