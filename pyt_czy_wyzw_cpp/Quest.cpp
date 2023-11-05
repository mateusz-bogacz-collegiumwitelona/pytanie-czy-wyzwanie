/**
 * @file Quest.cpp
 *
 * @brief Plik �r�d�owy klasy Quest.
 */

#include "Quest.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <ctime>
#include <fstream>

/**
 * Statyczne pole klasy `Quest` reprezentuj�ce wyb�r gracza.
 */
int Quest::choice = 0;

/**
 * Funkcja ustawiaj�ca konsol� na obs�ug� znak�w UTF-8.
 */
void Quest::Console() {
    std::fflush(stdin);
    std::fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);
}

/**
 * Funkcja wy�wietlaj�ca powitanie i menu gry.
 */
void Quest::Welcome() {
    system("cls");

    std::cout << "Witaj w tej prostej grze. :)" << std::endl;
    std::cout << "Gra jest do�� prosta. Wybierasz czy chcesz prawd� czy wyzwanie." << std::endl;
    std::cout << "1. Prawda\n2. Wyzwanie\n3. Wyj�cie\n";
    std::cout << "Tw�j wyb�r to: ";
    std::cin >> choice;
}

/**
 * Funkcja generuj�ca losow� liczb� do p�niejszego wykorzystania.
 */
void Quest::Random() {
    std::srand(std::time(NULL));
    random = std::rand() % 20 + 1;
}

/**
 * G��wna p�tla gry obs�uguj�ca wybory gracza.
 */
void Quest::Menu() {
    while (choice != 3) {
        system("cls");

        switch (choice) {
            case 1:
                Question();
                break;
            case 2:
                Task();
                break;
            default:
                Bad_End();
                break;
        }
    }

    Exit();
}

/**
 * Funkcja obs�uguj�ca wyb�r "Prawda" przez gracza.
 */
void Quest::Question() {
    system("cls");
    Random();
    choice = 0;
    std::ifstream questionFile("question.txt");
    while (std::getline(questionFile, line)) question.push_back(line);
    questionFile.close();

    std::cout << "Pytanie:\n" << question[random] << std::endl;

    std::system("pause");
    Welcome();
}

/**
 * Funkcja obs�uguj�ca wyb�r "Wyzwanie" przez gracza.
 */
void Quest::Task() {
    system("cls");
    Random();

    std::ifstream taskFile("task.txt");
    while (std::getline(taskFile, line)) task.push_back(line);
    taskFile.close();

    std::cout << "Wyzwanie:\n" << task[random] << std::endl;

    std::system("pause");
    Welcome();
}

/**
 * Funkcja obs�uguj�ca sytuacj�, gdy gracz dokona z�ego wyboru.
 */
void Quest::Bad_End() {
    std::system("cls");
    std::cout << "Dokona�e� z�ego wyboru" << std::endl;
    std::system("pause");
    Welcome();
}

/**
 * Funkcja wy�wietlaj�ca komunikat ko�cz�cy gr�.
 *
 * @return Zawsze zwraca 0.
 */
int Quest::Exit() {
    std::system("cls");
    std::cout << "Zapraszamy ponownie " << std::endl;
    std::system("pause");
    return 0;
}
