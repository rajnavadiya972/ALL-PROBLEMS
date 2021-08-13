#include <bits/stdc++.h>
using namespace std;

void fun1(int &a,int &b);

int main()
{
   int a,b;
   cin>>a>>b;
   cout<<a<<" "<<b<<endl;
   fun1(a,b);
   cout<<a<<" "<<b<<endl;

    return 0;
}


void fun1(int &a,int &b){
    int temp;
    temp=a;
    a=b;
    b=temp;
}