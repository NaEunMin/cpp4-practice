/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Circle{
    int radius;
    public:
    void setRadius(int radius);
    double getArea();
};

void Circle::setRadius(int radius){
    this->radius = radius;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main()
{
    int rad;
    Circle circles[3];
    for(int i=0;i<3;i++){
        cout << "원 " << i+1 << "의 반지름 >> ";
        cin >> rad;
        circles[i].setRadius(rad);
    }
    cout << endl;
    int count=0;
    for(int i=0;i<3;i++){
        if(100<circles[i].getArea()){
           count++;
        }
    }
    cout << "면적이 100보다 큰 원은 " << count <<"개 입니다.";
    return 0;
}




