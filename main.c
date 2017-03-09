#include <stdio.h>
#include <stdlib.h>
#include "cs50.h"

/*Vamos escrever um programa que leia um numero inteiro positivo n e
calcule o valor do seu fatorial.
A ideia e criarmos uma variavel fatorial que na i -esima iterac~ao do
laco vale i !
Note que (i + 1)! = (i + 1) * i !, portanto, na (i + 1)-esima iterac~ao
podemos fazer fatorial = (i+1) * fatorial
Note que a variavel fatorial deve ser inicializada com o valor um
(elemento neutro da multiplicac~ao).*/
int main()
{
    double fatorial = 1,n, i;
    printf("Digite um numero\n");
    n = GetInt();

        for(i = 1; i <= n; i++)
        {
            fatorial = fatorial* i;
        }
    printf("fatorial = %.0f\n", fatorial);

    return 0;
}
