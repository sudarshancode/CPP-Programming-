#include<iostream>
using namespace std;
void occur(int arr[],int size){
    int i=0;
    while(i<size){
        int count=0;
        for(int j=i;j<size;j++)
        {
            if(arr[i]==arr[j]){
                count++;
            }
        }
        cout<<arr[i]<<" is "<<count<<" times"<<endl;
        i++;
        for(int l=0;l<i;l++){
            if(arr[l]==arr[i]){
                i++;
            }
        }
    }
}
int main()
{
    int arr[7]={2,3,2,2,5,1,3};
    occur(arr,7);

    return 0;
}
