/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>

using namespace std;

int main()
{
  string str;
  cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다.)\n";
  while(true){
      getline(cin , str);
      if(str=="exit")
      break;
      for(int i=0;i<str.length()/2;i++){
          char tmp = str[i];
          str[i] = str[str.length()-i-1];
          str[str.length()-i-1] = tmp;
      }
      cout << str << endl;
  }
    return 0;
}



/*
int main() {
	string str;

	cout << "아래에 한 줄을 입력하세요.(exit를 입력하면 종료합니다)" << endl;
	while (true) {
		cout << ">>";
		getline(cin, str);
		if (str.compare("exit") == 0) break;

		for (int i = str.length() - 1; i >= 0; i--) {
			cout << str[i];
		}
		cout << endl;
	}

	return 0;
}
*/
