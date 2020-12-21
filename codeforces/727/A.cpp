 #include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int a,b;
    cin>>a>>b;
    vector<int> v;
    while(1)
    {
      if(b<a)
      {
        cout<<"NO";
        return 0;
      }
      if(b==a)
      {
        cout<<"YES"<<endl;
        v.push_back(b);
        break;
      }

        if(b%2==0)
        {
          v.push_back(b);
          b=b/2;
        }
        else if(b%10==1)
        {
          v.push_back(b);
          b=b/10;
        }
        else
        {
          cout<<"NO";
          return 0;
        }
    }
    cout<<v.size()<<endl;
    for(int i=v.size()-1;i>=0;i--)
    {
      cout<<v[i]<<" ";
    }

 return 0;
}