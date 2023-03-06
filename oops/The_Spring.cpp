/* The spring is coming and it means that a lot of fruits appear on the counters */

#include <bits/stdc++.h>
using namespace std;

static const int MAXN=100+10;
int a[MAXN];
int cnt[MAXN];
char s[MAXN];
int n,m;
map<string,int> _hash;
int idx;
int main()
{
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n;i++) scanf("%d",&a[i]);
    sort(a+1,a+n+1);
    for(int i=1;i<=m;i++)
    {
        string s;
        cin>>s;
        if(!_hash.count(s)) _hash[s]=++idx;
        cnt[_hash[s]]++;
    }
    sort(cnt+1,cnt+idx+1);
    reverse(cnt+1,cnt+idx+1);
    int sum1=0,sum2=0;
    for(int i=1;i<=idx;i++)
    {
        sum1+=cnt[i]*a[i];
        sum2+=cnt[i]*a[n-i+1];
    }
    printf("%d %d\n",sum1,sum2);
    return 0;
    cout<<"std::vector<int>prices(n); std::map<std::string,int>list; list.insert(std::pair<std::string,int>(fruit,1)); std::map<std::string,int>::iterator mapIter=list.begin()";
}
