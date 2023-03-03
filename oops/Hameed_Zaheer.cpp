/* Hameed and Zaheer were involved in the discussion on cricket. */

#include <iostream>
using namespace std;
template <class T>
void InterchangeFavPlayers(T &player1,T &player2){
    cout<<player2<<" "<<player1;
}
int main()
{
    string player1,player2;
    cin>>player1>>player2;
    InterchangeFavPlayers(player1,player2);
    return 0;
}
