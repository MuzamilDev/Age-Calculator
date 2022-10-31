#include<iostream>
using namespace std;

int main()
{
    int BirthY, BirthM, BirthD;

    cout<<"Enter Year Of Your Birth "<<endl;
    cin>>BirthY;
    cout<<"Enter Your Birth Month "<<endl;
    cin>>BirthM;
    cout<<"Enter Birth Day "<<endl;
    cin>>BirthD;

    cout<<"You are "<<2022-BirthY<<" year "<<endl;
    cout<<12-BirthM<<" Month"<<endl;
    cout<<"and "<<30-BirthD<<" Days old"<<endl;

    return 0;
}
