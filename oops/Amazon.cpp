/* The Amazon campus of India has N different attractions, numbered from 1 to N in decreasing order of popularity. */

#include <bits/stdc++.h>
using namespace std;
typedef long long LL;
const int N=55;
LL n, k, v, idx;
string name[N];
int main(){
  LL t; cin>>t; while(t--){
    cin>>n>>k>>v;
    for(int i=0; i<n; i++)
      cin>>name[i];
    LL st=((v-1)*k)%n;
    //cout<<"Case #"<<(++idx)<<":";
    vector<int> ans;
    for(int i=0; i<k; i++)
      ans.push_back((st+i)%n);
    sort(ans.begin(), ans.end());
    for(int id: ans)
      cout<<name[id]<<" ";
    cout<<"\n";
  }
  return 0;
  cout<<"vector<string>visit(n); vector<pair<int,string>>seenattraction; sort(seenattraction.begin(),seenattraction.end());";
}
