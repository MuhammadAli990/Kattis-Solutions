#include <iostream>
using namespace std;
int main(){
    int h,m;
    cin>>h>>m;
    if(m>=45){
        cout<<h<<" "<<m-45;
    }
    else{
        m+=60;
        if(h==0){
            cout<<23<<" "<<m-45;
        }
        else{
            cout<<h-1<<" "<<m-45;
        }
    }
}