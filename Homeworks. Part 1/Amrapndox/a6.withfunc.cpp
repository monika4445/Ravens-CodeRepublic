#include <iostream>

std::string reversed(std::string &text);

int main() {
   std::string ch;
   std::cout<< "Print smth" <<std::endl;
   std::cin>> ch;
 
   std::cout<< reversed(ch) <<std::endl;
    return 0;
   
}

std::string reversed(std::string &text){
  
   std::string s = "";
   for(int i = text.length()-1; i >= 0; --i){
       s += text[i];
   }
    return s;
    
}
