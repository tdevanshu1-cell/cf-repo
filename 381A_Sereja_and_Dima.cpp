#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, sereja = 0, dima = 0;
    cin >> n;
    vector<int> cards(n);
    for (int &c : cards)
    {
        cin >> c;
    }
 
    
    bool sereja_turn = true;
 
    while (!cards.empty())
    {
        int chosen_card;
 
        
        if (cards.front() > cards.back())
        {
            chosen_card = cards.front();
            cards.erase(cards.begin()); // Remove from front
        }
        else
        {
            chosen_card = cards.back();
            cards.pop_back();          
        }
 
        
        if (sereja_turn)
        {
            sereja += chosen_card;
        }
        else
        {
            dima += chosen_card;
        }
 
        
        sereja_turn = !sereja_turn;
    }
 
    cout << sereja << " " << dima;
 
    return 0;
}