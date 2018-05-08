//Programa que suma 2 puntos geometricos
#include <stdio.h>

typedef struct
{
  float x;
  float y;
} coord;

int main()
{
  coord p1, p2;
  //Preguntar al usuario las cordenadas del punto 1
  scanf("%f", &p1.x);
  scanf("%f", &p1.y);
  
  //Preguntar al usuario las coordenadas del punto 2
  scanf("%d", &p2.x);
  scanf("%c", &p2.y);

//sumar los puntos
  printf("La suma de los dos puntos en x es: %.2f", p1.x + p1.y);
  printf("La suma de los dos puntos en y es: %.2f", p2.x + p2.y);
  return 0;
}

