/* Write a C program to get the column number
 (integer value) that corresponds to a column title as it appears in an Excel sheet.
*/
#include <iostream>
#include<cstring>
#include<math.h>
using namespace std;
int excelColumn(string ch)
{
    int result =0;
    int i=ch.size()-1;
      for(char c : ch){
            int d=c -'A'+1;
            result =(d* pow(26,i))+result;
            i--;
        }  
    return result;
}

int main() {
    
    int x=excelColumn("A");
    cout<<x;

    return 0;
}
