/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

class Player{
    string name;
    public:
    void setName(string name){this->name=name;}
    string getName(){return name;}
};

class WordGame{
    Player *p;
    int size;
    string name;
    public:
    ~WordGame();
    void run();
};



WordGame::~WordGame(){
    delete [] p;
}

void WordGame::run(){
    string startWord = "아버지지지";
    string userWord;
    int a;
    cout <<  "끝말 잇기 게임을 시작합니다." << endl;
    cout << "게임에 참가하는 인원은 몇명입니까?";
    cin >> size;
    p = new Player[size];
    for(int i=0; i<size; i++){
        cout << "참가자의 이름을 입력하세요. 빈칸없이>>";
        cin >> name;
        p[i].setName(name);
    }
    cout << endl;
    cout << "시작하는 단어는 " << startWord <<"입니다.\n";
    
    while(true){
        cout << p[0].getName() << ">>";
        cin >> userWord;
        a=startWord.size();
        if(startWord.at(a-5)==userWord.at(0)&&
        startWord.at(a-4)==userWord.at(1)){
            startWord=userWord;
        }
        else{
            cout << p[0].getName() <<"패배";
            break;
        }
        
        cout << p[1].getName() << ">>";
        cin >> userWord;
        if(startWord.at(a-2)==userWord.at(0)&&
        startWord.at(a-1)==userWord.at(1)){
            startWord=userWord;
        }
        else{
            cout << p[1].getName() <<"패배";
            break;
        }
        
        cout << p[2].getName() << ">>";
        cin >> userWord;
        if(startWord.at(a-2)==userWord.at(0)&&
        startWord.at(a-1)==userWord.at(1)){
            startWord=userWord;
        }
        else{
            cout << p[2].getName() <<"패배";
            break;
        }
      }
      
      /*int i=0;
      for (;;) {
        cout << p[i%num].getName() << ">>";
        cin >> b;
        int j = a.size();
        if (a.at(j - 2) == b.at(0) && a.at(j - 1) == b.at(1)) {
            a = b;
        }
        else {
            cout << p[i%num].getName() << "탈락!!"<<endl;
            break;
        }
        ++i;
    }*/
}

int main()
{
    WordGame wordgame;
    wordgame.run();
    return 0;
}
