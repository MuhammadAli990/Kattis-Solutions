#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	int n;
	cin>>n;
	double *ans = new double[n];
	for(int i=0;i<n;i++){
		double average = 0.00;
		int cases;
		cin>>cases;
		double *marks = new double [cases];
		for(int j=0;j<cases;j++){
			cin>>marks[j];
			average += marks[j];
		}
		average = average/(cases*100);
		double count = 0.0;
		for(int j=0;j<cases;j++){
			
			if(marks[j]/100>average){
				count += 1.0;
			}
		}
		ans[i]=(count/cases)*100;
	}
	for(int i=0;i<n;i++){
		cout<< fixed << setprecision(3)<<ans[i]<<"%"<<endl;
	}
}