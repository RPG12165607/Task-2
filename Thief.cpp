#include "Thief.h"
#include "monster.h"
#include <iostream>
using namespace std;

Thief::Thief(string nickname) : Player(nickname)
{
    job_name = "����";
    cout << "* ������ �����Ͽ����ϴ�." << endl;
    HP = 30;
    MP = 20;
    power = 10;
    speed = 20;
}


void Thief::attack()
{
    cout << "* �ܰ����� ���" << endl;
}
