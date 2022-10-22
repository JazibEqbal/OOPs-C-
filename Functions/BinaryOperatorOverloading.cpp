#include<iostream>
using namespace std;

class complex{
private:
float real,img;
public:
   complex(float r,float i){
    real = r;
    img=i;
   }
   void display();
   friend complex operator + (complex c,complex d);
};
void complex::display(){
    cout<<"Real part: "<<real<<endl;
    cout<<"Imaginary part: "<<img<<endl;
}

complex operator +(complex c,complex d){
    d.real = d.real + c.real;
    d.img=d.img + c.img;
    return d;
}
int main(){
    complex x(4.3,4);
    complex y(6,6);
    complex z = x+y;
    z.display();
    return 0;
}