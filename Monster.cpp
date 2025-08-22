#include "Monster.h"
#include "Player.h"
#include <iostream>
using namespace std;

Monster::Monster(string name) {
    name = "����"; // ������ �̸�
    HP = 10; // ������ HP
    power = 10; // ������ ���ݷ�
    defence = 10; // ������ ����
    speed = 10;
}

string Monster::getName()
{
    return name;
}

int Monster::getHP()
{
    return HP;
}

int Monster::getPower()
{
    return power;
}

int Monster::getDefence()
{
    return defence;
}

int Monster::getSpeed()
{
    return speed;
}

void Monster::setName(string name)
{
    this->name = name;
}

bool Monster::setHP(int HP)
{
    this->HP = HP;
    if (HP > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Monster::setPower(int power)
{
    this->power = power;
}

void Monster::setDefence(int defence)
{
    this->defence = defence;
}

void Monster::setSpeed(int speed)
{
    this->speed = speed;
}

void Monster::attack(Player* player)
{
    int attack_damage = 0;
    attack_damage = power - getDefence();
    
    if (attack_damage <= 0)
    {
        cout << "�������� 1 �޾ҽ��ϴ�";
        attack_damage = 1;
    }

    else
    {
        cout << "�������� " << attack_damage << " �޾ҽ��ϴ�";
    }

    int newHP = getHP() - attack_damage;

    bool AandD = setHP(newHP);

    if (AandD)
    {
        cout << "���� HP " << getHP() << endl;
    }
    else
    {
        cout << "YOU DIED" << endl << "���Ͱ� �¸� �߽��ϴ�";
    }
}