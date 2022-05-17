#include<iostream>
using namespace std;

int main()
{
    int T;
    string s;
    cin>>T;

    while (T--)
    {
        cin>>s;
        int length = s.length();
        for(int i=0; i<length; i++)
        {   
            if(length<5)
                break;
            if(s[i]=='p')
            {
                if(s[i+1] == 'a')
                {
                    if(s[i+2]=='r')
                    {
                        if(s[i+3]=='t')
                        {
                            if(s[i+4]=='y')
                            {
                                s[i+2]='w';
                                s[i+3]='r';
                                s[i+4]='i';
                            }
                        }
                    }
                }
            }
        }
        cout<<s<<endl;
    }
    
}