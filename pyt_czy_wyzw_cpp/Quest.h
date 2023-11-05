/**
 * @file Quest.h
 *
 * @brief Plik nag³ówkowy klasy Quest.
 */

#ifndef QUEST_H
#define QUEST_H

#include <vector>
#include <string>

/**
 * Klasa reprezentuj¹ca prost¹ grê typu "Prawda czy Wyzwanie".
 */
class Quest {
private:
    static int choice;                   /**< Statyczne pole klasy reprezentuj¹ce wybór gracza. */
    int random;                           /**< Pole przechowuj¹ce losow¹ liczbê. */
    std::vector<std::string> question;   /**< Wektor przechowuj¹cy pytania. */
    std::vector<std::string> task;       /**< Wektor przechowuj¹cy wyzwania. */
    std::string line;                    /**< Pole przechowuj¹ce odczytane linie z plików. */

public:
    static void Console();   /**< Funkcja ustawiaj¹ca konsolê na obs³ugê znaków UTF-8. */
    static void Welcome();   /**< Funkcja wyœwietlaj¹ca powitanie i menu gry. */
    void Random();           /**< Funkcja generuj¹ca losow¹ liczbê do póŸniejszego wykorzystania. */
    void Menu();             /**< G³ówna pêtla gry obs³uguj¹ca wybory gracza. */
    void Task();             /**< Funkcja obs³uguj¹ca wybór "Wyzwanie" przez gracza. */
    void Question();         /**< Funkcja obs³uguj¹ca wybór "Prawda" przez gracza. */
    void Bad_End();          /**< Funkcja obs³uguj¹ca sytuacjê, gdy gracz dokona z³ego wyboru. */
    static int Exit();       /**< Funkcja wyœwietlaj¹ca komunikat koñcz¹cy grê. */
};

#endif // QUEST_H
