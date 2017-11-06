#include <iostream>

using namespace std;

int main()
{
    int a,b,x,c;
    cin>>a>>b;
    if(a<b)
    {
        c=a;
        a=b;
        b=c;

    }
      for(x=a;x>=b;x--)
        if(x%2!=0)
        cout<<x<<' ';
}
