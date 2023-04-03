#include <iostream>
#include <string>

using namespace std;

class Shape{
    public:
    virtual float Area() = 0;
    virtual float Perimeter() = 0;
    virtual Shape *Resize(float newsize) = 0;
}


class Square: public Shape{
    private:
    float a;
    public:
    Square (float a) {this->a = a};
    float Area() {return a*a};
    float Perimeter () {return 4.0f*a};
    Square *Resize (float newsize) {Square *Newsquare(newsize*a); return Newsquare}
}

class Triangle: public Shape{
    private:
    float a;
    float h;
    public:
    Triangle (float a, float h) {this->a = a; this->h = h};
    float Area() {return (a*h)/2.0f};
    float Perimeter () {return 3.0f*a};
    Triangle *Resize (float newsize) {Triangle *Newtriangle(newsize*a, newsize*h); return Newtriangle}
}

int main()
{
    
    
}
