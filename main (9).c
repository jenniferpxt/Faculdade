#include <stdio.h>

typedef struct {
    double real;
    double imag;
} complex;

// Função a) Cria e retorna um número complexo
complex criarComplexo(double real, double imag) {
    complex num;
    num.real = real;
    num.imag = imag;
    return num;
}

// Função b) Imprime a representação do número complexo
void imprimirComplexo(complex c) {
    if (c.imag == 0) {
        printf("%.2lf\n", c.real);
    } else if (c.real == 0) {
        printf("%.2lfi\n", c.imag);
    } else {
        printf("%.2lf + %.2lfi\n", c.real, c.imag);
    }
}

// Função c) Soma de dois números complexos
complex somarComplexos(complex x, complex y) {
    complex resultado;
    resultado.real = x.real + y.real;
    resultado.imag = x.imag + y.imag;
    return resultado;
}

// Função d) Diferença de dois números complexos
complex subtrairComplexos(complex x, complex y) {
    complex resultado;
    resultado.real = x.real - y.real;
    resultado.imag = x.imag - y.imag;
    return resultado;
}

// Função e) Produto de dois números complexos
complex multiplicarComplexos(complex x, complex y) {
    complex resultado;
    resultado.real = x.real * y.real - x.imag * y.imag;
    resultado.imag = x.real * y.imag + x.imag * y.real;
    return resultado;
}

// Função f) Divisão de dois números complexos
complex dividirComplexos(complex x, complex y) {
    complex resultado;
    double denominador = y.real * y.real + y.imag * y.imag;
    if (denominador == 0) {
        printf("Erro: Divisão por zero!\n");
        resultado.real = 0;
        resultado.imag = 0;
        return resultado;
    }
    resultado.real = (x.real * y.real + x.imag * y.imag) / denominador;
    resultado.imag = (x.imag * y.real - x.real * y.imag) / denominador;
    return resultado;
}

// Funções g) e h) com um número real e um número complexo

// g) X + A
complex somarComplexoComReal(complex x, double a) {
    complex resultado;
    resultado.real = x.real + a;
    resultado.imag = x.imag;
    return resultado;
}

// g) X - A
complex subtrairComplexoComReal(complex x, double a) {
    complex resultado;
    resultado.real = x.real - a;
    resultado.imag = x.imag;
    return resultado;
}

// g) X * A
complex multiplicarComplexoComReal(complex x, double a) {
    complex resultado;
    resultado.real = x.real * a;
    resultado.imag = x.imag * a;
    return resultado;
}

// g) X / A
complex dividirComplexoComReal(complex x, double a) {
    complex resultado;
    if (a == 0) {
        printf("Erro: Divisão por zero!\n");
        resultado.real = 0;
        resultado.imag = 0;
    } else {
        resultado.real = x.real / a;
        resultado.imag = x.imag / a;
    }
    return resultado;
}

// h) A + X
complex somarRealComComplexo(double a, complex x) {
    return somarComplexoComReal(x, a);
}

// h) A - X
complex subtrairRealComComplexo(double a, complex x) {
    return subtrairComplexoComReal(x, a);
}

// h) A * X
complex multiplicarRealComComplexo(double a, complex x) {
    complex resultado;
    resultado.real = a * x.real;
    resultado.imag = a * x.imag;
    return resultado;
}

// h) A / X
complex dividirRealComComplexo(double a, complex x) {
    complex resultado;
    double denominador = x.real * x.real + x.imag * x.imag;
    if (denominador == 0) {
        printf("Erro: Divisão por zero!\n");
        resultado.real = 0;
        resultado.imag = 0;
    } else {
        resultado.real = (a * x.real) / denominador;
        resultado.imag = (-a * x.imag) / denominador;
    }
    return resultado;
}

int main() {
    double realX, imagX, realY, imagY, A;
    
    // Lendo as partes reais e imaginárias dos números complexos X e Y
    printf("Digite a parte real de
