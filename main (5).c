#include <stdio.h>
#include <math.h>
int main() {
    float (float a, float b, float c, float *x1, float *x2)
    int bhaskara,resultado; 

    printf("Informe os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    delta = bhaskara(a, b, c, &x1, &x2);

    if (resultado == 0) {
        printf("Não existem raízes reais.\n");
    } else if (resultado == 1) {
        printf("Foi encontrada uma raiz: %.2f\n", x1);
    } else {
        printf("Foram encontradas duas raízes: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
