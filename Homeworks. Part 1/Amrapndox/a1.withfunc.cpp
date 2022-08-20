#include <iostream>

void printNum(int &num);

int main() {
    
    int num;
    std::cin>> num;
    printNum(num);
    return 0;
    
}

void printNum(int &num){
     int tmp = num;
     int dec = 1;
     
    while(tmp > 9){
        tmp /= 10;
        dec *= 10;
        
    }
    while(num){
        std::cout<< num / dec << "   " ;
        num = num % dec;
        dec /= 10;
    }
}

