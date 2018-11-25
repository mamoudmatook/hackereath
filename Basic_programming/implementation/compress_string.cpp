
// Sample code to perform I/O:

#include <iostream>
#include <string>
#define ll long long int 
using namespace std;
int isvowel(char c)
{
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
}
string removevowels(string str)
{
    ll l_index=0;
    ll count=1;
    string ss=str;
    //str+=string(1,'#');
    for(ll i=1;i<str.length();i++)
    {
        if(str[i]==str[i-1]&&isvowel(str[i]))
        {
            count++;
            l_index=i;
           
        }
        else
        {
            if (count>1)
            {
                ss.replace(l_index-count+1,count,string (1,str[i-1]));
                count=1;
            }
        }
    }
    if(count>1)
    ss.replace(l_index-count+1,count,string (1,str[str.length()-1]));
    
    return ss;
}
string contoN(string str)
{  
    ll  l_index=0;
    
    ll count=1;
    string ss=str;
   // str+=string(1,'#');
    for (ll i=1;i<str.length();i++)
    {
        if(!isvowel(str[i])&&!isvowel(str[i-1]))
         {
            count++;
            l_index=i;
         }
            else
            {
                if (count>1)
                {
                    ss.replace(l_index-count+1,count,to_string(count));
                    count=1;
                }
                
                
            }
            
            
        
    }
    
    //for (ll i =0;i<ss.length();i++)
    //if(!isvowel(ss[i]))
    //ss.replace(i,1,to_string(1));
    return ss;
}

int main() {
	int T;
	cin >> T;
	while(T)
	{
	    long long int N;
	    cin>>N;
	    string str;
	    cin>>str;
	    str[0]=toupper(str[0]);
	    string str1=contoN(str.substr(1));
	    string str2=removevowels(str1);
	    cout<<str[0]+str2<<endl;
	    T--;
	}
	// Reading input from STDIN
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

