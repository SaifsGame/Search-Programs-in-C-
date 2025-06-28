#include<iostream>
using namespace std;

int searcharray(int list[], int size, int num)
{
int index=0;  bool found= false;
for(int i=0;i<size;i++)
{
if ( num==list[i]){
found=true;
index=i;
}
}
if(found==true) {
cout << "The Number "<<num<<" is Found At the Index No:"<<index << endl;
} else {
cout << "Number Not Found! " << endl;
}
}
int main() {
const int Size=5;
int arrlist[Size]={2,4,6,9,12};
int Num;
cout << "Enter the Number You want to Search" << endl;
cin >> Num;

searcharray(arrlist,Size,Num);


    return 0;
}