#include <iostream>
using namespace std;
int main() {
        int n,i;
	    cin>>n;
        int arr[n];
	    for( i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    for( i=0;i<n;i++){
	        if(arr[i]>=arr[i+1]){
                cout<<"N "<<i<<" ";
	            break;
	        }
            cout<<i;
	    }
        
	    if(i==n){
            cout<<"Yes"<<endl;
        }
	    else{
	        cout<<"No"<<endl;
	    }
	return 0;
}
