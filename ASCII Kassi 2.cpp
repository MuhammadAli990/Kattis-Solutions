#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int i=0;i<n+1;i++){
		cout<<" ";
	}
	cout<<"x\n";
	int f = n;
	int k =1;
	for(int i=0;i<n;i++){
		for(int j=0;j<f;j++){
			cout<<" ";
		}
		cout<<"/";
		for(int j=0;j<k;j++){
			cout<<" ";
		}
		cout<<"\\\n";
		f-=1;
		k+=2;
	}
	cout<<"x";
	for(int i=0;i<(n*2)+1;i++){
		cout<<" ";
	}
	cout<<"x\n";
	k = 1;
	f = (n*2)-1;
	for(int i=0;i<n;i++){
		for(int i=0;i<k;i++){
			cout<<" ";
		}
		cout<<"\\";
		for(int i=0;i<f;i++){
			cout<<" ";
		}
		cout<<"/\n";
		k+=1;
		f-=2;
	}
	for(int i=0;i<n+1;i++){
		cout<<" ";
	}
	cout<<"x\n";
}