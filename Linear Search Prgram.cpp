#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	
	const int size=5;
	int list [size]={7,1,2,3,9};
	int j,num,count;
	bool found;
	cout<<"Enter a Number you wanted to Search"<<endl;
	cin>>num;
	count=0; found=false;
	while(count<size && (!found)) {
	
	if(list [count]==num){
		found=true;
		j=count;
	}
	count++;
	}
	if  (found==true){
		cout<<"Nomber is Founded Successfully"<<endl;
		cout<<"The Number Found at Index No. "<<j<<endl;
	} else {
		cout<<"Number not Found";
	}
	return 0;
	
}
