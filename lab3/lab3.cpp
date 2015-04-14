#include<iostream>
#include<fstream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int t=0,sum=0,i=0,test;
	vector<int> weight(9);

	ifstream infile("file.in",ios::in);
	if(!infile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}

	while(infile>>test){
		weight[i]=test;
		i++;
	}
	sort(weight.begin(),weight.end());
	
	for(i=(weight.size()-1);i>(weight.size()-6);i--){
		sum=sum+weight[i];
	}		
	cout<<sum<<endl;	
	
	return 0;
}
