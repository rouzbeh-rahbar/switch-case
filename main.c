#include <stdio.h>

int main(void) 
{
  char ch; // Character-Variable = ein Zeichen
  printf("Dieses Programm gibt 'Hello World' aus und fragt danach, ob es nochmal ausgeführt werden soll.\n\n");
  do
  {
    printf("Hello World\n");
    printf("Soll 'Hello World' nochmal ausgegeben werden (j/n)? ");
    scanf(" %c", &ch); // Leerzeichen wichtig!
  } while(ch!='n' && ch!='N');

  return 0;
}