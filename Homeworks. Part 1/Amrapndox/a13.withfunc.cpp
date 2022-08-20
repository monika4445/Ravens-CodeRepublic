#include <iostream>
#include <climits>
using namespace std;

void MinMaxDigit(int &num1, int &num2);

int main() {
    int n;
    cout<<"Enter the number(for giving the larger digit) : "<<endl;
	cin>> n;

	int n1;
    cout<<"Enter the number(for giving the smaller digit) : "<<endl;
	cin>> n1;
	
    MinMaxDigit(n,n1);
	return 0;
}

void MinMaxDigit(int &num1, int &num2){
    
    int max = 0, temp; 
	while(num1 != 0)
	{
		temp = num1 % 10;
		if(temp > max)
		max = temp;
		num1 = num1/10;
	}
    
    int min = 9, small; 
	while(num2 != 0)
	{
		small = num2 % 10;
		if(small < min)
		min = small;
		num2 = num2/10;
	}

	std::cout <<"The large digit in your first number is " << max <<std::endl;
	std::cout <<"The smaller digit in your second number is " << min <<std::endl;
    
    
}
