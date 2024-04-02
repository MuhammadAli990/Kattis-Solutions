#include <iostream>
#include <string>
using namespace std;
int main(){
	string str[5];
	int count = 0;
	int arr[5];
	for(int i=0;i<5;i++){
		cin>>str[i];
		if(str[i].find("FBI")<20){
			arr[count]=i+1;
			count += 1;
		}
	}
	if(count!=0){
		for(int i=0;i<count;i++){
			cout<<arr[i]<<" ";
		}
	}
	else{
		cout<<"HE GOT AWAY!";
	}
}