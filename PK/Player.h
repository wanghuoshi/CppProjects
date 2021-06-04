#pragma once
#include "Player.h"
//裁判
class Referee
{
public:
	Referee();
	~Referee();
	void entrance(Player *p1, Player *p2);  //入场
	void decide();   //仲裁一个回合
	bool hasWinner(); //仲裁是否存在胜出者
	void outRefereeInfo();//输出最终仲裁信息
private:
	Player* players[2];
};

	Player(string name);
	~Player();
	virtual string getName();
	virtual void Attack(IPlayer *enemy);		//攻击对方
	virtual void onAttack(Fight* fightData);	//受到攻击动作
	virtual int getBlood(){ return this->_blood; }   //得到当前血量
	virtual void study();	//学习武艺
private:
	Fight* fight();  //得到战斗招式
	Defense* defense();   //得到防御招式
	void computDamage(Fight* fightData, Defense* defenseData);	//计算损失

	vector<Fight> _fightList;  //学会的进攻招式
	vector<Defense> _defense;  //学会的防御招式

	Fight _sustained;	//保留持续伤害效果
	int _sustainedNum;			//剩余持续伤害次数
	string _name;
	int _blood;
};

