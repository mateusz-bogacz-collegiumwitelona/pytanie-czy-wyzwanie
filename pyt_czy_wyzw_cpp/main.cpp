/**
 * @file main.cpp
 *
 * @brief Plik Ÿród³owy g³ównego programu.
 */

#include "Quest.h"
#include "Quest.cpp"

/**
 * G³ówna funkcja programu.
 *
 * Tworzy obiekt klasy `Quest`, wywo³uje funkcje `Console()`, `Welcome()`, i `Menu()`, a nastêpnie zwraca 0.
 *
 * @return 0 po zakoñczeniu programu.
 */
int main() {
    Quest q;
    q.Console();
    q.Welcome();
    q.Menu();

    return 0;
}
