#include "Magician.h"
#include "monster.h"
#include <iostream>
using namespace std;

Magician::Magician(string nickname) : Player(nickname)
{
    job_name = "������";
    cout << "* ������� �����Ͽ����ϴ�." << endl;
    MP = 40;
    accuracy = 15;
    speed = 15;
}


void Magician::attack()
{
    cout << "* ������ ����" << endl;
}
