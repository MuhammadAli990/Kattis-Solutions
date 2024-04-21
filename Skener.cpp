#include <iostream>
using namespace std;
int main(){
    int r,c,zr,zc;
    cin>>r>>c>>zr>>zc;
    char arr[r][c];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cin>>arr[i][j];
        }
    }
    int loc = 1;
    for(int i=0;i<r;i++){
        for(int k=0;k<zr;k++){
            for(int j=0;j<c;j++){
                for(int p=0;p<zc;p++){
                    cout<<arr[i][j];
                }
            }
        cout<<endl;
        }
    }
}