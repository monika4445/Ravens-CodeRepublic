#include <iostream>

void productArr(int arr1[], int arr2[], int size1, int size2 );

int main() {
   const int size1 = 10;
   const int size2 = 13;
   int arr1[size1];
   int arr2[size2];
   int mul = 1;
   
  productArr(arr1, arr2, size1, size2);

   return 0;
}

void productArr(int arr1[], int arr2[], int size1, int size2){
    int mul = 1;
     std::cout<< "Enter first arrays' elements: " <<std::endl;
   for(int i = 0; i < 10; i++){
   std::cin>> arr1[i];
    mul *= arr1[i];
   }
   
   std::cout<< "Enter second arrays' elements: " <<std::endl;
   for(int i = 0; i < 13; i++){
   std::cin>> arr2[i];
   mul *= arr2[i];}

   std::cout<< "Sum of product of two array = " << mul <<std::endl;
    
    
}
