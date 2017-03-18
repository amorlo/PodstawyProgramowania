#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>

int fm(int dzien, int miesiac) {
    int fmies;
	assert(miesiac>=1 && miesiac<=12);
    if (miesiac == 1)
    {
        fmies = dzien;
        return fmies;
    }
    if (miesiac == 2)
    {
        fmies = 31+dzien;
        return fmies;
    }
    if (miesiac == 3)
    {
        fmies = 31+28+dzien;
        return fmies;
    }
    if (miesiac == 4)
    {
        fmies = 31+28+31+dzien;
        return fmies;
    }
    if (miesiac == 5)
    {
        fmies = 31+28+31+30+dzien;
        return fmies;
    }
    if (miesiac == 6)
    {
        fmies = 31+28+31+30+31+dzien;
        return fmies;
    }
    if (miesiac == 7)
    {
        fmies = 31+28+31+30+31+30+dzien;
        return fmies;
    }
    if (miesiac == 8)
    {
        fmies = 31+28+31+30+31+30+31+dzien;
        return fmies;
    }
    if (miesiac == 9)
    {
        fmies = 31+28+31+30+31+30+31+31+dzien;
        return fmies;
    }
    if (miesiac == 10)
    {
        fmies = 31+28+31+30+31+30+31+31+30+dzien;
        return fmies;
    }
    if (miesiac == 11)
    {
        fmies = 31+28+31+30+31+30+31+31+30+31+dzien;
        return fmies;
    }
    if (miesiac == 12)
    {
        fmies = 31+28+31+30+31+30+31+31+30+31+30+dzien;
        return fmies;
    }
	return 0;
}

//----------------------------------------------
int dzien_tygodnia(int dzien, int miesiac, int rok) {

    int dzienTyg;
    rok = 2017;
if (miesiac <= 13 && miesiac > 0 && dzien <= 31 && dzien > 0) {
    printf("\nDzieñ %d-%d-%d", rok, miesiac, dzien);

    dzienTyg = fm(dzien, miesiac);

    //reszta z dzielania przez 7
    dzienTyg = dzienTyg % 7;

    switch (dzienTyg) {
        case 0:
            printf(" to sobota");
            break;
        case 1:
            printf(" to niedziela");
            break;
        case 2:
            printf(" to poniedzia³ek");
            break;
        case 3:
            printf(" to wtorek");
            break;
        case 4:
            printf(" to œroda");
            break;
        case 5:
            printf(" to czwartek");
            break;
        case 6:
            printf(" to pi¹tek");
            break;
        default:
            printf("B³êdne dane\n");
    }
    return 0;
}
    else
{
    printf("B³êdne dane\n");
    exit (0);
}
}
//------------------------------------------
int main() {
    int dzien, miesiac, rok;

    printf("\nPodaj miesi¹c: ");
    scanf_s("%d", &miesiac);

    printf("\nPodaj dzieñ: ");
    scanf_s("%d", &dzien);
	rok=2017;
    dzien_tygodnia(dzien, miesiac, rok);

    return 0;
}