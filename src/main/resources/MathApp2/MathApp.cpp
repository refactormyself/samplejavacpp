#include <iostream>
#include "MathApp.h"
#include "Math.h"

using namespace std;


Rectangle::Rectangle (int a, int b) {
  width = a;
  height = b;
}

void Rectangle::set_values (int x, int y) {
  width = x;
  height = y;
}

int Rectangle::area () {
  return width*height;
}


int main(){
    int a = 19, b = 23;
    cout<<"\n\n"<< "Calling C++ functions " << '\n';
    cout<< a << " + " << b << " = " << add(a,b) <<"\n"; 
    cout<< a << " - " << b << " = " << subtract(a,b) <<"\n"; 
    cout<< a << " * " << b << " = " << multiply(a,b) <<"\n";

    cout<<"\n\n";
    cout<<"Using Math.h :- \n"<< a << " + " << b << " = " << math.add(a,b) <<"\n"; 
    cout<< a << " - " << b << " = " << math.multiply(a,b) <<"\n"; 

    Rectangle rect1;
    rect1.set_values (3,4);
    cout << "\nCalculating area of rectangle :- \n";
    cout << "3 X 4 area is " << rect1.area();
    
    Rectangle rect2 = {5,6};
    cout << "5 X 6 area is " << rect2.area();
    
    return 0;
}