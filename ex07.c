#include <stdio.h>

int main()
{   
    int a;

    int differenza;

    scanf("%d", &a);

        if (a==1969)
    {
        printf("sei nato l'anno in cui l'uomo è andato sulla luna");
    }
    
    else if (a-1969>0)
    {
        differenza= a-1969;
        printf("sei nato dopo di anni:%d\n", differenza);
    }
    
    else
    {
        differenza= 1969-a;
        printf ("sei nato prima di anni: %d\n", differenza);
    }
    }