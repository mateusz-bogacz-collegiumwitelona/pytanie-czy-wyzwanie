/**
 * @file Quest.h
 *
 * @brief Plik nag��wkowy klasy Quest.
 */

#ifndef QUEST_H
#define QUEST_H

#include <vector>
#include <string>

/**
 * Klasa reprezentuj�ca prost� gr� typu "Prawda czy Wyzwanie".
 */
class Quest {
private:
    static int choice;                   /**< Statyczne pole klasy reprezentuj�ce wyb�r gracza. */
    int random;                           /**< Pole przechowuj�ce losow� liczb�. */
    std::vector<std::string> question;   /**< Wektor przechowuj�cy pytania. */
    std::vector<std::string> task;       /**< Wektor przechowuj�cy wyzwania. */
    std::string line;                    /**< Pole przechowuj�ce odczytane linie z plik�w. */

public:
    static void Console();   /**< Funkcja ustawiaj�ca konsol� na obs�ug� znak�w UTF-8. */
    static void Welcome();   /**< Funkcja wy�wietlaj�ca powitanie i menu gry. */
    void Random();           /**< Funkcja generuj�ca losow� liczb� do p�niejszego wykorzystania. */
    void Menu();             /**< G��wna p�tla gry obs�uguj�ca wybory gracza. */
    void Task();             /**< Funkcja obs�uguj�ca wyb�r "Wyzwanie" przez gracza. */
    void Question();         /**< Funkcja obs�uguj�ca wyb�r "Prawda" przez gracza. */
    void Bad_End();          /**< Funkcja obs�uguj�ca sytuacj�, gdy gracz dokona z�ego wyboru. */
    static int Exit();       /**< Funkcja wy�wietlaj�ca komunikat ko�cz�cy gr�. */
};

#endif // QUEST_H
