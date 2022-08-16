#include <iostream>
using namespace std;
int n;
string word;
int main()
{
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>word;
        int len=word.length();
        for (int i=0; i<len; i++)
        {
           int counter=1;
           while(word[i]==word[i+1])
           {
               counter++;
               i++;
           }
           if(counter>=3)
           {
               cout<<word[i]<<counter;
           }
           if(counter==2)
           {
               cout<<word[i-1]<<word[i];
           }
           if(counter==1)
           {
               cout<<word[i];
           }
        }
        cout<<endl;
    }
    return 0;
}
