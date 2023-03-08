/* Senthan Amuthan is taking part in elections in his Hometown Thanjai. It is the final round. */

#include <iostream>
using namespace std;
class Election{
    public:int Win(int n){
        int x,sum=0;
        for(int i=0;i<n;i++){
            cin>>x;
            sum+=x;
        }
        cout<<2*sum/n+1;
        return 1;
    }
};
int main()
{
    int n;
    cin>>n;
    Election Votes;
    Votes.Win(n);
	return 0;
}
