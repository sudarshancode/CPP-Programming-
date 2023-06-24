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
        int checkContent=0;
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
        void check()
        {
            if(checkContent<5)
            {
                cout<<Name<<" has bad content"<<endl;
            }else{
                cout<<Name<<" has good content"<<endl;
            }
        }
};
class funnychannel : public youTubeChannel{
    public:
        funnychannel(string name,string owner_name):youTubeChannel(name,owner_name){

        }
        void about()
        {
            cout<<endl<<ownerName<<" uploads video."<<endl;
            checkContent++;
        }
};
class danceChannel:public youTubeChannel{
    public:
        danceChannel(string name,string owner_name):youTubeChannel(name,owner_name)
        {

        }
        void about()
        {
            cout<<endl<<ownerName<<" uploads video."<<endl;
            checkContent++;
        }
};
int main()
{
    //For child class
    funnychannel fun("Mahara","Mahesh");
    fun.publishVideo("Hirak Raja");
    fun.publishVideo("Tui Chaara");
    fun.Subscribe();
    fun.getData();
    fun.about();
    fun.about();
    fun.about();
    fun.about();
    fun.about();
    fun.about();
    youTubeChannel *yt1= &fun;
    yt1->check();

    cout<<endl<<endl<<endl;

    danceChannel dac("Lohalu","Ajay");
    dac.publishVideo("Valo basi");
    dac.publishVideo("Tera jan");
    dac.Subscribe();
    dac.getData();
    dac.about();
    youTubeChannel *yt2= &dac;
    yt2->check();
    return 0;
}