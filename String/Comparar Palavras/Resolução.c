#include <stdio.h>
#include <string.h>

int main(void)
{
  char palavras[5][21], leitura_pal[21], juncao[106], verifica[21];
  int compara;

  for (int x = 0; x < 5; x++)
  {
    printf("\nDigite a palavra: ");
    scanf("%s", leitura_pal);
    
    strcpy(palavras[x], leitura_pal);
  }

  strcpy(juncao, palavras[0]);

  for (int x = 1; x < 5; x++)
  {
    strcat(juncao, " ");
    strcat(juncao, palavras[x]);
  }

  printf("%s", juncao);

  printf("\nDigite uma palavra: ");
  scanf("%s", verifica);

  for (int x = 0; x < 5; x++)
  {
    compara = strcmp(verifica, palavras[x]);

    if (compara == 0)
    {
      printf("\nA palavra %s foi encontrada.", verifica);
    }
  }

  return 0;
}
