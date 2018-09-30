#include <iostream>
#include <cmath>
using namespace std;


int main(){
double moneyattheend;
double amount;
double increamentperday;
int dayforrun;

cout<<"enter the principal amount";
cin>>amount;
cout<<"enter increment per day";
cin>>increamentperday;
cout<<"no of days for investing money";
cin>>dayforrun;


for(int day=1;day<=dayforrun;day++){


moneyattheend=amount*pow(1+increamentperday,dayforrun);
cout<<          day          <<"$$$$$$$$$$"<<       moneyattheend      ;

}



}
