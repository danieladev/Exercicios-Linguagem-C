#include <stdio.h>
#include <math.h>

int main(void)
{
  float aresta, areaFace, areaTotalFace, perimetroUmaFace, somaArestas, volume;

  printf("Informe o valor da aresta do cubo: ");
  scanf("%f", &aresta);

  areaFace = pow(aresta, 2);
  areaTotalFace = 6 * pow(aresta, 2);
  perimetroUmaFace = aresta * 4;
  somaArestas = aresta * 12;
  volume = pow(aresta, 3);

  printf("%f %f %f %f %f", areaFace, areaTotalFace, perimetroUmaFace, somaArestas, volume);
}