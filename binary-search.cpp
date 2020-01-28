#include<bits/stdc++.h>
using namespace std;

int binsrch(int flag,vector<int> foo , int r ,int l){
        if(r >=l ){
            int mid = l+(r-l) /2;
            if (foo[mid]==flag)
                return mid;
            if (foo[mid]>flag)
                return binsrch(flag,foo,mid -1 ,l);
            return binsrch(flag,foo,l,mid+1);
        }
        return -1;

};
int main(){
    vector<int> arr;
    int count = 5;
    int inp;
    for (int i = 0; i < count; i++)
    {
        cin>>inp;
        arr.push_back(inp);
    }
    int find;
    cin>>find;
    int ans = binsrch(find,arr,arr.size()-1,0);
    if(ans == -1)
        cout<<"Not Found";
    else
        cout<<ans;
}