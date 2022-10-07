#include<bits/stdc++.h>

using namespace std;

class shape{
    private:
    double height;
    double width;
    public:
        shape(double sh, double wi){
            height = sh;
            width = wi;
        }

        double area_triangle()
        {
            return .5*height*width;
        }
        double area_rectangle()
        {
            return height*width;
        }

};

int main()
{
    shape rectangle(4.2, 5.5), triangle(4.4, 2.5);

    cout<<"Area of rectangle is: "<<rectangle.area_rectangle()<<endl;
    cout<<"Area of triangle is: "<<triangle.area_triangle()<<endl;

    return 0;
}




