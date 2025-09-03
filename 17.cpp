#include<iostream>
using namespace std;
class a
{
public:
    a()
    {
        cout<<"Class a"<<endl;
    }


};
class b : public a
{
public:
    b()
    {
        cout<<"Class b"<<endl;
    }



};
class c : public b
{
public:
    c ()
    {

        cout<<"Class c"<<endl;

    }


};
class d : public b
{
public:
    d ()
    {

        cout<<"Class d"<<endl;

    }
    void display1 ( )
    {
        cout<<"Class e";
    }



};

class f: public c
{
public:
    f ()
    {

        cout<<"Class f"<<endl;

    }


};
class e: public f
{
public:
    e ()
    {

        cout<<"Class e"<<endl;

    }
public:

    void display ( )
    {
        cout<<"Class e"<<endl;
    }


};
int main ( )
{
 e obj1;
 obj1.display ( )  ;
d obj2;
obj2.display1 ( )  ;

}
