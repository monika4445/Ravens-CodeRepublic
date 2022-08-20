#include<iostream>
using namespace std;

void paintHouse();

int main()
{
    paintHouse();
    return 0;
}

void paintHouse(){

 int z = 1;

  for (int i = 0; i < 7; i++)
  {
    for (int j = 7; j > i; j--)
    {
      std::cout<< " " ; // displaying space here
    }
    std::cout<< "*" ;   // displaying asterisk here

    if (i != 0)
    {
      for (int k = 1; k <= z; k++)
      {
        std::cout<< " ";
      }
      std::cout<< "*";
      z += 2;
    }
    std::cout<<std::endl;  // endl is for new line
  }

  for (int i = 0; i <= z+1; i++)
  {
    std::cout<< "*";
  }
  std::cout<<std::endl; 

for(int b=1;b<=7;b++)
    {
    for(int c=1;c<=1;c++)
        {
                cout<<"*";
        }
        for(int d=1;d<=13;d++)
              {
                cout<<" ";
              }
                cout<<"*"<<endl;
       }
for(int e = 1; e <= 15;e++)
 {
 cout<<"*";
 }
}
