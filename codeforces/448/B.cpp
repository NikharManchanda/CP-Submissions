#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
     #ifndef ONLINE_JUDGE
 
    freopen("Ip-A.txt","r",stdin);
    freopen("Op-A.txt","w",stdout);
 
   #endif
 
 string str,s;
 cin>>str>>s;
 if(str.length()<s.length())
 {
 	cout<<"need tree";
 }
 else
 {
 	string s1,s2;
 	map <char,int> mp,m;
 	for(int i=0;i<s.length();i++)
 	{
 		mp[s[i]]++;
 	}
 	for(int i=0;i<str.length();i++)
 	{
 		m[str[i]]++;
 	}
 	for(int i=0;i<s.length();i++)
 	{
 		if(m[s[i]]<mp[s[i]])
 		{
 			cout<<"need tree";
             return 0;
 		}
 	}
    
    if(s.length()==str.length())
    {
    	cout<<"array";
    	return 0;
    }
    int j=0,idx=0,c=0;
    for(int i=0;i<s.length();i++)
    {
    

    	for(j=idx;j<str.length();j++)
    	{
             if(s[i]==str[j])
             {
             	c++;
             	idx=j+1;
             	break;
             }
    	}
    }
    if(c==s.length())
    {
    	cout<<"automaton";
    	return 0;
    }
    else
    {
    	cout<<"both";
    	return 0;
    }

 }
 


 return 0;
}