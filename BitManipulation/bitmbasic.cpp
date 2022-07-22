#include <iostream>
using namespace std;
int getbit(int n,int pos){
    return ((n & (1<<pos))!=0);
}
int setbit(int n,int pos){
    return (n | (1<<pos));
}
int clearbit(int n,int pos){
    int mask= ~(1<<pos);
    return (n & mask);
}
int updatebit(int n,int pos,int i){
    int mask= ~(1<<pos);
    int num= (n & mask);// to clear bit and than set the bit;
    return (num | (1<<i));
}
int main()
{
    cout<< getbit(5,1)<<endl;
    cout<<setbit(5,1)<<endl;   
    cout<<clearbit(5,2)<<endl; 
    cout<<updatebit(7,1,0)<<endl; 
} // namespace std;
