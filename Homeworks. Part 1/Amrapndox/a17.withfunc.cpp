#include <iostream>
#include <climits>


void minValIndex (int arr[], int size);

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
 minValIndex(a, n);
return 0;
}


void minValIndex (int arr[], int size){
    int index = 0;
    int min = arr[0];

for(int i = 0; i < size; i++)
{
    if(arr[i] < min)
    {
         min = arr[i];
         index = i;
    }
}
      std::cout<< "Minimum value in array is " << min << std::endl << "Index of minimum value is "<< index <<std::endl;
    
}

