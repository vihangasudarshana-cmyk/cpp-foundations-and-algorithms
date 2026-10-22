#include <iostream>

    bool isDivisibleBy7 (int num){
        return (num % 7 == 0);
    }

    bool anyDivisibleBy7 (int arr[], int size){
        for(int i =0; i < size; ++i){
            if(arr[i] % 7 ==0){
                return true;
            }
        }
        return false;
    }

    bool anyDivisibleBetweenArrays (int arr1[],int arr2[],int size){
        for(int i =0; i < size; ++i){
            for(int j = 0; j < size; ++j){
                if (arr2[j] != 0 && arr1[i] % arr2[j] == 0){
                    return true;
                }

            }
        }
        return false;
    }

    int main(){
        int x = 20;
        std::cout<< "Task 1: Is 21 divisible by 7? " << (isDivisibleBy7(x) ? "Yes" : "No") <<"\n";

        int arr1[5] = {3, 5, 14, 9, 4};
        std::cout << "Task 2: Any divisible by 7? " << (anyDivisibleBy7(arr1, 5) ? "Yes" : "No") << "\n";

        int arr2[4] ={3, 6, 3, 8};
        int arr3[4] = {9, 10, 5, 7};
        std::cout << "Task 3: Any divisible pair? " << (anyDivisibleBetweenArrays(arr2, arr3, 4) ? "Yes" : "No") << "\n";

        return 0;

    }