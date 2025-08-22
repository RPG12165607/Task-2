#include "Player.h"
#include "Monster.h"
#include <iostream>

Player::Player(string nickname)
{
    job_name = "�ʺ���";
    this->nickname = nickname;
    level = 1;
    HP = 10;
    MP = 10;
    power = 5;
    defence = 5;
    accuracy = 5;
    speed = 5;
}

string Player::getJobName()
{
    return job_name;
}

string Player::getNickname()
{
    return  nickname;
}

int Player::getLevel()
{
    return level;
}

int Player::getHP()
{
    return HP;
}

int Player::getMP()
{
    return MP;
}

int Player::getPower()
{
    return power;
}

int Player::getDefence()
{
    return defence;
}

int Player::getAccuracy()
{
    return accuracy;
}

int Player::getSpeed()
{
    return speed;
}

void Player::setNickname(string nickname)
{
    this->nickname = nickname;
}

bool Player::setHP(int HP)
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

bool Player::setMP(int MP)
{
    this->MP = MP;
    if (MP > 0) 
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void Player::setPower(int power)
{
    this->power = power;
}

void Player::setDefence(int defence)
{
    this->defence = defence;
}

void Player::setAccuracy(int accuracy)
{
    this->accuracy = accuracy;
}


void Player::setSpeed(int speed)
{
    this->speed = speed;
}


void Player::printPlayerStatus() {
    cout << "------------------------------------" << endl;
    cout << "* ���� �ɷ�ġ" << endl;
    cout << "�г���: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "���ݷ�: " << power << endl;
    cout << "����: " << defence << endl;
    cout << "��Ȯ��: " << accuracy << endl;
    cout << "�ӵ�: " << speed << endl;
    cout << "------------------------------------" << endl;
}

void Player::attack(Monster* monster)
{
    int attack_damage = 0;
    attack_damage = power - getDefence();

    if (attack_damage <= 0)
    {
        cout << "1 ������";
        attack_damage = 1;
    }

    else
    {
        cout << attack_damage << " ������";
    }

    int newHP = getHP() - attack_damage;

    bool AandD = setHP(newHP);

    if (!AandD)
    {
        cout << "���Ϳ��Լ� �¸��߽��ϴ�.";
    }
}