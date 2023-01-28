/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Circle{
    int radius;
    string name;
    public:
    void setCircle(string name, int radius);
    double getArea();
    string getName();
};

void Circle::setCircle(string name, int radius){
    this->name = name;
    this->radius = radius;
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

string Circle::getName(){
    return name;
}

class CircleManager{
    Circle *p;
    int size;
    int radius;
    string name;
    public:
    CircleManager(int size);
    ~CircleManager();
    void searchByName();
    void searchByArea();
};

CircleManager::CircleManager(int size){
    this->size=size;
    p = new Circle[size];
    for(int i=0;i<size;i++){
        cout << "원" << i+1 <<"의 이름과 반지름 >> ";
        cin >> name >> radius;
        p[i].setCircle(name,radius);
    }
}

CircleManager::~CircleManager(){
    delete [] p;
}

void CircleManager::searchByName(){
    cout << "검색하고자 하는 원의 이름 >> ";
    cin >> name;
    for(int i=0;i<size;i++){
        if(p[i].getName()==name){
        cout << name <<"의 면적은 " << p[i].getArea() << endl;
        } 
    }
}

void CircleManager::searchByArea(){
    cout << "최소 면적을 정수로 입력하세요 >> ";
    cin >> radius;
    cout << radius <<"보다 큰 원을 검색합니다." << endl;
    for(int i=0;i<size;i++){
        if(p[i].getArea()>radius)
        {
            cout << p[i].getName() << "의 면적은 " << p[i].getArea() << ",";
        }
    }
}

int main()
{
    int size;
    cout << "원의 개수 >> ";
    cin >> size;
    CircleManager circles(size);
    circles.searchByName();
    circles.searchByArea();
    return 0;
}