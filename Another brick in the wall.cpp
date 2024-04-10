#include <iostream>
using namespace std;
int main(){
    int h,w,n;
    cin>>h;
    cin>>w;
    cin>>n;
    int *b = new int[n];
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    bool yes = false;
    int loc = 0;
    int f = 0;
    for(int i=0;i<h;i++){
    	for(int j=loc;j<n;j++){
    		f+=b[j];
    		loc+=1;
    		if(f==w){
    			yes = true;
    			break;
			}
			else{
				yes = false;
			}
		}
		if(loc==n && i<h-1){
			yes = false; //when no of bricks end and height is incomplete
		}
		f=0;
	}
    if(yes){
        cout<<"YES";
    }
    else {
        cout<<"NO";
    }
}