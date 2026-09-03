#include <iostream>

void calculaMedia(double n1, double n2, double n3, char tipo, double &media) {
    if (tipo == 'A') {
        media = (n1 + n2 + n3) / 3.0;
    } else if (tipo == 'P') {
        media = (n1 * 5 + n2 * 3 + n3 * 2) / 10.0;
    } else if (tipo == 'H') {
        media = 3.0 / ((1.0 / n1) + (1.0 / n2) + (1.0 / n3));
    }
}
