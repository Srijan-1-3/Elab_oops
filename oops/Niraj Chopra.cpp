/* Since the day Niraj Chopra have won Gold in Tokyo Olympics the grace for Javelin have been huge among youths. */

#include <iostream>
using namespace std;
template <class T>
T Javelin(T qnt,T price){
    return qnt*price;
}

int main()
{
    int numofjavelin,priceofavelin;
    cin>>numofjavelin>>priceofavelin;
    cout<<Javelin(numofjavelin,priceofavelin);
    return 0;
}
