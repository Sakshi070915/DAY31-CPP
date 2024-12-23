//Write a program that defines a class Rectangle with the following
#include <iostream>
using namespace std;

class Rectangle {
private:
    int length;
    int width;

public:
   
    Rectangle() {
        length = 1;
        width = 1;
    }

    
    int area() {
        return length * width;
    }

    
    void setDimensions(int l, int w) { 
        length = l;
        width = w;
    }
};

int main() {
    Rectangle obj; 
    cout << "Area of the rectangle: " << obj.area() << endl;

    obj.setDimensions(10, 20);
    cout << "New area of the rectangle: " << obj.area() << endl;

    return 0;
}
