//
//  main.cpp
//  OOP C++
//
//  Created by Bao Bao on 15/02/2023.
//

#include <iostream>
using namespace std;
class Rectangle{
public:
    int length;
    int breadth;
    int area(){
        return length*breadth;
    }
    int perimeter(){
        return 2*(length+breadth);
    }
};
int main(int argc, const char * argv[]) {
    cout<<"Sử dụng theo cách bình thường"<<endl;
    Rectangle r1,r2;
    r1.length=10;
    r1.breadth=15;
    cout<<r1.area()<<endl;
    r2.length=10;
    r2.breadth=15;
    cout<<r2.perimeter()<<endl;
    cout<<"Sử dụng theo pointer"<<endl;
    cout<<"Cách 1 :sử dụng tham chiếu : Result ";
    Rectangle x;
    Rectangle *p;
    p=&x;
    x.length=10;
    p->length=10;
    p->breadth=15;
    cout<<p->area()<<endl;
    cout<<"Cách 2 :sử dụng method new : Result ";
    Rectangle *p1;
    p1= new Rectangle;
    Rectangle*q= new Rectangle();
    p1->length=10;
    p1->breadth=15;
    cout<<p1->area()<<endl;
    return 0;
}
