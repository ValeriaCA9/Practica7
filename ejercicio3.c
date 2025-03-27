//Cruz Alegria Valeria Montserrat
//Calculadora 
#include <stdio.h>
#include <math.h>

void main()
{
    int a , b;
    int c;
    float res;
    printf ("escoger una opcion: 1 suma, 2 resta, 3 multiplicacion, 4 division, 5 raiz, 6 potenacia");
    scanf("%i", &c);
    
    
    switch (c)
    {
        case 1:
            printf ("Dame un numero: ");
            scanf("%i", &a);
            printf ("Dame otro numero: ");
            scanf("%i", &b);  
            res=a+b;
            printf("%f", res);
            break;
        case 2: 
            printf ("Dame un numero: ");
            scanf("%i", &a);
            printf ("Dame otro numero: ");
            scanf("%i", &b);  
            res=a-b;
            printf("%f", res);
            break;
        case 3:
            printf ("Dame un numero: ");
            scanf("%i", &a);
            printf ("Dame otro numero: ");
            scanf("%i", &b); 
            res=a*b;
            printf("%f", res);
            break;
        case 4: 
            printf ("Dame un numero: ");
            scanf("%i", &a);
            printf ("Dame otro numero: ");
            scanf("%i", &b); 
            res= a/b;
            printf("%f", res);
            break;
        case 5: 
            printf ("Dame un numero: ");
            scanf("%i", &a); 
            res= sqrt (a);
            printf("%f", res);
            break;
        case 6: 
            printf ("Dame un numero: ");
            scanf("%i", &a);
            printf ("Dame otro numero: ");
            scanf("%i", &b); 
            res=pow (a, b);
            printf("%f", res);
            break;
    }
}
