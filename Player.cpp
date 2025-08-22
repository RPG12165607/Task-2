#include "Player.h"
#include <iostream>

Player::Player(string nickname)
{
    job_name = "초보자";
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
    cout << "* 현재 능력치" << endl;
    cout << "닉네임: " << nickname << endl;
    cout << "Lv. " << level << endl;
    cout << "HP: " << HP << endl;
    cout << "MP: " << MP << endl;
    cout << "공격력: " << power << endl;
    cout << "방어력: " << defence << endl;
    cout << "정확도: " << accuracy << endl;
    cout << "속도: " << speed << endl;
    cout << "------------------------------------" << endl;
}
