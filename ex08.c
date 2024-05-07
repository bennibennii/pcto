#include <stdio.h>

int main()
{
    int N;
    int divisione;

    scanf("%d", &N);

    while(N/N==1 && N/1==N)
    { 
        divisione=N/N;
        divisione=N/1;
        printf("è un numero primo: %d\n", divisione);
    }
    
}