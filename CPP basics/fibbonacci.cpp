/*sum krke value swapkrni h 
n1=1,n2=2,n3=n1+n2;
n1=n2;n2=n3;n3=n1+n2;
*/
#include <iostream>
using namespace std;
int main()
{
    int n1=0,n2=1,n3,i,n;
    cout<< " enter the value "<<endl;
    cin>>n;
    for(i=0;i<=n;i++)
    {
        n3=n1+n2;
        n1=n2;
        n2=n3;
       cout<<n3;
    }
}