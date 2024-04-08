#include <iostream>
#include <string>
using namespace std;
int main(){
	string str,str1,ans;
	cin>>str;
	cin.ignore();
	getline(cin,str1);
	int sploc = 0;
	int strtloc = 0;
	bool found = false;
	
	for(int i=0;i<str1.length();i+=sploc+1){
		sploc = 0;
		found = false;
		for(int j=strtloc;j<str1.length()&&str1[j]!=' ';j++){
			for(int k=0;k<str.length();k++){
				if(str1[j]==str[k]){
					found = true;
					break;
				}
			}
			sploc+=1;
		}
		if(found){
			for(int j=strtloc;j<strtloc+sploc;j++){
				ans+='*';
			}
		}
		if(!found){
			for(int j=strtloc;j<strtloc+sploc;j++){
				ans+=str1[j];
			}
		}
		ans+=' ';
		strtloc += sploc+1;
	}
	cout<<ans;
}
