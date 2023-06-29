#include<iostream>
using namespace std;
class BiralaMarket{
    public:
        virtual void print() //virtual function
        {
            cout<<"welcome to Birala Market"<<endl;
        }
};
class ChickenShop:public BiralaMarket{
    public:
        void print()
        {
            cout<<"Only Chicken"<<endl;
        }
};
class EggShop:public BiralaMarket{
    public:
        void print()
        {
            cout<<"Only Egg"<<endl;
        }
};
int main()
{
    BiralaMarket bi;
    bi.print();


    BiralaMarket *ptr;
    ptr=new ChickenShop();
    ptr->print(); //we use virtual function in BiralaMarket class so "only chicken" is printed
    delete(ptr);
    ptr=new EggShop();
    ptr->print();
    delete(ptr);
    return 0;
}