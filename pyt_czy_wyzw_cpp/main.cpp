/**
 * @file main.cpp
 *
 * @brief Plik �r�d�owy g��wnego programu.
 */

#include "Quest.h"
#include "Quest.cpp"

/**
 * G��wna funkcja programu.
 *
 * Tworzy obiekt klasy `Quest`, wywo�uje funkcje `Console()`, `Welcome()`, i `Menu()`, a nast�pnie zwraca 0.
 *
 * @return 0 po zako�czeniu programu.
 */
int main() {
    Quest q;
    q.Console();
    q.Welcome();
    q.Menu();

    return 0;
}
