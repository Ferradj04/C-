#include <iostream>
#include <cstdlib>
#include <ctime>

int main() 
{
    // Seed the random number generator with the current time
    std::srand(std::time(0));

    // Define the size of the array
    const int arraySize = 100;

    // Declare an array to store random numbers
    int randomNumberArray[arraySize];

    // Fill the array with random numbers between 1 and 100
    for (int i = 0; i < arraySize; ++i) 
    {
        randomNumberArray[i] = std::rand() % 100 + 1;
    }

    // Print the generated array
    std::cout << "Generated Array: ";
    for (int i = 0; i < arraySize; ++i) {
        std::cout << randomNumberArray[i] << " ";
    }

    std::cout << std::endl;

    return 0;
}