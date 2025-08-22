#include "warrior.h"
#include "monster.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) 
{
    job_name = "전사";
    cout << "* 전사로 전직하였습니다." << endl;
    HP = 40;
    power = 15;
    defence = 15;
}


void Warrior::attack() 
{
    cout << "* 검을 휘두른다" << endl;
}
