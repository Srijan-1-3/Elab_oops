/* Raina usually likes to play cricket, but now, he is bored of playing it too much, so he is trying new games with strings. */

#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int t, n, i, cnt1, cnt2;
	char S[100],R[100];
	cin>>t;
	while(t--)
	{
	    cnt1=0, cnt2=0;
	    cin>>n;
	    cin>>S>>R;
	    for(i=0;i<n;i++)
	    {
	        if(S[i]=='1')
	        cnt1++;
	        if(R[i]=='1')
	        cnt2++;
	    }
	    if(cnt1==cnt2)
	    cout<<"YES"<<endl;
	    else
	    cout<<"NO"<<endl;
	    
	}
	return 0;
}
