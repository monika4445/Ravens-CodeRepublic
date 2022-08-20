#include <iostream>


void toHex (int &num1);

int main() {
    int num1;
    std::cout<< "Enter a number " <<std::endl;
    std::cin>> num1;
    toHex(num1);
}

void toHex (int &num1){
    char arr[10];
    int i = 0;
    
    while(num1){
        if((num1 % 16) > 9)
        arr[i] = (97 + ((num1 % 16) - 10));
        else 
        arr[i] = (48 + (num1 % 16));
        i++;
        num1 /= 16;
    }
    
    for(int j = i -1; j>= 0; --j){
        std::cout<< arr[j];
    }
            std::cout << std::endl;
}
