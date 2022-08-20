#include <iostream>  

void sumSecondPrincip(int matr[][4], int n);

int main() {
   int n = 4;
   int matr[4][4] = { {7, 8, 3, 5 },
                      {3, 4, 7, 6 },
                      {8, 5, 6, 4 },
                      {1, 3, 8, 9 } };
                
 sumSecondPrincip(matr, n);
    return 0;
}

void sumSecondPrincip(int matr[][4], int n){
   int sum = 0;
    std::cout << "Principal Diagonal: ";             
  for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
            if (i == j){
                 std::cout << matr[i][j] << ", ";
                 sum += matr[i][j];
        }
      }
    }
     std::cout <<  std::endl;
  std::cout << "Secondary Diagonal: ";   
  for(int i = 0; i < 4; i++){
      for(int j = 0; j < 4; j++){
                 
   if ((i + j) == (n - 1)){
                 std::cout << matr[i][j] << ", ";
                 sum += matr[i][j];
   } 
        }
    }
     std::cout <<  std::endl;
     std::cout << "Sum of elements principal diagonal and secondary diagonal is " << sum  <<std::endl;
}
