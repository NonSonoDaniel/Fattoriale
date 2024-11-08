#include <iostream>

int main()
{
    int numero, fattoriale = 1, i;

    do {
        std::cout << "Inserisci un numero intero positivo:";
        std::cin >> numero;
    } while (numero <= 0);

    for (i = 1; i <= numero; i++) {
        fattoriale *= i ;
    }
        std::cout << fattoriale << std::endl;

        return 0;
}