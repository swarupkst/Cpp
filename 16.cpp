#include<iostream>
using namespace std;
public:
class a
{
    public:
    void dispaly ( )
    {
        cout<<"Class a";
    }


};
class b :  public a
{

    void display ( )
    {
        cout<<"Class b";


    }

};
class c : public a
public:
{


void display ( )
{
    cout<<"Class c";
}

};
class d : public b,public c
{
public:

void display ( )
{
    cout<<"Class d";
}

};
