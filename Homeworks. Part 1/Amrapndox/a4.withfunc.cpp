#include <iostream>       

void mulOfDigits(int &n);

int main() {
  int n; 
	std::cout<<"Enter any positive integer: "; 
	std::cin>> n; 
    mulOfDigits(n);
  return 0;
}

void mulOfDigits(int &n){
     int temp, mul = 1; 
	 temp = n; 
	while(temp != 0) { 
		mul = mul* (temp % 10); 
		temp /= 10; 
	} 
	std::cout<<"Mul of digits = "<<mul; 
    
}
