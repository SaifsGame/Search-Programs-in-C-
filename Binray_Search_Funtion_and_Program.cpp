#include<iostream>
using namespace std;

int BinarySearch(int arr[], int size , int target);

int main(){

int size=10;
cout<<"Enter the Size of Array: ";
cin>>size;
int Arr[size];
cout<<"Please Fill Up the Array:"<<endl;
for(int i=0;i<size;i++){
 cout<<"Enter Value for Index no:"<<i<<" :";
 cin>>Arr[i];
}

int target;
cout<<"Which Number Do You Want to Search: "<<endl;
cin>>target;

int Result=BinarySearch(Arr, size, target);

if(Result!=-1){
    cout<<"Number Found at the Index No: "<<Result<<endl;
}
else {
    cout<<"Number Not Found the Array!\n";
}
    return 0;
}


int BinarySearch(int arr[], int size , int target){

int start=0 , end=size-1, mid;


while (start <=end)
{
    mid = start + (end-start)/2;
    if(arr[mid]==target){
        return mid;
    }
    else if(arr[mid] < target){
        start= mid + 1;
    }
    else{
        end = mid - 1;
    }
}    

return -1;

}