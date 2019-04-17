/*
Este programa recebe 3 valores nas variáveis a,b e c. 
Compara os 3 valore sentre si e apresenta, como resultado, o maior
entre eles.
*/
#include <stdio.h>
main()
{
    int a,b,c;
    //Entrada de dados
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);    
    printf("c=");
    scanf("%d",&c);
    //Comparação e apresentação do resultado
    if(a>b)
        if(a>c)
            printf("Maior %d",a);
        else
            printf("Maior %d",c);
    else
        if(b>c)
            printf("Maior %d",b);
        else
            printf("Maior %d",c);    
}
