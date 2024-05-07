#include <stdio.h>

int main()
{
    int a;
    int b;
    int c;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);
   

    if (a==b && b==c)
    { printf("triangolo equilatero");
    }
    else if (a==b)
    { printf("triangolo isoscele");
    }
    else if (a+b>c && a+c>b && b+c>a)
    {
        printf("è un triangolo scaleno");
    }
  
    }