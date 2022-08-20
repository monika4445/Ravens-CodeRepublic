#include <iostream>        

void  printPrincipalDiagonal(int mat[][4], int n)
{
      std::cout << "Principal Diagonal: ";
 
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
 
            
            if (i == j)
                std::cout << mat[i][j] << ", ";
        }
    }
    std::cout << std::endl;
}

int main() {
  int n = 4;  
  int matr[4][4] = { {7, 8, 3, 5 },
                     {3, 4, 7, 6 },
                     {8, 5, 6, 4 },
                     {1, 3, 8, 9 } };
                   
 printPrincipalDiagonal(matr, n);
 
 
 
}