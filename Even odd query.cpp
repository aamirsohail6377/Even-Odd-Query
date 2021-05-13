#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int n;
int arr[1000000];
find(int x,int y)
{
    if(x>y) return 1;
    int ans;
    ans = pow(arr[x],find(x+1,y));
    return ans;
}
int main(){
    cin>>n;
    for(int i=1;i<=n;i++){
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int x,y;
    for(int i=0;i<q;i++){
        cin>>x>>y;
        int a=find(x,y);
        if(a%2==0){
            cout<<"Even";
        }
        else{
        	cout<<"Odd";
		}
    }
}
