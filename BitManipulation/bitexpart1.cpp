#include <iostream>
using namespace std;
bool checkpower2(int n){
   return (n && !(n & (n-1)));
}
int numberofone(int n){
    int count=0;
    while(n!=0){
        n=(n & n-1);
        count++;
    }
    return count;
}
void subset(int arr[],int n){
    for(int i=0;i< (1<<n);i++){
        for(int j=0;j<n;j++){
            if( i & (1<<j)){        //to check the bit at the j positon
                cout<<arr[j]<<" ";
            }
        }cout<<endl;
    }
}
int main(){
    // cout<<checkpower2(1)<<endl;
    // cout<<numberofone(2)<<endl;
    // int arr[4]={1,2,3,4};
    // subset(arr,4);
    
}