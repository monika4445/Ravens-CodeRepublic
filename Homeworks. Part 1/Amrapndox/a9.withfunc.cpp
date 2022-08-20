#include <iostream>  
#include <cstring>

void SecUpper(char s[], int size);

int main (){
  char s[30];
   std::cout<<"Enter a string in lowercase: " <<std::endl; 
   std::cin.getline(s, 30);
   SecUpper(s, 30);
    return 0;
}    

void SecUpper(char s[], int size){
    for(int i = 1; i <= strlen(s); i += 2 ) { 
      if(s[i] >= 97 && s[i] <= 122)
      {
		s[i] = s[i] - 32;
      }
   }
   std::cout<<"The entered string in uppercase: "<< s <<std::endl;
}
