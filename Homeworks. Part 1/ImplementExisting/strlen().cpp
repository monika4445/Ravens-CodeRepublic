#include <iostream> //My own created strlen() function in C++

unsigned int my_strlen(const char* c) {
    unsigned int count = 0;
    
    while(*c != '\0'){
        ++count;
        ++c;
    }
    return count;
}

 unsigned int my_strlen(char s[]) //Function Overloading
{
    unsigned int count;
    for (count = 0; *s != '\0'; ++count, ++s);
    return count;
}

int main() {
    char arr[] = "Thunder "; 
    std::cout<< my_strlen(arr)<<std::endl; 
    std::cout<< my_strlen(arr)<<std::endl;

}