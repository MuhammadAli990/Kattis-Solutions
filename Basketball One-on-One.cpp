#include <iostream>
#include <string>
using namespace std;
int main(){
	string str;
	int a=0;
	int b=0;
	cin>>str;
	for(int i=0;i<str.length();i++){
		if(str[i]=='A'){
			a+=str[i+1]-'0';
		}
		else if(str[i]=='B'){
			b+=str[i+1]-'0';
		}
	}
	if(a>b){
		cout<<"A";
	}
	else if(a<b){
		cout<<"B";
	}
}
