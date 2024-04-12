#include <stdio.h>
#include <stdlib.h>
#define Pi 3.14159



    double Perimetre(double rayon)
    {
        return 2* Pi * rayon;
     }
    double Surface (double rayon)
    {
        return Pi * rayon * rayon;
    }

    int main()
    {
        double rayon;
        printf("rayon cercle:");
        scanf("%lf", &rayon);

        double p = Perimetre(rayon);
        double s = Surface(rayon);

        printf("Perimetre = %lf\n", p);
        printf("Surface = %lf\n", s);

        return 0;
    }
