#include<bits/stdc++.h>
using namespace std;
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
    // // Finding the second smallest element
    // // in the set using * because
    // //  find_by_order returns an iterator
    // cout << *(o_set.find_by_order(1)) 
    //      << endl;
  
    // // Finding the number of elements
    // // strictly less than k=4
    // cout << o_set.order_of_key(4) 
    //      << endl;
#define ll long long
ll mod;
long long takat(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=(c*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return c;
}
// ll arr[10000001];
// void spf(){
//     for(ll i=2;i<10000001;i+=2){
//         arr1[i]=2;
//     }
//     for(ll i=3;i<10000000;i+=2){
//         arr1[i]=i;
//     }
//     for(ll i=3;i<10000000;i++){
//         for(ll j=i*i;j<10000001;j+=i){
//             arr1[j]=min(arr1[j],i);
//         }
//     }
// }
ll n,t,m;
int main(){
    ll mod=1e9+7;
    ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
    cin>>t;
    while(t--){
    cin>>n;
    ll arr[n],arr1[n+1];
    for(int i=0;i<n;i++) cin>>arr[i];
    bool b1=1;
    for (int i=n-1;i>-1;i--){
        arr1[i]=0;
    }
    arr1[n]=0;
    for (int i=0;i<n;i++){
        if(arr[i]>n){
            b1=0;
            continue;
        }
        arr1[arr[i]-1]++;
    }
    for (int i=n-1;i>-1;i--){
        arr1[i]+=arr1[i+1];
        if(arr1[i]!=arr[i]) b1=0;
    }
    if(b1) cout<<"YES\n";
    else cout<<"NO\n";
    }
}