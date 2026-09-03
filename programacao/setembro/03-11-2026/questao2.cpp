#include <iostream>

void calculaMedia(double n1, double n2, double n3, char tipo, double &media) {
    if (tipo == 'A' || tipo == 'a') {
        media = (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P' || tipo == 'p') {
        media = (n1 * 5 + n2 * 3 + n3 * 2) / (5 + 3 + 2);
    } else if (tipo == 'H' || tipo == 'h') {
        if (n1 != 0 && n2 != 0 && n3 != 0) {
            media = 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
        } else {
            media = 0.0;
        }
    }
}
