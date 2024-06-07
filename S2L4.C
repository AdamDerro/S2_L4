#include <stdio.h>

int partita();

int main () {

    char scelta;
    
    printf("MENU'");
    printf("\nPremi A per iniziare il gioco, B per terminare la partita:\n");
    scanf ("%c", &scelta);
    getchar();

    if (scelta =='A') 
    {
        printf("\n INIZIAMO!\n");
        
    
        partita();
    }

    while (scelta == 'B'){
        printf("\nHai chiuso il gioco!\n");
    }
    return 0;

}

int partita(){

    int punteggio = 0;
    char risposta ;
    char nome [20];

        printf ("\nInserisci il tuo nome:\n");
        scanf ("%s", &nome);
        getchar();

    printf ("\nQual è la capitale dell'Italia?");
    printf ("\nA) Milano\nB) Roma\n");
    scanf("%c", &risposta);
    getchar();

    if(risposta == 'B'){



punteggio ++;

       
        printf("\nBravoo! Attualmente il tuo punteggio è di %d\n", punteggio);
        printf ("\nQual è la capitale della Francia?");
        printf ("\nA) Parigi\nB) Londra\n");
        scanf("%c", &risposta);
        getchar();

        if( risposta = 'A'){
        
            punteggio ++;

            printf("\nMa allora sei un genio! %s Hai terminato il gioco con un puntenggio di %d\n", nome, punteggio);
         return 0;
        }

   {
         while (risposta = 'B'){
         int punteggio= 0;
   
        printf("\nHai sbagliato per la seconda volta, hai perso il gioco!\n");
        }
        return 0;
    }
    
    }

    while (risposta = 'A')
   {
    int punteggio= 1;
        printf("Sbagliatoo! Ti tocca ricomincaire");
        partita();
    }
    return 0;
}