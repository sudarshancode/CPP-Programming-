#include<iostream>
using namespace std;
class Computer{
    public:
        virtual void architecture()=0;
};
class Desktop:public Computer{
    public:
        void architecture()
        {
            cout<<"I design Desktop architecture"<<endl;
        }
};
class Laptop:public Computer{
    public:
        void architecture()
        {
            cout<<"I design Laptop architecture"<<endl;
        }
};
int main()
{
    Computer *c1;
    c1=new Desktop();
    c1->architecture();
    delete(c1);
    c1=new Laptop();
    c1->architecture();
    delete(c1);
    return 0;
}