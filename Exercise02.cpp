#include <iostream>
using namespace std;
#include "Box.h"

int main() {
  Box box1;
   
   int Height, Length, Width;
   cout << "Enter the Height of the Box : ";
   cin >> Height;
   cout << "Enter the Length of the Box : ";
   cin >> Length;
   cout << "Enter the Width of the Box : ";
   cin >> Width;


  box1.setLength(Length);
  box1.setWidth(Width);
  box1.setHeight(Height);

 
  
}

