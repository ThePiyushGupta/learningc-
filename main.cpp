#include <iostream>
using namespace std;
int main()
{   int x=1;
int sum3=0;
int sum5=0;
int sum15;
for(int i=0;i<3;i++)
    {

int a;
a=(x-1)/3;
sum3=3*(a*(a+1)/2);

int b;
b=(x-1)/5;
sum5=5*(b*(b+1)/2);
int c;

c=(x-1)/15;
sum15=15*(c*(c+1)/2);
x=x*10;
}
cout<<sum3 + sum5 -sum15;
}


