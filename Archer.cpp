#include "Archer.h"
#include "monster.h"
#include <iostream>
using namespace std;

Archer::Archer(string nickname) : Player(nickname)
{
    job_name = "�ü�";
    cout << "* �ü��� �����Ͽ����ϴ�." << endl;
    HP = 20;
    MP = 30;
    power = 10;
    accuracy = 20;
}


void Archer::attack()
{
    cout << "* �ܰ����� ���" << endl;
}