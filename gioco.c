#include <stdio.h>

int main()
{   
    char nome;
    char personaggio;
   // int numeri [6]={1, 2, 3, 4, 5, 6};
    int i=0;
    char tipo[6]={ 'm', 'a', 'r', 'i', 'o', '\0'};
   // int 1=mario;
    //int 2=luigi;
    //int 3=toad;
   // int 4=tipo timido;
   // int 5=wario;
    //int 6=waluigi;
 //printf("%s", tipo)       char tipo2[]="ciao";
    printf("inserisci il nome\n");
    scanf("%c", &nome);
    printf("scegli il tuo personaggio\n");

    while(tipo[i]!='\0')
    { 
        printf ("%c", tipo[i]);
        i=i+1;
    }
   //  while (i<6)
   // {
       // printf("inserisci un numero\n");
        //scanf("%d", &numeri[i]);
       // i=i+1;
    }
