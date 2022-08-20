#include <iostream>
#include<cstring>

void withoutVowels(char a[], int n);

int main (){
    const int size = 20;
    char name[size];
    std::cout<< "Enter a name : " <<std::endl;
	std::cin>> name;
    withoutVowels(name, size);
    return 0;
}

void withoutVowels(char a[], int n){
    int i, j, len = 0;
    len = strlen(a);

	for(i = 0; i < len; i++)
	{   
		if(a[i] == 'a' || a[i] == 'e' || a[i] == 'i' || a[i] == 'o' || a[i] == 'u' || 
		   a[i] == 'A' || a[i] == 'E' || a[i] == 'I' || a[i] == 'O' || a[i] == 'U')
		{
			for(j = i; j < len; j++)
			{
				a[j] = a[j+1];
			}
		i--;
		len--;
		}
	}
	std::cout<< "After deleting the vowels, the name will be : " << a <<std::endl;
}

