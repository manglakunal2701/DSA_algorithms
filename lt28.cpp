#include <iostream>
using namespace std;
class dhruv;
class kunal
{
    int num1;
    friend void swapping(kunal &,dhruv &);
public:
    void readdata(int k)
    {
        num1=k;
    }
    void display(void)
    {
        cout<<num1<<endl;
    }
};
class dhruv
{
    int num2;
    friend void swapping(kunal &,dhruv &);
public:
    void readdata(int m)
    {
        num2=m;
    }
    void display(void)
    {
        cout<<num2<<endl;
    }

};
void swapping(kunal & ob1,dhruv & ob2)
{
    int temp=ob1.num1;
    ob1.num1=ob2.num2;
    ob2.num2=temp;
}
int main()
{
    kunal ov1;
    dhruv ov2;
    ov1.readdata(3000);
    ov2.readdata(9000);
    swapping(ov1,ov2);
    cout<<"after swapping ov1 is";
    ov1.display();
    cout<<"after swapping ov2 is";
    ov2.display();
    return 0;
}
