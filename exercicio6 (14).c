#include <stdio.h>
//JENNIFER
void linha2(char caractere) {
    for (int i = 0; i < 25; i++) {
        printf("%c", caractere);
    }
    printf("\n"); 
}

int main() {
    linha2('#'); 
    return 0;
}
