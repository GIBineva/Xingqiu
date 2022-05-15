#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
#include <cstring>
using namespace std;

void cardPicker1() {
    const char* card1 = R"CARD1(
        ///////// 
        /       / 
        /   0   / 
        / ----- / 
        /   1   / 
        /       / 
        /////////)CARD1";

    const char* card2 = R"CARD2(
        ///////// 
        /       / 
        /   1   / 
        / ----- / 
        /   0   / 
        /       / 
        /////////)CARD2";

    const char* card3 = R"CARD3(
        ///////// 
        /       / 
        /   1   / 
        / ----- / 
        /   1   / 
        /       / 
        /////////)CARD3";

    const char* card4 = R"CARD4(
        ///////// 
        /       / 
        /   0   / 
        / ----- / 
        /   0   / 
        /       / 
        /////////)CARD4";

    int randNum;

    srand(time(NULL));
    for (int i = 0; i < 6; i++) {
        randNum = 1 + rand() % 4;

        switch (randNum)
        {
        case 1:
            cout << card1;
            break;
        case 2:
            cout << card2;
            break;
        case 3:
            cout << card3;
            break;
        case 4:
            cout << card4;
            break;
        }
    }


}
int main()
{
    cardPicker1();
}
