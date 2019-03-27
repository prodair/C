#include <stdio.h>
main()
{
    int a,b,c;
    printf("a=");
    scanf("%d",&a);
    printf("b=");
    scanf("%d",&b);    
    printf("c=");
    scanf("%d",&c);
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
