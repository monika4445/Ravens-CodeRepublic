#include <iostream>

void calculator(int &num1, int &num2, int &select);

int main() {
    
int n1, n2, selection;
 std::cout<< "Enter two numbers" <<std::endl;
 std::cin>> n1 >> n2;
 std::cout<< "Select arithmetic operation" <<std::endl<<
    "1. Addition"<<std::endl<<
    "2. Subtraction"<<std::endl<<
    "3. Multiplication"<<std::endl<<
    "4. Division"<<std::endl;
 std::cin>> selection;
 
 calculator(n1, n2, selection);

return 0;
}

void calculator(int &num1, int &num2, int &select){

    switch (select)
{
 case 1:
 std::cout<< "The result of addition is " << num1 + num2 <<std::endl;
 break;
 case 2:
 std::cout<< "The result of subtraction is " << num1 - num2 <<std::endl;
 break;
 case 3:
 std::cout<< "The result of multipilication is " << num1 * num2 <<std::endl;
 break;
 case 4:
 std::cout<< "The result of division is " << (float)num1 / num2 <<std::endl;
 break;
 default:
    std::cout<< "Error! No such Menu item! " <<std::endl;
    break;
}
   
}

