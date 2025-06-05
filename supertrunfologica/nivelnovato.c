#include <stdio.h>

int main(){
    // Dados das cartas
    // Carta 1
    char nomeCarta1[] = "uruguai";
    long long populacaoCarta1 =  300000000; // Exemplo de população

    // Carta 2
    char nomeCarta2[] = "frança";
    long long populacaoCarta2 = 49000000; // Exemplo de população

    // Comparação usando if e else
    printf("Comparando a população das cartas:\n");
    printf("%s: %lld\n", nomeCarta1, populacaoCarta1);
    printf("%s: %lld\n\n", nomeCarta2, populacaoCarta2);

    if (populacaoCarta1 > populacaoCarta2) {
        printf("A carta vencedora é: %s\n", nomeCarta1);
        printf("Razão: maior população\n");
        printf("População de %s: %lld\n", nomeCarta1, populacaoCarta1);
        printf("População de %s: %lld\n", nomeCarta2, populacaoCarta2);
        } else if (populacaoCarta2 > populacaoCarta1) {
        printf("A carta vencedora é: %s\n", nomeCarta2);
        printf("Razão: maior população\n");
        printf("População de %s: %lld\n", nomeCarta2, populacaoCarta2);
        printf("População de %s: %lld\n", nomeCarta1, populacaoCarta1);} else {
        printf("As duas cartas têm a mesma população.\n");
        printf("%s: %lld\n", nomeCarta1, populacaoCarta1);
        printf("%s: %lld\n", nomeCarta2, populacaoCarta2);
    }

    return 0;
}
