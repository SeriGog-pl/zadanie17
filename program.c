#include <stdio.h>

float cuboid_volume(float a, float b, float h) {

return(a*b*h);
}

int main()
{
    float a, b, h;
    printf("podaj dlugosc podstawy prostopadloscianu\n");
    scanf("%f", &a);

    printf("podaj szerokosc podstawy prostopadloscianu\n");
    scanf("%f", &b);

    printf("podaj wysokosc prostopadloscianu\n");
    scanf("%f", &h);

    printf("\nObjetosc prostopadloscianu: %f", cuboid_volume(a,b,h));

    return 0;
}

