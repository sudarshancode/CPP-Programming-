#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> vec;

    vector<int> :: iterator it;
    it=vec.begin();
    //element push
    for(int i=0;i<6;i++)
    {
        vec.push_back(i);
    }
    //vector element print
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }
    cout<<endl;
    //vector element value change
    for(it=vec.begin();it!=vec.end();it++)
    {
        if(*it==4)
        {
            *it=9;
        }
    }
    //print value of coustomization vector
    for(it=vec.begin();it!=vec.end();it++)
    {
        cout<<*it<<"\t";
    }
}