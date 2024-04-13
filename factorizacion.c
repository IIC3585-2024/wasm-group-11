#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// gcc factorizacion_primo.c -o factorizacion_primo
// ./factorizacion_primo

bool esPrimo(long long int n) {
    if (n <= 1) {
        return false;
    }
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return false;
        }
    }
    return true;
}

char* factorizacionPrima(const char* num) {
    // Parsea el char a un long long int
    long long int n = atoll(num);
    // long long int n = strtoll(char_num, NULL, 10);
    long long int divisor = 2;
    char* resultado = (char*)malloc(1000 * sizeof(char));

    while (n > 1) {
        if (n % divisor == 0) {
            if (esPrimo(divisor)) {
                char temp[100];
                sprintf(temp, "%lld ", divisor);
                strcat(resultado, temp);
            }
            n /= divisor;
        } else {
            divisor++;
        }
    }
  return resultado;
}
