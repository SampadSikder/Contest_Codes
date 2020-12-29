#include<bits/stdc++.h>
using namespace std;
int SmallestElement(int arr[], int n);
int main(){

    long int T;
    cin>>T;
    while(T--){
        int n,k;
        cin>>n>>k;
        int diff[k];
        int a=n,b;
        for(int i=0;i<k;i++){
            while(n%100!=0){
                n*=10;
                b=n;
            }
        diff[i]=b-a;
        a=diff[i];
        }
        cout<<SmallestElement(diff,k)<<endl;
        }

}


int SmallestElement(int arr[], int n)
{
     int temp = arr[0];
        for(int i=0; i<n; i++) {
            if(temp>arr[i])
                {
                temp=arr[i];
      }
   }
   return temp;
}
