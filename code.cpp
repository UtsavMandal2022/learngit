#include<iostream>
using namespace std;
int main()
{cout<<"Find gcd/HCF\n";
    long long int a,b,r,q;
    cin>>a>>b;
    if(b>a)
    {
        r=a;
        a=b;
    }
    else r=b;
while(r!=0)
{q=r;
    r=a%r;
    a=q;
}
  cout<<q;  

}