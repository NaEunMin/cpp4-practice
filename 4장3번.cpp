/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int main(){
    string a;
    int count=0;
    cout << "문자열 입력>> ";
    getline(cin,a,'\n');
    for(int i=0;i<a.length();i++){
        a[i]=tolower(a[i]);
        char ch=a.at(i);
        if(ch=='a'){
            count++;
        }
    }
    cout << "문자 a는 " << count <<"개 있습니다.";

    return 0;
}