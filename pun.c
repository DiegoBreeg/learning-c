#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// \n
// p.61 (p.133)

int main(void)
{
    int prompt;

    for (;;)
    {
        printf("Selecione um comando");
        scanf("%d", &prompt);
    }

    return 0;
}

/*
    uma célula de memória pode armazena um número de 0 a 255.
    Isso quer dizer que, dependendo do número armazenado,
    O computador sabe qual caractere está sendo representado.
    Tudo que é armazenado em cada célula, é um número de 0 a 255?

    ao utilizar a expressão char *p = 1000; estou pegando a posição 1000 da memória?

    é possível utilizar a ideia de arrays paralelos para melhorar performance de
    consultas em banco de dados?
 */