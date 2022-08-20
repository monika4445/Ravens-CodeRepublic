#include <iostream> //My own created strcat() function in C++
#include <cstring>

  char* my_strcat( char* string1, const char* string2) {
     //ptr points to the end of the first string
     char* ptr = string1 + strlen(string1);
     
     while(*string2 != '\0'){
     *ptr++ = *string2++;
    }
     *ptr = '\0';
   return ptr;
}

int main() {
    char arr1[] = "Functions ";
    char arr2[] = "in C++."; 
    my_strcat(arr1, arr2);
     std::cout << arr1 << std::endl;

}