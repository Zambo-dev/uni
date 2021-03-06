#include <iostream>

int main() {

    std::cout << "+------------------+" << std::endl;
    std::cout << "| Rotation Printer |" << std::endl;
    std::cout << "+------------------+" << std::endl << std::endl;

    std::cout << "Inserisci una sequenza di caratteri terminata da 'INVIO' (max 100 caratteri)" << std::endl;
    std::cout << "Sequenza: ";

    const int MAX_LENGTH = 100;
    char sequence[MAX_LENGTH] = {};
    char letter = '\0';
    int i = 0;

    while (std::cin.peek() != '\n' && i < MAX_LENGTH) {
        std::cin.get(letter);
        sequence[i] = letter;
        i++;
    }

    //The last char of the array is a weird character so I'm just going to remove it
    sequence[i] = '\0';
    i--;

    const int ACTUAL_LENGTH = i + 1;
    std::cout << "\n\nQueste sono le possibili rotazioni degli oggetti dell'array stampate: " << std::endl;

    
    for (int rot = 0; rot < ACTUAL_LENGTH; rot++) {

        for (int i = rot; i < ACTUAL_LENGTH + rot; i++) {
            if (i < ACTUAL_LENGTH)
                std::cout.put(sequence[i]);
            else
                std::cout.put(sequence[i - ACTUAL_LENGTH]);
        }
        std::cout << std::endl;
    }

    system("pause");
    return 0;
}