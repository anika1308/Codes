#include<iostream>
using namespace std;
int main()
/*{
    char c;
    cout<< "enter a alphabet : "<<endl;
    cin>>c;
    if( c=='A' || c=='a' || c=='E'|| c=='e' || c=='I' || c=='i' || c=='O'|| c=='o' || c== 'u' || c=='U' )
    {
     cout<<" vowel found "<<c<<endl;

    }
    else
    {
        cout<<"consonant"<<endl;
    }
}*/
{
char c;
cout<<"enter alphabet : "<<endl;
cin>>c;
switch(c)
{
    case 'a':
    cout<<"vowel";
    break;

    case 'A':
    cout<<"vowel";
    break;
    case 'i':
    cout<<"vowel";
    break;

    case 'I':
    cout<<"vowel";
    break;
    case 'e':
    cout<<"vowel";
    break;

    case 'E':
    cout<<"vowel";
    break;

    case 'o':
    cout<<"vowel";
    break;

    case 'O':
    cout<<"vowel";
    break;

    case 'u':
    cout<<"vowel";
    break;

    case 'U':
    cout<<"vowel";
    break;

    default: 
    cout<<"consonant"<<endl;
}


}

