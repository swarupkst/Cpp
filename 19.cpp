#include<iostream>
using namespace std;
void primefact( int n)
{
    int i;
  for (i=2; n>1;i++ )
  {
    if (n%i==0)
    {
        cout<<i;
         n=n/i;

    }

else
    i++;

  }


}
main(void )
{
    int n;
    cin>>n;
   primefact(n);
}
