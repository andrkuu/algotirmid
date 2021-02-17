//
// Created by andreas on 10.02.21.
//

#include <stdio.h>
/* Preprotsessori käsu (asendusdirektiiv) abil öeldakse, MaxN asendab 10 (mugav kasutada massiivi mõõtmena deklareerimisel ja töötlemisel) */
#define MaxN 10

void main() {

    int numbers[MaxN];
    int sum, x, max, min;
    int i, lost, found;


    for (i = 0; i < MaxN; i++) {
        printf("Sisesta element nr %d >> ", i);
        scanf("%d", &numbers[i]);
    }
    printf("Millist väärtust otsime?");
    scanf("%d", &lost);
    found = 0;


    for (i = 0; i < MaxN; i++)
        if (numbers[i] == lost)
            found = 1;

    if (found == 1) {
        printf("Oli olemas\n");
    }
    else {
        printf("Pole olemas\n");
    }

    found = 0;
    i = 0;

    while (!found && i < MaxN) {
        if (numbers[i] == lost) {
            found = 1;
        }
        else {
            i++;
        }
    }

    if (found) printf("Oli olemas\n");
    else printf("Pole olemas\n");

}
