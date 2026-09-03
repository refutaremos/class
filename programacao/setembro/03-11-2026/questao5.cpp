#include <iostream>

void converteTempo(int totalSegundos, int &h, int &m, int &s) {
    h = totalSegundos / 3600;
    totalSegundos %= 3600;
    m = totalSegundos / 60;
    s = totalSegundos % 60;
}
