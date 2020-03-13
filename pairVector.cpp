#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> v;
    vector<int> :: iterator it;
    vector<int> :: reverse_iterator rit;
    int i,n,j;
    for(i=0;i<10;i++)
    {
        v.push_back(i);
       // cin>>n;
    }

    it=v.begin();
   v.insert(it+2,23);
   v.erase(it+7);

   for(it=v.begin();it!=v.end();it++)     //iterator vector
        cout<<*it<<" "<<endl;

    for(rit=v.rbegin();rit!=v.rend();rit++)     //reverse vector
        cout<<*rit<<" "<<endl;
   //for(i=0;i<3;i++)
     //   cout<<v[i][j]<<" "<<endl;
    //cout<<v.capacity()<<endl;
    //cout<<v.max_size()<<endl;
    //cout<<!(v.empty())*(-1)<<endl;
}
