#include <iostream>

int sumOfDigits(int &n);

int main() {
 int n; 
	std::cout<<"Enter any positive integer: "; 
	std::cin>> n; 
	std::cout<<"Sum of digits = "<< sumOfDigits(n); 
  return 0;
}

int sumOfDigits(int &n){
    
    int temp, sum = 0; 
	temp = n; 
	while(temp > 0) { 
		sum += temp % 10; 
		temp /= 10; 
	} 
    return sum;
}
