#include <iostream> //My own created strcpy() function in C++

 int my_strcpy( char* c1, char* c2) {
    unsigned int count = 0;
    
    while(*c2 != '\0'){
        *c1 = *c2;
        c1++;
        c2++;
    }
    *c1 = '\0';
    return 0;
}

int main() {
    char arr1[10]; 
    char arr2[] = "in C++"; 
   std::cout<<" Contents of string before copy\n";
   std::cout<<" first string : "<< arr1 <<std::endl;
   std::cout<<" second string : "<< arr2 <<std::endl;
   my_strcpy(arr1, arr2);
   std::cout<<" contents of string after copy\n";
   std::cout<<" first string : " << arr1 <<std::endl;
   std::cout<<" second string : "<< arr2 <<std::endl;
   std::cout << std::endl;
   
    char source[] = "Program";
    char destination[25];
 
    my_strcpy(destination, source);
    std::cout<< " destination: " << destination << std::endl << " source: " << source;
    
    
}