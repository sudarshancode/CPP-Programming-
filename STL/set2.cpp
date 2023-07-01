#include<iostream>
#include<set>
#include<iterator>

using namespace std;
int main()
{
    set<int,greater<int>> s;
    set<int>::iterator it;
    s.insert(2);
    s.insert(7);
    s.insert(3);
    s.insert(2);
    s.insert(5);

    for(it=s.begin();it!=s.end();it++)
    {
        if(*it==3)
        {
            s.erase(it);
        }
    }

    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<"\t";
    }
}