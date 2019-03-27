#include <stdio.h>
main()
{
    float t;
    printf("Temperatura:");
    scanf("%f",&t);
    if (t<=15)
        printf("Muito Frio");
    else if (t>=16 && t<=23)
        printf("Frio");
    else if (t>23 && t<=26)
        printf("Agradável");
    else if (t>26 && t<=30)
        printf("Calor");
    else
        printf("Muito Quente");
}
