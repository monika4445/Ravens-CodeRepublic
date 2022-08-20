#include <iostream>

void printReversedNum(int &n);

int main() {
int n;    
std::cout<<"Enter a number: "<<std::endl;    
std::cin>> n;    
printReversedNum(n);
  return 0;

}

void printReversedNum(int &n){
     int reverse = 0, r;   
     
    while(n!=0)    
  {    
     r = n % 10;      
     reverse = reverse * 10 + r;    
     n /= 10;    
  }    
  std::cout<< "Reversed Number: " << reverse <<std::endl;
}
