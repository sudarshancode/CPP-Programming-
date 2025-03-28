#include<iostream>
#include<utility>
#include<vector>
#include<string>
using namespace std;
int main()
{
    //Basic pair

    pair<char,int> p;

    cin>>p.first>>p.second;
    cout<<p.first<<" "<<p.second<<endl;

    //pair using in vector

    vector<pair<char,int>>v;
    v.push_back({'A',10});
    v.push_back({'B',20});
    v.push_back({'C',30});

    for(int i=0;i<v.size();i++)
    {
        cout<<v[i].first<<"  "<<v[i].second<<endl;
    }
}
