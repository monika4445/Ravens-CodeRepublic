#include <iostream> //My own created strchr() function in C++
#include <cstring>

 const char* my_strchr(const char* string, char character) {
     int count = 0;
     int position = -1;
int size = strlen(string);
for(int i = 0; i < size; i++){
    if( character == string[i]){
     count++;
     position = i;
}
}
std::cout<< "Occurrence of the character " << character << " is " << count <<std::endl;
if (position >= 0)
        std::cout << "Index of " << character << " is " << position;
    else
    {
        std::cout << character << " not found.";
      
    }	

return NULL;
}

int main() {
   char arr1[] = "in C++"; 
   std::cout << my_strchr(arr1,'C') << std::endl;
    
}