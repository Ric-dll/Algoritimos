#include <stdio.h>

int main(void) {
    int n, fat = 1;

    printf("Digite um valor para n: ");
    scanf("%i", &n);

    if (n >= 0) {
        printf("%i! --> ", n);

        while (n >= 1) {
            printf("%i", n);

            if (n > 1) {
                printf(" * ");
            }

            fat *= n;
            n--;
        }

        printf(" = %i\n", fat);
    } else {
        printf("Fatorial inválido\n");
    }

}
