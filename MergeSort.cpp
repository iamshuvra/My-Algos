#include <bits/stdc++.h>
using namespace std;

void Merge(int a[],int la[],int ra[],int l,int r ){
    int i=0,j=0,k=0;
    while(i<l && j<r){
        if(la[i]<=ra[j])
            a[k]=la[i],k++,i++;
        else
            a[k]=ra[j],k++,j++;
    }
    while(i<l)
        a[k]=la[i],i++,k++;
    while(j<r)
        a[k]=ra[j],j++,k++;

}
void MergeSort(int a[],int n){
    int i;
    if(n<2) return;

   int m=n/2.0;
   int la[m+1],ra[m+1];

   for(i=0;i<m;i++)
    la[i]=a[i];
   for(i=m;i<n;i++)
    ra[i-m]=a[i];

   MergeSort(la,m);
   MergeSort(ra,n-m);
   Merge(a,la,ra,m,n-m);
    free(la),free(ra);

}
int main(){
    int a[10000];
    int n;
    cin>>n;
    for(int z=0;z<n;z++)
        cin>>a[z];
    MergeSort(a,n);
    for(int t=0;t<n;t++)
        cout<<a[t]<<" ";
}
