#include <iostream>
#include <string>
#include <windows.h>

using namespace std;

int score = 0;

void clearScreen() {
    system("cls");
}

void waitForThreeSeconds() {
    Sleep(3000);
}

void askQuestion(const string& question, const string& options, const string& correctAnswer) {
    string answer;

    cout << question << endl;
    cout << options << endl;
    cout << "Twoja odpowiedz: ";
    cin >> answer;

    clearScreen();
    cout << "3";
    waitForThreeSeconds();
    clearScreen();
    cout << "3..2";
    waitForThreeSeconds();
    clearScreen();
    cout << "3..2..1..";
    waitForThreeSeconds();
    clearScreen();

    if (answer == correctAnswer) {
        cout << "Poprawna odpowiedz!" << endl;
        score++;
    }
    else {
        cout << "Zle! Poprawna odpowiedz to " << correctAnswer << endl;
    }

    waitForThreeSeconds();
    clearScreen();
}

int main() {
    string playerName;
    cout << "Podaj imie: ";
    cin >> playerName;

    clearScreen();

    cout << playerName << " witaj w tescie z CS:GO";
    waitForThreeSeconds();
    clearScreen();

    string questions[] = {
        "Jakie jest pelne rozwiniecie skrotu CS:GO?",
        "Ile jest rang w CS:GO?",
        "Co oznacza S w broni USP-S?",
        "Czy istnieje cos takiego jak decoy?",
        "W jaki sposob mozna zdobyc staty na minusie?"
    };

    string options[] = {
        "a) Counter-Side: Global Offensive\nb) Counter-Strike: Global Offensive\nc) Counter-Strike: Golden Offensive",
        "a) 15\nb) 18\nc) 16",
        "a) Tlumik\nb) Secondshot\nc) Serie",
        "a) Tak\nb) Nie\nc) Nie wiem",
        "a) Zabijajac kolege z druzyny lub zbijajac sie\nb) Wyrzucajac bron\nc) Nie da sie"
    };

    string correctAnswers[] = { "b", "b", "a", "a", "a" };

    for (int i = 0; i < 5; i++) {
        askQuestion(questions[i], options[i], correctAnswers[i]);
    }

    cout << "Wynik koncowy: " << score << "/5 punktow" << endl;

    return 0;
}
