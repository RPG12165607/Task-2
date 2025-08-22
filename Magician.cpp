#include "Magician.h"
#include "monster.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "마법사";
    cout << "* 마법사로 전직하였습니다." << endl;
    MP = 40;
    accuracy = 15;
    speed = 15;
}


void Magician::attack()
{
    cout << "* 마법을 쓴다" << endl;
}
