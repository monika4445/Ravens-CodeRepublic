#include <iostream>
#include <algorithm>

void sumOfMinMax(int arr[], int size);

int main()
{
    int arr[50], size;
    std::cout<< "Enter the number of elements in array\n" <<std::endl;
    std::cin>> size;
    
    std::cout<<"Enter array elements" <<std::endl;
    for ( int i = 0 ; i < size ; i++ )
        std::cin>> arr[i];
   sumOfMinMax(arr, size);
   
return 0;
}

void sumOfMinMax(int arr[], int size){
    int *maximum, *minimum;
    minimum = std::min_element(arr,arr + size);
    std::cout<< "Minimum element in the array is "<< *minimum <<std::endl;
   
    maximum= std::max_element(arr,arr + size);
    std::cout<<"Maximum element in the array is "<< *maximum <<std::endl;
    
    std::cout<<" The sum of Maximum and Minimum elements in the array is "<< *maximum +  *minimum <<std::endl;
    
    
}
