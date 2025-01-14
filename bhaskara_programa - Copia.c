
#include <stdio.h>

int main() {
    float a, b, c, x1, x2;
    int resultado;

    printf("Informe os coeficientes a, b e c: ");
    scanf("%f %f %f", &a, &b, &c);

    resultado = bhaskara(a, b, c, &x1, &x2);

    if (resultado == 0) {
        printf("Não existem raízes reais.\n");
    } else if (resultado == 1) {
        printf("Foi encontrada uma raiz: %.2f\n", x1);
    } else {
        printf("Foram encontradas duas raízes: %.2f e %.2f\n", x1, x2);
    }

    return 0;
}
