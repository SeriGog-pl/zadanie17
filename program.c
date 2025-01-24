#include <stdio.h>

float cuboid_volume(float a, float b, float h) {

return(a*b*h);
}
float ball_volume(float r)
{
    return(((4.0/3.0)*3.1415)*(r*r*r));
}

int main()
{
    float a, b, h, r;
    printf("podaj promien kuli\n");
    scanf("%f", &r);
    /*printf("podaj dlugosc podstawy prostopadloscianu\n");
    scanf("%f", &a);

    printf("podaj szerokosc podstawy prostopadloscianu\n");
    scanf("%f", &b);

    printf("podaj wysokosc prostopadloscianu\n");
    scanf("%f", &h);

    printf("\nObjetosc prostopadloscianu: %f", cuboid_volume(a,b,h));*/

    printf("\nObjetosc kuli: %f", ball_volume(r));

    return 0;
}

