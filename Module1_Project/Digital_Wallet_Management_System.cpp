#include <bits/stdc++.h>
#include<map>
using namespace std;


int main() {
    int n;
    cin>>n;
    map<int,int>balance;
    for(int i=0;i<n;i++){
        int user_id,amt;
        cin>>user_id>>amt;
        balance[user_id]=amt;
    }
    int q;
    cin>>q;
    while(q--){
        int from,to,amt;
        cin>>from>>to>>amt;
        if(amt<=balance[from]){
            balance[from]-=amt;
            balance[to]+=amt;
            cout<<"Success"<<endl;
        }
        else{
            cout<<"Failure"<<endl;
        }
    }
    cout<<"\n";
    multimap<int,int>sorted;
    for(auto pair: balance){
        sorted.insert({pair.second,pair.first});
    }
    for(auto pair:sorted){
        cout<<pair.second<<" "<<pair.first<<endl;
    }
    return 0;
}
