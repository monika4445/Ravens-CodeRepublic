#include <iostream>  
#include <cstring>

void strupper(char str[], int Size){
     for(int i = 0; i <= strlen(str); i++) { 
      if(str[i] >= 97 && str[i] <= 122)
      {
		str[i] = str[i] - 32;
      }
   }
   std::cout<<"The entered string in uppercase: "<< str <<std::endl;
}

int main (){
  char s[30];
   std::cout<<"Enter a string in lowercase: " <<std::endl; 
   std::cin.getline(s, 30);
   strupper(s, 30);
    return 0;
}    