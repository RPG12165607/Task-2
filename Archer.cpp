#include "Archer.h"
#include "monster.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "궁수";
    cout << "* 궁수로 전직하였습니다." << endl;
    HP = 20;
    MP = 30;
    power = 10;
    accuracy = 20;
}


void Archer::attack()
{
    cout << "* 단검으로 찌른다" << endl;
}