#include<iostream>
#include<list>
using namespace std;
class youTubeChannel{
private:
        string Name;
        string ownerName;
        int subCounter=0;
        list<string> uploadVideo;
public:
        youTubeChannel(string name,string owner_name){
            Name=name;
            ownerName=owner_name;
        }
        void getData()
        {
            cout<<"Name:"<<Name<<endl;
            cout<<"Owner Name:"<<ownerName<<endl;
            cout<<"Subescriber:"<<subCounter<<endl;
            cout<<"Uploaded Video:"<<endl;
            for(string video:uploadVideo){
                cout<<"\""<<video<<"\"  ";
            }
        }
        void Subscribe()
        {
            subCounter++;
        }
        void Unsubscribe()
        {
            if(subCounter>0){
                subCounter--;
            }
        }
        void publishVideo(string videoName){
            uploadVideo.push_back(videoName);
        }
};
class funnychannel : public youTubeChannel{
    public:
        funnychannel(string name,string ownerName):youTubeChannel(name,ownerName){

        }
        void about()
        {
            cout<<endl<<"This channel is created to give fun."<<endl;
        }
};
int main()
{
    //For child class
    funnychannel fun("Mahara","Ena");
    fun.publishVideo("Hirak Raja");
    fun.Subscribe();
    fun.getData();
    fun.about();
    //For base class
    cout<<endl<<endl;
    youTubeChannel ytchanel("Code Master","sudarshan");
    ytchanel.Subscribe();
    ytchanel.Unsubscribe();
    ytchanel.publishVideo("Java");
        //we can not use about() method in this object;
    ytchanel.getData();
    return 0;
}