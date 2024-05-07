#include <stdio.h>

int main()
{
    int a;
    

    scanf("%d", &a);
   

    if ((a>17 && a<30)|| (a>60 && a<100))
    {
        printf("a paga ridotto");
    }
    else if (a<17) {
        printf(" a non paga");
    }


    else if ((a>30 && a<60|| a>100))
{   printf("a paga completo");
}}