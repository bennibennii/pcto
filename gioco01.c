#include <stdio.h>
#include <unistdio.h>

int main()
{
    printf("inserisci il nome utente\n");
    char nomeutente[50];
    scanf("%s", nomeutente);
    printf("scegli il tuo personaggio:\n mario\n toad\n luigi\n rosalinda\n peach\n wario\n");
    char personaggio[9];
    scanf("%s", personaggio);
    printf("Benvenuto a Toadlandia\n ");
    printf("Tipo timido è stato rinchiuso nel castello di bowser\n Il tuo compito è liberarlo\n Vi trovate già ai piedi del Castello Infernale\n Dovete riuscire ad arrivare in cima\n Alla fine dovrete risolvere l'indovinello di Bowser per liberare il vostro amico");

    }