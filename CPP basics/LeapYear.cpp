/*  LEAP YEAR 
 century yyear completely div by 400 AND 100 EX 1200 1600 2400 800 (YES)
 century year but !400 and div by 100 (NO)
 !400 !100 BUT DIV by 4 is a LEAP year






*/

#include <iostream>
using namespace std;
int main()
{
int year;
cout<<"ENTER A YEAR"<<endl;
cin>>year;
 if(year%400==0 && year%100==0 && year%4==0)
 {
    cout<<"Its a leap year"<<endl;
 }
else if(year % 400!=0 && year % 100==0 )
{
    cout<<"NOT LEAP YEAR"<<endl;
}
else if(year % 400 != 0 && year % 100 != 0 && year % 4==0)
{
    cout<<"LEAP YEAR"<<endl;
}

}

