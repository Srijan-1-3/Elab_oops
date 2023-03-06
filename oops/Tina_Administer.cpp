/* Tina administer a large cluster of computers with hard drives that uses various file systems to store data. */

#include <algorithm>
#include <iostream>
#include <vector>
using namespace std;

int main() {
  int N, a, b;
  while (cin>>N) {
    vector<pair<int,pair<int,int>>>StorageDrives;
    for (int i = 0; i < N; i++) {
      cin>>a>>b;
      StorageDrives.push_back(make_pair((b>a) ? a : 2000000001-b, make_pair(a, b)));
    }

    long long ret = 0, cap = 0;
    sort(StorageDrives.begin(),StorageDrives.end());
    int z=StorageDrives.size();
    for (int i = 0; i < z; i++) {
      if (cap < StorageDrives[i].second.first) {
        ret += StorageDrives[i].second.first - cap;
        cap = StorageDrives[i].second.first;
      }
      cap += StorageDrives[i].second.second - StorageDrives[i].second.first;
    }

    cout << ret << endl;
  }
}
