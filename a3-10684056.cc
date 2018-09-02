ID:10684056
#include<iostream>
using namespace std;
int main()
{
int a=100;
cout<<"type any number between 0 t0 100";
cin>>a;
if(a>=80 && a<100)
{cout<<"excellent\n";
cout<<"You had grade:A\n";
return 0;}
if(a>=70 && a<=80)
{cout<<"very good\n";
 cout <<"You had grade:B\n";
return 0;}
if(a>=60 && a<=70)
{cout<<"good\n";
cout<<You had grade:C\n";
return 0;}
if(a>=50 && a<=60)
{cout<<"credit\n";
cout<<"You had grade:D\n";
return 0;}
if(a>=40 && a<=50)
{cout<<"pass\n";
cout<<"You had grade:E\n;}
if(a>=40)
{cout<<"fail\n";
cout<<"You had grade:F\n";
return 0;}
}
