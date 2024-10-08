#include "Quest.h"
#include <iostream>
#include <windows.h>
#include <string>
#include <vector>
#include <ctime>
#include <fstream>

//Statyczne pole klasy `Quest` reprezentuj¹ce wybór gracza.
int Quest::choice = 0;

//Funkcja ustawiaj¹ca konsolê na obs³ugê znaków UTF-8.
void Quest::Console() {
    std::fflush(stdin);
    std::fflush(stdout);
    SetConsoleOutputCP(CP_UTF8);
}

//Funkcja wyœwietlaj¹ca powitanie i menu gry.
void Quest::Welcome() {
    system("cls");

    std::cout << "Witaj w tej prostej grze. :)" << std::endl;
    std::cout << "Gra jest doœæ prosta. Wybierasz czy chcesz prawdê czy wyzwanie." << std::endl;
    std::cout << "1. Prawda\n2. Wyzwanie\n3. Wyjœcie\n";
    std::cout << "Twój wybór to: ";
    std::cin >> choice;
}

//Funkcja generuj¹ca losow¹ liczbê do póŸniejszego wykorzystania.
void Quest::Random() {
    std::srand(std::time(NULL));
    random = std::rand() % 20 + 1;
}

//G³ówna pêtla gry obs³uguj¹ca wybory gracza.
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

//Funkcja obs³uguj¹ca wybór "Prawda" przez gracza.
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

//Funkcja obs³uguj¹ca wybór "Wyzwanie" przez gracza.
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

//Funkcja obs³uguj¹ca sytuacjê, gdy gracz dokona z³ego wyboru.
void Quest::Bad_End() {
    std::system("cls");
    std::cout << "Dokona³eœ z³ego wyboru" << std::endl;
    std::system("pause");
    Welcome();
}

/*
    Funkcja wyœwietlaj¹ca komunikat koñcz¹cy grê.
    return Zawsze zwraca 0.
*/
int Quest::Exit() {
    std::system("cls");
    std::cout << "Zapraszamy ponownie " << std::endl;
    std::system("pause");
    return 0;
}
