#include<iostream>
using namespace std;

int gcd(int a,int b)
{
	//Write your code here
	while(a>0&&b>0){
	if(a>b)a=a%b;
	else b=b%a;
	}
	if(a==0)
	return b;
	else
	return a;
}

int main()
{
  int a,b;
  cin>>a>>b;
  gcd(a,b);
}
