/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class Container{
    int size;
    public:
    Container(){size = 10;}
    void fill(){size = 10;}
    void consume(){size = size - 1;}
    int getSize(){return size;}
};

class CoffeeVendingMachine{
    Container tong[3];
    void fill();
    void selectEspresso();
    void selectAmericano();
    void selectSugarCoffee();
    void show();
    public:
    void run();
};

void CoffeeVendingMachine::fill(){
    for(int i=0;i<3;i++){
        tong[i].fill();
    }
    show();
}

void CoffeeVendingMachine::selectEspresso(){
    if(tong[0].getSize()>=1&&tong[1].getSize()>=1){
    tong[0].consume();
    tong[1].consume();
    cout << "에스프레소 드세요\n";
    }
    else
    cout << "잔량이 부족합니다.\n";
}

void CoffeeVendingMachine::selectAmericano(){
    if(tong[0].getSize()>=1&&tong[1].getSize()>=2){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    cout << "아메리카노 드세요\n";
    }
    else
    cout << "잔량이 부족합니다.\n";
}

void CoffeeVendingMachine::selectSugarCoffee(){
    if(tong[0].getSize()>=1&&tong[1].getSize()>=2&&tong[2].getSize()>=1){
    tong[0].consume();
    tong[1].consume();
    tong[1].consume();
    tong[2].consume();
    cout << "설탕커피 드세요\n";
    }
    else
    cout << "잔량이 부족합니다.\n";
}

void CoffeeVendingMachine::show(){
    cout << "커피 " << tong[0].getSize() << " 물 " << tong[1].getSize() << " 설탕 " 
    << tong[2].getSize() << endl; 
}
void CoffeeVendingMachine::run(){
    int num;
    cout << "***** 커피자판기를 작동합니다. *****\n";
    while(true){
    cout <<"메뉴를 눌러주세요(1:에스프레소, 2:아메리카노, 3:설탕커피, 4:잔량보기, 5:채우기)>>";
    cin >> num;
    if(num==1){
        selectEspresso();
    }
    else if(num==2){
        selectAmericano();
    }
    else if(num==3){
        selectSugarCoffee();
    }
    else if(num==4){
        show();
    }
    else if(num==5){
        fill();
    }
    else 
    break;
  }
}

int main()
{
    CoffeeVendingMachine coffeemachine;
    coffeemachine.run();
    

    return 0;
}
