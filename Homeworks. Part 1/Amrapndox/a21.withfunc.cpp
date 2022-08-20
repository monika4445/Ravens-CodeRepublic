#include <iostream>

void productArr(int arr1[], int arr2[], int size1, int size2 );

int main() {
 std::cout<< "Enter first arrays' size: " <<std::endl;
   int size1;
   std::cin>>size1;
   
   std::cout<< "Enter second arrays' size: " <<std::endl;
   int size2;
   std::cin>>size2;
   
   int * arr1 = new int[size1];
   int * arr2 = new int[size2];
   
  productArr(arr1, arr2, size1, size2);

   return 0;
}

void productArr(int arr1[], int arr2[], int size1, int size2){
    

    int sum = 0;
     std::cout<< "Enter first arrays' elements: " <<std::endl;
   for(int i = 0; i < size1 ; i++){
   std::cin>> arr1[i];
    sum += arr1[i];
   }
   
   std::cout<< "Enter second arrays' elements: " <<std::endl;
   for(int i = 0; i < size2; i++){
   std::cin>> arr2[i];
   sum += arr2[i];}

std::cout<< "Sum of two array = " << sum <<std::endl;
    
}
