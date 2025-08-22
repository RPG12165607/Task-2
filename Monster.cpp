#include "Monster.h"
#include "Player.h"
#include <iostream>
using namespace std;

Monster::Monster(string name) {
    name = "몬스터"; // 몬스터의 이름
    HP = 10; // 몬스터의 HP
    power = 10; // 몬스터의 공격력
    defence = 10; // 몬스터의 방어력
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
        cout << "데미지를 1 받았습니다";
        attack_damage = 1;
    }

    else
    {
        cout << "데미지를 " << attack_damage << " 받았습니다";
    }

    int newHP = getHP() - attack_damage;

    bool AandD = setHP(newHP);

    if (AandD)
    {
        cout << "남은 HP " << getHP() << endl;
    }
    else
    {
        cout << "YOU DIED" << endl << "몬스터가 승리 했습니다";
    }
}