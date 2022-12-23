#include<iostream>
#include<cmath>
using namespace std;
void sum();
void subt();
void mult();
void di();
void mod();
void sqrt();
void log();
int main()
{
	cout<<"ADDITION  FOR 1 \t  Product   for    3  \n";
	cout<<"Differenc for 2 \t  Quotient  for    4  \n";
	cout<<"Remainder for 5 \t    log     for    6  \n";
	cout<<"          Square Root for  7           \n";
	cout<<"---------------------------------------------\n";
	char c;
	cout<<"enter the choice:";
	cin>>c;
	if(c=='1')
	sum();
	else if(c=='2')
	subt();
	else if(c=='3')
	mult();
	else if(c=='4')
	di();
	else if(c=='5')
	mod();
	else if(c='7')
	sqrt();
	else if(c='6')
	log();
	else
	cout<<"invalid choice";
	
}
void sum()
{
int a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	cout<<"addition="<<a+b;	
}
void subt()
{
int a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	cout<<"sub="<<a-b;
}
void mult()
{
int a,b;
	cout<<"enter the numbers";
	cin>>a>>b;
	cout<<"multiply="<<a*b;
}
void di()
{
float a,b;
	cout<<"enter the numbers:";
	cin>>a>>b;
	cout<<"divide="<<a/b;	
}
void mod()
{
	int a,b;
	cout<<"enter the numbers:";
	cin>>a>>b;
	cout<<"multiply="<<a%b;
}
void sqrt(){
	
	int n;
	cout<<"enter the number:";
	cin>>n;
	cout<<"sqrt of number:"<<sqrt(n);
}
void log()
{
	int ne;
	cout<<"enter the numbers:";
	cin>>ne;
    cout<<"log: "<<log(ne);
}
