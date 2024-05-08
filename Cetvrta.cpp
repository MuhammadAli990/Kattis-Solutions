#include <iostream>
using namespace std;
int main(){
    int arr[6];
    int n1,n2;
    for(int i=0;i<6;i++){
        cin>>arr[i];
    }
   int x,y;
   if(arr[1]==arr[5]){
       y=arr[3];
   }
   if(arr[3]==arr[5]){
       y=arr[1];
   }
   if(arr[1]==arr[3]){
       y=arr[5];
   }
   if(arr[0]==arr[4]){
       x=arr[2];
   }
   if(arr[2]==arr[4]){
       x=arr[0];
   }
   if(arr[0]==arr[2]){
       x=arr[4];
   }
   cout<<x<<" "<<y;
}
