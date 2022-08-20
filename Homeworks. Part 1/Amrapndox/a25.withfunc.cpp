#include <iostream>  

void interchange(int matr[][4], int n);

int main() {
  
 
 
  int n = 4;
  
  int matr[4][4] = { {7, 8, 3, 5 },
                     {3, 4, 7, 6 },
                     {8, 5, 6, 4 },
                     {1, 3, 8, 9 } };
                     
  
     interchange(matr, n);
     return 0;
}

void interchange(int matr[][4], int n){
    int m = 4;
    int temp;
    std::cout<< "Matrix BEFORE swapping Diagonals "  <<std::endl;
     for(int i = 0; i < m; i++){
          for(int j = 0; j < n; j++)
          std::cout<< matr[i][j] << "  ";
          std::cout << std::endl; 
     }

    for(int i = 0; i < n; i++){
     temp =  matr[i][i];
     matr[i][i] = matr[i][n-i-1]; 
     matr[i][n-i-1] = temp;    
     }
 std::cout << std::endl; 
 std::cout<< "Matrix AFTER swapping Diagonals "  <<std::endl;
      for(int i = 0; i < m; i++){
          for(int j = 0; j < n; j++)
          std::cout<< matr[i][j] << "  ";
          std::cout << std::endl; 
     }
    
}



