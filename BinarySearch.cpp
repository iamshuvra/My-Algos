#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long int m,l,s,p,a[10000],n,i,j,k,g,f;
    cout<<"Enter total numbers of elements:"<<endl;
    cin>>n;
    cout<<"Enter the numbers:";
    for(i=0;i<n;i++)
        cin>>a[i];
    cout<<"Enter your search number:";
    cin>>g;
    sort(a,a+n);
    f=0,l=n-1;

    while(f<=l){
        m=(f+l)/2;
        if(a[m]==g){
            cout<<"found"<<endl;
            break;
        }

        else if(a[m]<g){
            f=m+1;
          //  cout<<"f"<<f<<endl;
        }
       else if(a[m]>g){
        l=m-1;
      //  cout<<"l"<<endl;
    }

    }
    if(l<f)
        cout<<"Not found"<<endl;
}
