#include <iostream>
char *my_strcat(char *strg1, char *strg2)
{
    char *start = strg1;

    while(*strg1 != '\0')
    {
        strg1++;
    }

    while(*strg2 != '\0')
    {
        *strg1 = *strg2;
        strg1++;
        strg2++;
    }

    *strg1 = '\0';
    return start;
}
int main() {
    char arr1[] = "Functions ";
    char arr2[] = "in C++."; 
    my_strcat(arr1, arr2);
     std::cout << arr1 << std::endl;

}


