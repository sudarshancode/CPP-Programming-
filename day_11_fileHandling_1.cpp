#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    fstream myFile;
    myFile.open("day_11_fileHandling_1_file.txt",ios::out); //write

    if(!myFile.is_open()){
        cout<<"Text file cannot be opened!!";
    }
    myFile<<"Hello I am sudarshan"<<endl;
    myFile<<"I am a computer science students"<<endl;

    return 0;
}