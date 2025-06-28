#include<iostream>
#include<iomanip>
using namespace std;
const int size=5;
int main(){
	
	int i,j;
    string name;
    bool found= false;
    string  arr[size]={"Saif", "Raheem", "Ahsan","Khizar"};
    cout << "" << endl;
    cout << "Enter the Name You want to Search in Array" << endl;
    cin>>name;
    for(i=0; i<size; i++)
    {
    if (arr[i]==name) {
    found = true;
    j=i;
    }
    }
    if (found== true){
    cout << "Name is Found!" << endl;
    cout << "The Name "<<name<<" is Found at Index No: "<<j << endl;
    } else {
    cout << "Name Not Found in the Array" << endl;
    }
    
    
    
    	
    return 0;
	
}
