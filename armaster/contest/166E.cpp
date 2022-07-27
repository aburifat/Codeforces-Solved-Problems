#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long queen_mother=1, mother=0, children=0, age_of_empire;
    cin>>age_of_empire;
    while(age_of_empire--)
    {
        ///queen mother gave birth to 3 children and die in every age.

        ///the mothers became the queen mothers after giving birth to 2 children
        ///in every age.

        ///children became mother after a age.

        ///if the number of children is greater than 1000000007, 1000000007 children
        ///died instand.

        children=(queen_mother*3+mother*2)%1000000007;
        queen_mother=mother;
        mother=children;
    }
    ///number of queen mother at the age after the age of empire.
    cout<<queen_mother<<endl;
    return 0;
}