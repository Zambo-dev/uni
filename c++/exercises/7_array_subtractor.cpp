#include <iostream>

int main() {

    std::cout << "+------------------+" << std::endl;
    std::cout << "| Array Subtractor |" << std::endl;
    std::cout << "+------------------+" << std::endl << std::endl;

    //Get the first input sequence
    std::cout << "Inserisci il numero di elementi della prima sequenza: ";
    int count1;
    std::cin >> count1;

    int array1[count1];
    for (int i = 0; i < count1; i++) {
        std::cout << "Inserisci un dato numerico: ";
        std::cin >> array1[i];
    }
    
    std::cout << std::endl;

    //Get the second input sequence
    std::cout << "Inserisci il numero di elementi della seconda sequenza: ";
    int count2;
    std::cin >> count2;

    int array2[count2];
    for (int i = 0; i < count2; i++) {
        std::cout << "Inserisci un dato numerico: ";
        std::cin >> array2[i];
    }

    //Add the elements that are only present in the first array to a third array containing the result
    int result[count1] = {};
    for (int i = 0; i < count1; i++) {

        bool allDifferent = true;

        for (int j = 0; j < count2; j++) {
            allDifferent &= (array1[i] != array2[j]);
        }

        if (allDifferent) {
            result[i] = array1[i];
        }
    }

    std::cout << "La differenza insiemistica tra le 2 sequenze e': " << std::endl;

    //Loop over the result array and print it on the console
    for (int i = 0; i < count1; i++) {
        if (result[i] == 0)
            continue;

        std::cout << result[i] << ", ";
    }

    std::cout << std::endl;

    system("pause");
    return 0;
}