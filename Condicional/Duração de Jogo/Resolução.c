#include <stdio.h>

int main(void)
{
  int hI, mI, hF, mF, dH, dM;

  printf("Informe as horas de início e fim do jogo: ");
  scanf("%d %d %d %d", &hI, &mI, &hF, &mF);

  if (hF > hI && mF > mI)
  {
    dH = hF - hI;
    dM = mF - mI;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
  }
  else
  {
    if (hF > hI && mF < mI)
    {
      dH = hF - hI - 1;
      dM = 60 - mI + mF;
      printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
    }
    else
    {
      if (hF < hI && mF > mI)
      {
        dH = 24 - hI + hF;
        dM = mF - mI;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
      }
      else
      {
        if (hF < hI && mF < mI)
        {
          dH = 23 - hI + hF;
          dM = 60 - mI + mF;
          printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
        }
        else
        {
          if (hF == hI && mF > mI)
          {
            dH = 0;
            dM = mF - mI;
            printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
          }
          else
          {
            if (hF == hI && mF < mI)
            {
              dH = 23;
              dM = 60 - mI + mF;
              printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
            }
            else
            {
              if (hF > hI && mF == mI)
              {
                dH = hF - hI;
                dM = 0;
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
              }
              else
              {
                if (hF < hI && mF == mI)
                {
                  dH = 24 - (hI - hF);
                  dM = 0;
                  printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
                }
                else
                {
                  if (hF == hI && mF == mI)
                  {
                    dH = 24;
                    dM = 0;
                    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)", dH, dM);
                  }
                }
              }
            }
          }
        }
      }
    }
  }
}
