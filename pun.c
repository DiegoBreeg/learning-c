#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_ENTITIES 5

int pos_x[MAX_ENTITIES];
int pos_y[MAX_ENTITIES];
char glyph[MAX_ENTITIES];

// \n
// p.61 (p.133)

void render()
{

    for (int x = 0; x < 10; x++)
    {
        for (int y = 0; y < 10; y++)
        {
            char render = '.';

            for(int e = 0; e < MAX_ENTITIES; e++)
            {
                if(pos_x[e] == x && pos_y[e] == y) render = glyph[e];
            }

            printf("%c ", render);

        }
        printf("\n");
        printf("\n");
    }

    return;
}

int main(void)
{
    pos_x[0] = 5;
    pos_y[0] = 3;
    glyph[0] = '@';

    render();

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