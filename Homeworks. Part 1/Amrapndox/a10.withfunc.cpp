#include <iostream>  
#include <cstring>

 double inKilometer(double d);

int main (){
  double distance;
   std::cout<<"Enter a distance in meters: " <<std::endl; 
   std::cin>> distance;
  
   std::cout<<"The entered distance in kilometers: "<< inKilometer(distance) << " km." <<std::endl;
    return 0;
}    

 double inKilometer(double d){
      d /= 1000;
      return d;
     
 }
