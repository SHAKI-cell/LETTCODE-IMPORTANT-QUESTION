#include<iostream>
#include<vector>
#include<algorithm>
#include<map>

using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    map< int, int>mp;

    int i=0;
    int j=0;
    int count=0;
    while(j<n){
      mp[v[j]]++;
      while(abs(mp.rbegin()->first - mp.begin()->first) > 2){ // out of bound
        // srink window
         mp[v[i]]-=1;
         if(mp[v[i]]==0){
            mp.erase(v[i]);
         }
         i++;
      }
      count+=j-i+1;
      j++;
    }
    cout<<count<<endl;
}