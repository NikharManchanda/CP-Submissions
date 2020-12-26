 #include <bits/stdc++.h>
using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin>>t;
  while(t--)
  {
    int n;
    cin>>n;
    string str;
    int c=0;
    cin>>str;
    set<int> s;
    for(int i=0;i<n;i++)
    {
      if(str[i]=='-')
        s.insert(i),s.insert((i+1)%n);
    }
    set<char> s1;
    for(int i=0;i<n;i++)
      {
         s1.insert(str[i]);
      }
      if(s1.size()==1)
      {
        cout<<n<<endl;
      }
      else if(s1.size()==2)
      {
        if(s.size()==0)
        {
          cout<<0<<endl;
        }
        else
        {
          cout<<n<<endl;
        }
      }
      else
    cout<<s.size()<<endl;

  }
  
  
  return 0;
}