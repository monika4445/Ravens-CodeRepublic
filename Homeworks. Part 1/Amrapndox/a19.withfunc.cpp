#include <iostream>

void reversed(int arr[], int size);

int main()
{
    int arr[3];
    for ( int i = 0 ; i < 3 ; i++ )
    std::cin>> arr[i];
    
   reversed(arr, 3);

return 0;
}

void reversed(int arr[], int size){
    
    std::cout<< "Array elements in reverse order:  "  <<std::endl;
    std::cout<<  arr[2] << arr[1] << arr[0] <<std::endl;
    
    
}
