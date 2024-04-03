#include <iostream>
using namespace std;
int main() {
	string string, out;
	cin >> string;

  	for (char i:string) {
    	if(i=='<') {
      		out.pop_back();
    	} 
		else{
      	out.push_back(i);
    	}
    }
	cout<<out;
}











	