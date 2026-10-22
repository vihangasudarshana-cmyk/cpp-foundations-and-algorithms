#include <iostream>            //The Alphabet, ASCII Codes, and Vowels
int main() {

    for (char c = 'A'; c <= 'Z'; ++c){
        std::cout << "Letter: " << c;

        std::cout<< " - ASCII number: "<< (int)c;

        if( c == 'A'|| c =='E' || c == 'I' || c == 'O' || c == 'U'){
            std::cout << " - VOWEL" << std::endl;
        } else {
            std::cout<< "- CONSONANT" << std::endl;f
        }
    }
    return 0;
}