#include<iostream>
#include<list>
using namespace std;
class youTubeChannel{
private:
        string Name;
        string ownerName;
        int subCounter;
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
int main()
{
    youTubeChannel ytchanel("Code Master","sudarshan");
    ytchanel.Subscribe();
    ytchanel.Subscribe();
    ytchanel.Subscribe();
    ytchanel.Subscribe();
    ytchanel.Unsubscribe();

    ytchanel.publishVideo("C++");
    ytchanel.publishVideo("C Programming");
    ytchanel.publishVideo("Java");
    ytchanel.getData();
    return 0;
}