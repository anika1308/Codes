#include <iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter two numbers: "<<endl;
    cin>>a>>b;
    c=a;
    a=b;
    b=c;
    cout<<" swapped value is : "<<a<<" "<<b;
}

