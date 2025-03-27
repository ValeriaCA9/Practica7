//Cruz Alegria Valeria Montserrat
//Comprobar valor par o impar
#include <stdio.h>

void main()
{
    int a;
    
    printf ("Dame un numero: ");
    scanf("%i", &a);
    
    if (a%2==0)
    {
        printf("par\n");
    }
    else
    {
    printf("impar\n");
    }
}
