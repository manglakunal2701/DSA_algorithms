#include <iostream>
using namespace std;
class SimpleInterest
{
    int amount;
    float rate;
    int year;
    float return_value;
public:
    SimpleInterest(){}
    SimpleInterest(int p,float r,int y);
    SimpleInterest(int p,int r,int y);
    void display(void);
};
SimpleInterest::SimpleInterest(int p,float r,int y)
{
    amount=p;
    rate=r;
    year=y;
    return_value=amount;
    for(int i=0;i<y;i++)
    {
        return_value=return_value*(1.0+r);
    }
}
SimpleInterest::SimpleInterest(int p,int r,int y)
{
    amount=p;
    rate=r;
    year=y;
    return_value=amount;
    for(int i=0;i<y;i++)
    {
        return_value=return_value*(1.0+float(r)/100);
    }
}
void SimpleInterest::display(void)
{
    cout<<"Pricipal Amount:"<<endl;
    cout<<amount<<endl;
    cout<<"After intevesment Amount:"<<endl;
    cout<<return_value<<endl;
}

int main()
{
    SimpleInterest a1,a2;
    int y;
    float r;
    int R;
    int p;
    cout<<"Enter the principle ,rate(in int) ,year"<<endl;
    cin>>p>>r>>y;
    a1=SimpleInterest(p,r,y);
    cout<<"Enter the principle ,rate(in percent) ,year"<<endl;
    cin>>p>>R>>y;
    a2=SimpleInterest(p,R,y);
    cout<<"deposit 1:"<<endl;
    a1.display();
    cout<<"deposit 2:"<<endl;
    a2.display();
return 0;
}
