#include <iostream>

char conceitoAluno(double media) {
    if (media <= 4.9) return 'D';
    if (media <= 6.9) return 'C';
    if (media <= 8.9) return 'B';
    return 'A';
}
