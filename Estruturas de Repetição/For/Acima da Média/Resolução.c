int main(void)
{
  float num[10], soma = 0, media, acima[10], achou = 0;

  for (int x = 0; x < 10; x++)
  {
    printf("Digite um numero: ");
    scanf("%f", &num[x]);
    
    soma = soma + num[x];
  }
