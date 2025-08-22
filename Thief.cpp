#include "Thief.h"
#include "monster.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "도적";
    cout << "* 도적로 전직하였습니다." << endl;
    HP = 30;
    MP = 20;
    power = 10;
    speed = 20;
}


void Thief::attack()
{
    cout << "* 단검으로 찌른다" << endl;
}
