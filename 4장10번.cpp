/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

class Person{
    string name;
    public:
    Person(){}
    Person(string name){
        this->name = name;
    }
    string getName(){
        return name;
    }
    void setName(string name){
        this->name=name;
    }
};

class Family{
    Person *p;
    int size;
    string familyname;
    public:
    Family(string name, int size);
    void show();
    void setName(int index, string name){
        p[index].setName(name);
    }
    ~Family();
};

Family::Family(string name, int size){
    p = new Person[size];
    this->size=size;
    familyname=name;
}

void Family::show(){
    cout << familyname << "가족은 다음과 같이 " << size <<"명 입니다.\n";
    for(int i=0;i<size;i++){
        cout << p[i].getName() << ' ';
    }
}

Family::~Family(){
    delete [] p;
}

int main()
{
    Family *simpson = new Family("Simpson",3);
    simpson->setName(0, "Mr. Simpson");
    simpson->setName(1, "Mrs. Simpson");
    simpson->setName(2, "Bart Simpson");
    simpson->show();
    delete simpson;
    return 0;
}
