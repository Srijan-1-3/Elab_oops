/* Roni is a dean of a department in MIT */

#include <bits/stdc++.h>
using namespace std;
template <class Exam>
Exam Sucess(Exam n,Exam m){
    vector<string> marks(n);
    for (size_t i = 0; i < n; ++i)
        cin >> marks[i];
    vector<bool> successful(n, false);
    for (size_t subject = 0; subject < m; ++subject){
        char best = '0';
        for (size_t i = 0; i < n; ++i){
            if (marks[i][subject] > best)
                best = marks[i][subject];
        }
        for (size_t i = 0; i < n; ++i){
            if (marks[i][subject] == best)
                successful[i] = true;
        }
    }
    cout << count(successful.begin(), successful.end(), true);
    return 0;
}
int main(){
    int n,m;
    cin>>n>>m;
    Sucess(n,m);
}
