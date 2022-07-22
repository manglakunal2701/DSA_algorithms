#include <iostream>
#include <cstring>
using namespace std;

/*int main()
{
    int n,count=0,sum=0,sum_t;
    cout<<"Enter number of elements"<<endl;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the sum"<<endl;
    cin>>sum_t;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((arr[i]+[j])==sum_t)
            {
                count++;
                cout<<arr[i]<<" "<<arr[j]<<endl;
            }
        }
    }
}
//first complete

void mergesort(int[],int[],int arr3[],int,int);
int main()
{
    int n1,n2;
    cout<<"Enter number of elements of array 1"<<endl;
    cin>>n1;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter number of elements of array 2"<<endl;
    cin>>n2;
    int arr2[n2];
    int arr3[n1+n2];
    for(int i=0;i<n2;i++)
    {
        cin>>arr2[i];
    }
   mergesort(arr1,arr2,arr3,n1,n2);
    for (int i = 0; i < n1+n2; ++i)
        {

            for (int j = i + 1; j < n1+n2; ++j)
            {

                if (arr3[i] > arr3[j])
                {

                    int a =  arr3[i];
                    arr3[i] = arr3[j];
                    arr3[j] = a;
                }
            }
        }
    printf("Sorted arrays\n");
    for(int i=0;i<n1;i++)
    {
        arr1[i]=arr3[i];
        cout<<arr1[i]<<" ";
    }
    printf("\n");
    for(int j=n1,i=0;i<n2;i++,j++)
    {
        arr2[i]=arr3[j];
         cout<<arr2[i]<<" ";
    }
   return 0;
}
void mergesort(int arr_n[] ,int arr_m[],int arr3[],int n1,int n2)
{

    for(int i=0;i<n1;i++)
    {
        arr3[i]=arr_n[i];
    }
    for(int i=n1,j=0;j<n2;i++,j++)
    {
        arr3[i]=arr_m[j];
    }
}
//second complete
int main()
{
    int i,cont=0,count=0,digits=0,uppercase=0,lowercase=0;
    char a[50];
    cout<<"Enter the string"<<endl;
    gets(a);
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u'||a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='U')
        {
            count++;
        }
        if(a[i]>=65 && a[i]<=90)
        {
            uppercase++;
        }
        if(a[i]>=97 && a[i]<=122)
        {
            lowercase++;
        }
        if(a[i]>=48 && a[i]<=57)
        {
            digits++;
        }
}
cout<<"vowels are "<<count<<endl;
cout<<"digits are "<<digits<<endl;
cout<<"uppercase are "<<uppercase<<endl;
cout<<"lowercase are "<<lowercase<<endl;
}
//Third complete
int main()
{
    char a[50];
    cout<<"Enter the string"<<endl;
    gets(a);
    for(int i=0;i<strlen(a);i++)
    {
         if(a[i]>=48 && a[i]<=57)
            {
                cout<<a[i];
            }
    }
    for(int i=0;i<strlen(a);i++)
    {
         if(a[i]>=65 && a[i]<=90)
            {
                cout<<a[i];
            }
    }
    for(int i=0;i<strlen(a);i++)
    {
        if(a[i]>=97 && a[i]<=122)
            {
                cout<<a[i];
            }
    }
    for(int i=0;i<strlen(a);i++)
    {
         if(a[i]>=33 && a[i]<=47 || a[i]>=58 && a[i]<=64)
            {
                cout<<a[i];
            }
    }
    return 0;
}
//fourth complete
int main()
{
    char a[50];
    cout<<"Enter the string"<<endl;
    gets(a);
     for(int i=0;i<strlen(a);i++)
     {
         if(a[i]==a[i+1])
         {
             continue;
         }
         else
         {
             cout<<a[i];
         }
     }

}
//
class Test{
        string str;
  public:
        Test(string st)
        {
            str=st;
        }
        friend void printeven(Test str);
};
void printeven(Test st){
    cout<<st.str<<endl;
    cout<<st.str.size()<<endl;
    for(int i=0;i<st.str.size();i++)
    {
        if(i%2==0)
        {
            cout<<st.str[i];
        }
    }
}
int main()
    {
        string str;
        cout<<"Enter th string :"<<endl;
        cin>>str;
        Test obj(str);
        printeven(obj);
        return 0;
    }
///
#include <iostream>

using namespace std;

class Employee{
    int Pan;
    int Taxincome;
    int Tax;
    char Name[20];
public:
    void InputInfo()
    {
        cout<<"Enter the name of employee:"<<endl;
        cin>>Name;
        cout<<"Enter the Account number of employee:"<<endl;
        cin>>Pan;
        cout<<"Taxable ammount"<<endl;
        cin>>Taxincome;
    }
    void TaxCalc();
    void DisplayInfo();
};
void Employee::TaxCalc()
{
    if(Taxincome<=250000)
    {
        Tax=0;
    }
    else if(Taxincome>=250000  && Taxincome<=300000 )
    {
        Tax = ((Taxincome-250000) * 10)/100;
    }
    else if(Taxincome>=300000  && Taxincome<=400000 )
    {
        Tax = (((Taxincome-300000) * 20)/100) + 5000 ;
    }
    else
    {
        Tax = ((Taxincome-400000) * 30)/100 + 25000;
    }
}
void Employee:: DisplayInfo()
{
    cout<<"the name of employee is: "<<Name<<endl;
    cout<<"Account number of employee is: "<<Pan<<endl;
    cout<<"Taxable amount is:"<<Taxincome<<endl;
    cout<<"Tax on income is:"<<Tax<<endl;
}


int main()
{
    Employee obj;
    obj.InputInfo();
    obj.TaxCalc();
    obj.DisplayInfo();
    return 0;
}
*/
