#ifndef QUEST_H
#define QUEST_H

#include <vector>
#include <string>

# Klasa reprezentująca prostą grę typu "Prawda czy Wyzwanie".
class Quest {
private:
    static int choice;                   // Statyczne pole klasy reprezentujące wybór gracza. 
    int random;                          // Pole przechowujące losową liczbę. 
    std::vector<std::string> question;   // Wektor przechowujący pytania. 
    std::vector<std::string> task;       // Wektor przechowujący wyzwania. 
    std::string line;                    // Pole przechowujące odczytane linie z plików. 

public:
    static void Console();   // Funkcja ustawiająca konsolę na obsługę znaków UTF-8. */
    static void Welcome();   // Funkcja wyświetlająca powitanie i menu gry. */
    void Random();           // Funkcja generująca losową liczbę do późniejszego wykorzystania. */
    void Menu();             // Główna pętla gry obsługująca wybory gracza. */
    void Task();             // Funkcja obsługująca wybór "Wyzwanie" przez gracza. */
    void Question();         // Funkcja obsługująca wybór "Prawda" przez gracza. */
    void Bad_End();          // Funkcja obsługująca sytuację, gdy gracz dokona złego wyboru. */
    static int Exit();       // Funkcja wyświetlająca komunikat kończący grę. */
};

#endif // QUEST_H
