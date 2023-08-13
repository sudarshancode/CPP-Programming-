#include<iostream>
using namespace std;
class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n>0)
        {
            if(n==1)
            {
                return true;
            }else{
                while(n%2==0){
                    n=n/2;
                    if(n==1)
                    {
                        return true;
                        break;
                    }
                }
            }
        }
        return false;
    }
};
int main()
{
  Solution s1;
  int x;
  cout<<"Enter value:";
  cin>>x;
  cout<<s1.isPowerOfTwo(x)<<endl;
}
