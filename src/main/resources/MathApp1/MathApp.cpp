#include <iostream>

int add(int a, int b){return a+b;}
int subtract(int a, int b){return a-b;}
int multiply(int a, int b){return a*b;}

using namespace std;

int main(){
    int a = 19, b = 23;
    cout<<"\n\n";
    cout<< a<< " + " << b << " = " << add(a,b) <<"\n"; 
    cout<< a<< " - " << b << " = " << subtract(a,b) <<"\n"; 
    cout<< a<< " * " << b << " = " << multiply(a,b) <<"\n"; 
}