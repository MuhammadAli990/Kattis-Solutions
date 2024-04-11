#include <iostream>
#include <string>
#include <vector>
using namespace std;
int main(){
    int n = 0;
    string str;
    vector <string> logs;
    while(true){
        getline(cin,str);
        if(str=="-1"){
            break;
        }
        n++;
        logs.push_back(str);
    }
    string *arr = new string[n];
    for(int i=0;i<n;i++) {
        arr[i]=logs[i];
    }
    int score = 0;
    int probsolved = 0;
    bool found = false;
    for(int i=0;i<n;i++){
        if(arr[i].substr(arr[i].length()-5,5)=="right"){
        	for(int j=i-1;j>=0;j--){
        		if(arr[j].substr(arr[j].length()-7,1)==arr[i].substr(arr[i].length()-7,1)){
        			if(arr[j].substr(arr[j].length()-5,5)=="right"){
        				found = true;
        				break;
					}
					else if(arr[j].substr(arr[j].length()-5,5)=="wrong"){
						score += 20;
					}
				}
			}
			int p = 0;
			if(!found){
				probsolved++;
				while(arr[i][p]!=' '){
					p++;
				}
				score += stoi(arr[i].substr(0,p));
			}
			found = false;
		}
    }
    cout<<probsolved<<" "<<score;
    
}