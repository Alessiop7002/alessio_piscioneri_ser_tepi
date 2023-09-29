/*Scrivere un programma che consenta di simulare l'acquisto dei prodotti agricoli.
E' possibile acquistare solo tre tipologie di ortaggi, altri non sono validi:
    - Carote individuate dal carattere c
    - Broccoli individuati dal carattere b
    - Patate individuate dal carattere p
Scelto l'ortaggio, va inserito il peso in grammi.
Il prezzo totale è dato da:
    - Se si è acquistata una sola tipologia di ortaggio allora il costo è dato da 2€ al kg
    - Se sono stati acquistati 2 tipologie di ortaggio è dato da 2€ al kg e si ha diritto al 12% di sconto
    - Se sono stati acquistati 3 tipologie di ortaggio è dato da 2€ al kg e si ha diritto al 23% di sconto
Visualizzare il costo finale della spesa*/

#include <iostream>

using namespace std;

#define COSTO 2
#define DODICI 0.12
#define VENTITRE 0.23


int main()
{
    int ortaggi = 0;
    char ortaggio = ' ', sn = ' ';
    float peso= 0, pesoi = 0, totale = 0;

    printf("Scegli un ortaggio tra carote (c), broccoli (b) o patate (p): ");
    scanf_s( " %c", &ortaggio);
    if (ortaggio != 'c' &&ortaggio != 'b' &&ortaggio != 'p')
    {
        printf("ERRORE");
        system("pause");
        return 0;
    }
    else
    {
        ortaggi++;
        printf("Inserisci il peso dell'ortaggio: ");
        scanf_s("%f", &pesoi);
        peso += pesoi;

        printf("Vuoi comprare un altro ortaggio? (s/n) ");
        scanf_s( " %c", &sn);
        if (sn == 's')
        {
            printf("Scegli un ortaggio tra carote (c), broccoli (b) o patate (p): ");
            scanf_s( " %c", &ortaggio);
            if (ortaggio != 'c' &&ortaggio != 'b' &&ortaggio != 'p')
            {
                printf("ERRORE");
                system("pause");
                return 0;
            }
            else
            {
                ortaggi++;
                printf("Inserisci il peso dell'ortaggio: ");
                scanf_s("%f", &pesoi);
                peso += pesoi;
                
                printf("Vuoi comprare un altro ortaggio? (s/n) ");
                scanf_s( " %c", &sn);
                if (sn == 's')
                {
                    printf("Scegli un ortaggio tra carote (c), broccoli (b) o patate (p): ");
                    scanf_s( " %c", &ortaggio);
                    if (ortaggio != 'c' && ortaggio != 'b' &&ortaggio != 'p')
                    {
                        printf("ERRORE");
                        system("pause");
                        return 0;
                    }
                    else
                    {
                        ortaggi++;
                        printf("Inserisci il peso dell'ortaggio: ");
                        scanf_s("%f", &pesoi);
                        peso += pesoi;
                    }
                }
            }
        }
        peso = peso / 1000;
        totale = peso * COSTO;

        if (ortaggi == 2)
        {
            totale = totale - totale * DODICI;
        }
        else if (ortaggi == 3)
        {
            totale = totale - totale * VENTITRE;
        }
        printf("%f", totale);
    }

    system("pause");
    return 0;
}
