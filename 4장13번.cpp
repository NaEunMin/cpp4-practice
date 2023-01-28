/******************************************************************************
                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.
*******************************************************************************/

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

class Histogram{
    string str;
    public:
    Histogram(string str){this->str=str;}
    void put(string str);
    void putc(char ch);
    void print();
};

void Histogram::put(string str){
    this->str = this->str + str;
}

void Histogram::putc(char ch){
    str=str+ch;
}

void Histogram::print(){
    cout << str;
    int count=0;
    for(int i=0;i<str.length();i++){
        if(isalpha(str[i])!=0){
            count++;
        }
    }
    cout << endl;
    cout << "총 알파벳 수 " << count << endl;
    
    for(char ch='a'; ch<='z';ch++){
        count=0;
        for(int i=0;i<str.length();i++){
            str[i]=tolower(str[i]);
            if(str[i]==ch){
                count++;
            }
        }
        cout << ch << "(" << count << ")" << "   :";
        for(int i=0;i<count;i++){
            cout << '*';
        }
        cout << endl;
    }
}
int main()
{
    Histogram elvisHisto("Wise men say, only fools rush in But I can't help, ");
    elvisHisto.put("falling in love with you");
    elvisHisto.putc('-');
    elvisHisto.put("Elvis Presley");
    elvisHisto.print();
    return 0;
}