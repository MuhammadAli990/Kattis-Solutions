#include <iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string ans;
    bool found = false;
    int n = str.length();
    int r=0;
    int c=0;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i*j==n){
                if(i<=j){
                    r=i;
                    c=j;
                }
            }
        }
    }
    int k=0;
    char mat[r][c];
    for(int j=0;j<c;j++){
        for(int i=0;i<r;i++){
            mat[i][j]=str[k];
            k++;
        }
    }
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            cout<<mat[i][j];
        }
    }
}