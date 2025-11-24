#include <stdio.h>
#include <stdlib.h>

// \n
// p.61 (p.86)

int main(void)
{
    char character = 'a';
    char *pCharacter = &character;

    printf("Character: %c\n", character);
    printf("The memory address of character is: %p\n", &character);
    printf("The address stored in p is: %p\n", pCharacter);
    printf("The value at the address stored in p is: %c\n", *pCharacter);
}

/* 
    uma célula de memória pode armazena um número de 0 a 255.
    Isso quer dizer que, dependendo do número armazenado,
    O computador sabe qual caractere está sendo representado.
    Tudo que é armazenado em cada célula, é um número de 0 a 255?

    ao utilizar a expressão char *p = 1000; estou pegando a posição 1000 da memória?
 */