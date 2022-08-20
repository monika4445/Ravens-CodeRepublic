#include <iostream>
#include <climits>

void maxValIndex (int arr[], int size);

int main()
{
    int n;
   int a[50];
   std::cout<< "Enter number of elements you want to enter: " <<std::endl;
   std::cin>> n;
   for(int i = 0; i < n; i++) {
      std::cout<< "Enter Element " << (i+1) << ": " <<std::endl;
      std::cin>> a[i]; 
   }
   maxValIndex(a, n);
return 0;
}

void maxValIndex (int arr[], int size){
     
     int index = 0;
     int max = arr[0];

for(int i = 0; i < size; i++)
{
    if(arr[i] > max)
    {
         max = arr[i];
         index = i;
    }
}
      std::cout<< "Maximum value in array is " << max << std::endl << "Index of maximum value is "<< index <<std::endl;
  
}
