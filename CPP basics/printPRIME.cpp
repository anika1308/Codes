#include <iostream>
using namespace std;
int main()
{
    int i,n,k;
    cout<<"enter the Nth number:";
    cin>>n;

    for(i=2;i<n;i++)
    {
        for(k=2;k<i;k++)
        {
            if(i%k==0){
                cout<<"";
                break;
            }
            
        }
        if(i==k)
        {
            cout<< k <<" "<<endl;
        }

    }
    
    }
