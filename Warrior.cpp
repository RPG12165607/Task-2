#include "warrior.h"
#include "monster.h"
#include <iostream>
using namespace std;

Warrior::Warrior(string nickname) : Player(nickname) 
{
    job_name = "����";
    cout << "* ����� �����Ͽ����ϴ�." << endl;
    HP = 40;
    power = 15;
    defence = 15;
}


void Warrior::attack() 
{
    cout << "* ���� �ֵθ���" << endl;
}
