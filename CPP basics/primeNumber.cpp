/* #include <iostream>
using namespace std;
int main ()
{
   int n,i;
   cout<<"enter a number : " <<endl;
   cin>>n;
   if(n%i==0 && n/n==1)
   {
    cout<<"entered number is prime :"<<endl;
   }

else
{
 cout<<"number is not prime "<<endl;
}


} */

/* prime number are the number that are div by 1 and itself only that is they have 2 factors
1 is not a prime number because its only div by itself*/

#include <iostream>
using namespace std;
int main()
{
 int i,num;
 cout<<"enter a NUMBER "<<endl;
 cin>>num;
 for(i=2;i<num;i++)
 {
   if(num%i==0)
   {
      cout<<"number is not  prime "<<endl;
      break;
   }
   
 }
 if(i==num)
   {
      cout<<"number is prime"<<endl;
   }

}
