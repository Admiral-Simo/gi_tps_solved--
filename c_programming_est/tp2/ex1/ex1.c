// iHeure,iMinute,iSeconde.
#include <stdio.h>

int iHeure,iMinute,iSeconde;

void affiche_heure() {
    printf("%d heure(h) %d minute(m) %d seconde(s).\n", iHeure, iMinute, iSeconde);
}

void saisir_heure(int iH, int iM, int iS) {
    iHeure = iH;
    iMinute = iM;
    iSeconde = iS;
}

void tick() {
    if (iSeconde == 60) {
        iSeconde = 0;
        
        if (iMinute == 60) {
            iMinute = 0;
            if (iHeure == 24) {
                iHeure = 0;
            }
            iHeure++;
        }
        iMinute++;
    } else {
        iSeconde++;
    }

}

int main() {
    int iH, iM, iS;
    do {
        printf("Enter todays time: \n");
        printf("iH: ");
        scanf("%d", &iH);
        printf("iM: ");
        scanf("%d", &iM);  
        printf("iS: ");
        scanf("%d", &iS);

    } while(!((iH >=0 && iH < 24) || (iM >= 0 && iM <= 60) || (iS >= 0 && iS <= 60)));
    saisir_heure(iH, iM, iS);
    for(int i = 0; i < 4000; i++) {
        tick();
        affiche_heure();
    }
    return 0;
}