#include<iostream>
using namespace std;

int prime(int x)
{
    for(int i = 2; i<x; i++)
    {
        if(x%i == 0)
            return false;
    }
    return true;
}

int main()
{
    int x;
    cout<<"Please enter a number = ";
    cin>>x;
    cout << prime(x) <<endl;
    cout << prime(x) <<endl;

}
