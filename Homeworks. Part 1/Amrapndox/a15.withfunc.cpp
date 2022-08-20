#include <iostream>


void toBin (int &num1);

int main() {
    int num1;
    std::cout<< "Enter a number " <<std::endl;
    std::cin>> num1;
    toBin(num1);
}

void toBin (int &num1){
    int arr[32];
    int i = 0;
    
    while(num1){
        arr[i] = num1 % 2;
        num1 /= 2;
        ++i;
        }
    
    for(int j = i -1; j >= 0; --j){
        std::cout<< arr[j];
    }
            std::cout << std::endl;
}
