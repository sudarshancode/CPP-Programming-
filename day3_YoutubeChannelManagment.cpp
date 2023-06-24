#include<iostream>
#include<list>
using namespace std;
class youTubeChannel{
private:
        string Name;
        int subCounter=0;
        list<string> uploadVideo;
    //use protected access specifier because  ownerName data meber can use in funnyChannel class
protected:
        string ownerName;
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
        funnychannel(string name,string owner_name):youTubeChannel(name,owner_name){

        }
        void about()
        {
            cout<<endl<<ownerName<<" is a owner of this channel"<<endl;
        }
};
int main()
{
    //For child class
    funnychannel fun("Mahara","Ena");
    fun.publishVideo("Hirak Raja");
    fun.Subscribe();
    fun.about();

    return 0;
}