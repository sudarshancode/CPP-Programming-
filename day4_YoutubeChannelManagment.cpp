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
            checkContent++;
        }
};
class funnychannel : public youTubeChannel{
    public:
        funnychannel(string name,string owner_name):youTubeChannel(name,owner_name){

        }
        void about()
        {
            cout<<endl<<ownerName<<" is a owner of this channel"<<endl;
            if(checkContent<5){
                cout<<ownerName<<" is a bad channel"<<endl;
            }else{
                cout<<ownerName<<" is a good channel"<<endl;
            }
        }
};
class danceChannel:public youTubeChannel{
    public:
        danceChannel(string name,string owner_name):youTubeChannel(name,owner_name)
        {

        }
        void about()
        {
            cout<<endl<<ownerName<<" is a owner of this channel"<<endl;
            if(checkContent<5){
                cout<<ownerName<<" is a bad channel"<<endl;
            }else{
                cout<<ownerName<<" is a good channel"<<endl;
            }
        }
};
int main()
{
    //For child class
    funnychannel fun("Mahara","Ena");
    fun.publishVideo("Hirak Raja");
    fun.publishVideo("Hasi khusi");
    fun.publishVideo("Beder meye");
    fun.publishVideo("Faltu katha");
    fun.publishVideo("chhinibini");
    fun.publishVideo("Tui Chaara");
    fun.Subscribe();
    fun.getData();
    fun.about();

    cout<<endl<<endl<<endl;

    danceChannel dac("Lohalu","Ajay");
    dac.publishVideo("Mera Dil");
    dac.publishVideo("Valo basi");
    dac.publishVideo("Tera jan");
    dac.Subscribe();
    dac.Subscribe();
    dac.Subscribe();
    dac.Subscribe();
    dac.getData();
    dac.about();

    return 0;
}