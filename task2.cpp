#include <iostream>
#include <cstdlib> //C Standard Library; contains basic general-purpose utility functions. Without this, your program does not know what rand(), srand(), or RAND_MAX are.
#include <ctime>
int main() {
    srand (time(0)); //Seed Random;Use the current second as your starting point." That is why your numbers are fresh on every run

    double numbers[20];
    std::cout << "The 20 Random Numbers Generated! " << std::endl;

    for( int i =0; i < 20; ++i){
        numbers[i] = (double)rand() / RAND_MAX;
        std::cout << "numbers [" << i << "] = " << numbers[i] << std::endl;
    }

    int countLessThan = 0;
    for(int i = 0; i < 20; ++i){
        if(numbers[i] < 0.5){
            countLessThan++;
        }
    }

    int countGreaterOrEqual = 20 - countLessThan;
    
    std::cout << "\nItems less than 0.5: " << countLessThan << std::endl;
    std::cout << "Items greater than or equal to 0.5: " << countGreaterOrEqual << std::endl;

    return 0;

}