#include <iostream>
using namespace std;

void printTriangle(int &lines);

int main() {

int n;
cout<< "How many lines? \n" << endl;
cin >> n;
printTriangle(n);

return 0;
}

void printTriangle(int &lines){
    int e = 1;
    for(int i = 1; i <= lines; i++) {
    for(int j = (lines-1); j >= i; j--) {
    cout<< " ";
}
    for(int c = 0; c < e; c++) {
    cout<< "*";
    }
    cout<< endl;
    e = e + 2;
}
}
