#include <bits/stdc++.h>
using namespace std;

void shuvra(){
    int cnt, sum=0, la=0, lb=0, i, j, k=0;
    string a, b, s="";
    cin>>a>>b;
    la=a.size(), lb=b.size();
    int ar[la+1][lb+1];
    
    for(i=0;i<=la;i++){
        for(j=0;j<=lb;j++){
            if(i==0||j==0)
                ar[i][j]=0;
            else if(a[i-1]==b[j-1]){
                ar[i][j]=1+ar[i-1][j-1];
            }
            else{
                ar[i][j]=max(ar[i-1][j], ar[i][j-1]);
            }
        }
    }
    for(i=0;i<la;i++){
        for(j=0;j<lb;j++){
            sum=max(ar[i][j], ar[i+1][j+1]);
        }
    }
    char chr[sum];
    int tmp=sum;
    while(i>0 && j>0){
        if(a[i-1]==b[j-1]){
            chr[sum-1]=a[i-1], i--, j--, sum--;
        }
        else if(ar[i-1][j]>ar[i][j-1])
            i--;
        else
            j--;
    }
    for(i=0;i<tmp;i++)
        cout<<chr[i];

}

int main(){
    shuvra();
} 

