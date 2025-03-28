#include <bits/stdc++.h>
#include <map>
#include <string>
#include <iostream>
using namespace std;

int main() {
    map<string, int> people = {{"Sudarshan", 20}, {"Akash", 30}};

    cout << "Sudarshan is: " << people["Sudarshan"] << endl;
    cout<<"Akash is:" << people.at("Akash")<<endl;

    people["Ram"]=32;
    people["Rahul"]=33;
    people["Shukhdeb"]=40;

    cout<<"Shukhdeb is:"<<people.at("Shukhdeb")<<endl;

    people.insert({"Raktim",39});
    people.insert({"Rakesh",60});

    cout<<"Raktim is:"<<people.at("Raktim")<<endl;

    //Remove Sudarshan 
    people.erase("Sudarshan");

    //Iterate
    cout<<"After removing:"<<endl;
    for(auto per : people){
        cout<<per.first<<" is: "<<per.second<<endl;
    }

    //Clear map
    people.clear();

    return 0;
}
