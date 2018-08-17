#include <iostream>
#include <ctime>
#include <string>
#include <windows.h>
using namespace std;


int key = 0;
int ultimateWeapon = 0;
bool clear;
void printCharacter(struct characters *character);
int levelUp(int level);
void weaponShop(struct characters &player);
void drugStore(struct characters &player);
void treasure(struct characters &player);
void monster(struct characters &player);
void boss(struct characters &player);



struct characters
{
	string name;
	double health;
	double magic;
	int level;
	int attack;
	int defense;
	int money;
};



int main()
{
	int characterChoice, worldChoice;
	characters MonkeyKing;
	characters Pigsy;
	characters Sandy;
	characters Tripitaker;
	characters player;

	MonkeyKing.name = "Monkey King";
	MonkeyKing.level = 1;
	MonkeyKing.health = 200;
	MonkeyKing.magic = 100;
	MonkeyKing.attack = 20;
	MonkeyKing.defense = 13;
	MonkeyKing.money = 20;

	Pigsy.name = "Pigsy";
	Pigsy.level = 1;
	Pigsy.health = 350;
	Pigsy.magic = 100;
	Pigsy.attack = 12;
	Pigsy.defense = 18;
	Pigsy.money = 20;

	Sandy.name = "Sandy";
	Sandy.level = 1;
	Sandy.health = 250;
	Sandy.magic = 100;
	Sandy.attack = 10;
	Sandy.defense = 22;
	Sandy.money = 50;

	Tripitaker.name = "Tripitaker";
	Tripitaker.level = 1;
	Tripitaker.health = 220;
	Tripitaker.magic = 150;
	Tripitaker.attack = 8;
	Tripitaker.defense = 12;
	Tripitaker.money = 60;

	cout << "Welcome to Micky's Game!\n" << endl;
	printCharacter(&MonkeyKing);
	printCharacter(&Pigsy);
	printCharacter(&Sandy);
	printCharacter(&Tripitaker);
	Sleep(1000);
	cout << "\nPlease choose your character: " << endl;
	cout << "1.Monkey King\t" << "2.Pigsy\t" << "3.Sandy\t" << "4.Tripitaker" << endl;
	cin >> characterChoice;
	while(true)
	{
		switch (characterChoice)
		{
		case 1: player = MonkeyKing; break;
		case 2: player = Pigsy; break;
		case 3: player = Sandy; break;
		case 4: player = Tripitaker; break;
		default: cout << "Please choose your desired character! " << endl;
		}
		if (characterChoice == 1 || characterChoice == 2 || characterChoice == 3 || characterChoice == 4) break;
	}
	cout << "\nWelcome to the World of Chaos, " << player.name << " !" << endl;
	Sleep(2000);
	cout << "You are now in a small town surrounded by a river and a forest. \nThere are a weapon shop and a drug store." << endl;
	Sleep(1500);
	cout << "What are you going to do? " << endl;
	cout << "1.Go to the weapon shop" << endl;
	cout << "2.Go to the drug store" << endl;
	cout << "3.Find treasure" << endl;
	cout << "4.Hunt for monsters" << endl;
	cout << "5.Go to Devil Incarnate's cave" << endl;
	cout << "6.Exit game" << endl;
	cout << "7.Show your current stats" << endl;
	cin >> worldChoice;

	while (worldChoice != 6)
	{
		if (worldChoice == 7)
		{
			cout << "Your current level  : " << player.level << endl;
			cout << "Your current health : " << player.health << endl;
			cout << "Your current attack : " << player.attack << endl;
			cout << "Your current defense: " << player.defense << endl;
			cout << "Your current wealth : " << player.money << endl;
		}
		else switch (worldChoice)
		{
		case 1: weaponShop(player); break;
		case 2: drugStore(player); break;
		case 3: treasure(player); break;
		case 4: monster(player); break;
		case 5: boss(player); break;
		default: cout << "Please enter the correct choice!" << endl;
		}
		if (clear)
		{
			cout << "You survived!" << endl;
			cout << "Thanks for playing my game!" << endl;
			break;
		}
		cout << "\nYou are now in a small town surrounded by a river and a forest. \nThere are a weapon shop and a drug store." << endl;
		cout << "What are you going to do? " << endl;
		cout << "1.Go to the weapon shop" << endl;
		cout << "2.Go to the drug store" << endl;
		cout << "3.Find treasure" << endl;
		cout << "4.Hunt for monsters" << endl;
		cout << "5.Go to Devil Incarnate's cave" << endl;
		cout << "6.Exit game" << endl;
		cout << "7.Show your current stats" << endl;
		cin >> worldChoice;
	}
	if (worldChoice == 6) {
		cout << "Exiting game......" << endl;
		cout << "Thanks for playing my game!" << endl;
	}


	return 0;
}

void printCharacter(struct characters *character)
{
	cout << "Name   : " << character->name << endl;
	cout << "Health : " << character->health << endl;
	cout << "Magic  : " << character->magic << endl;
	cout << "Attact : " << character->attack << endl;
	cout << "Defecse: " << character->defense << endl;
	cout << "Money  : " << character->money << endl;
	cout << endl;
}

void levelUp(struct characters &player)
{
	player.level++;
	if (player.level > 10)
	{
		player.level = 10;
		return;
	}
	player.health += 100;
	player.attack += 5;
	player.defense += 5;
}

void weaponShop(struct characters &player)
{
	cout << "Welcome to the weapon shop!" << endl;
	if (player.name == "Monkey King")
	{
		cout << "1.Buy wooden cudgel (1 gold attack+10)" << endl;
		cout << "2.Buy iron cudgel (2 gold attack+20)" << endl;
		cout << "3.Buy composed cudgel (5 gold attack+40)" << endl;
		cout << "4.Buy As-You-Will Gold-Banded cudgel (7 gold attack+60)" << endl;
		cout << "5.Buy Gold Band (2 gold defense+20)" << endl;
		cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
		cout << "7.Leave" << endl;

	}
	if (player.name == "Pigsy")
	{
		cout << "1.Buy wooden rake (1 gold attack+10)" << endl;
		cout << "2.Buy iron rake (2 gold attack+20)" << endl;
		cout << "3.Buy composed rake (5 gold attack+40)" << endl;
		cout << "4.Buy nine-pronged rake (7 gold attack+60)" << endl;
		cout << "5.Buy Gold hat (2 gold defense+20)" << endl;
		cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
		cout << "7.Leave" << endl;
	}
	if (player.name == "Sandy")
	{
		cout << "1.Buy wooden spade (1 gold attack+10)" << endl;
		cout << "2.Buy iron spade (2 gold attack+20)" << endl;
		cout << "3.Buy composed spade (5 gold attack+40)" << endl;
		cout << "4.Buy Crescent Spade (7 gold attack+60)" << endl;
		cout << "5.Buy Gold hat (2 gold defense+20)" << endl;
		cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
		cout << "7.Leave" << endl;
	}
	if (player.name == "Tripitaker")
	{
		cout << "1.Buy wooden rake (1 gold attack+10)" << endl;
		cout << "2.Buy iron rake (2 gold attack+20)" << endl;
		cout << "3.Buy composed rake (5 gold attack+40)" << endl;
		cout << "4.Buy ogre−quelling staff (7 gold attack+60)" << endl;
		cout << "5.Buy Gold hat (2 gold defense+20)" << endl;
		cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
		cout << "7.Leave" << endl;
	}

	int choice;
	cin >> choice;
	while (choice != 7)
	{
		switch (choice)
		{
		case 1: if (player.money < 1)
		{
			cout << "You don't have enough money" << endl;
		}
				else {
					cout << "Successfully bought!" << endl;
					player.attack += 10;
					player.money -= 1;
				}
				break;
		case 2: if (player.money < 2)
		{
			cout << "You don't have enough money" << endl;
		}else if(player.level < 3)
		{
			cout << "Level 3 required" << endl;
		}else {
					cout << "Successfully bought!" << endl;
					player.attack += 20;
					player.money -= 2;
		}
				break;
		case 3: if (player.money < 5)
		{
			cout << "You don't have enough money" << endl;
		}else if (player.level < 5)
		{
			cout << "Level 5 required" << endl;
		}else {
					cout << "Successfully bought!" << endl;
					player.attack += 40;
					player.money -= 5;
				}
				break;
		case 4: if (player.money < 7)
		{
			cout << "You don't have enough money" << endl;
		}else if (player.level < 7)
		{
			cout << "Level 7 required" << endl;
		}else {
					cout << "Successfully bought!" << endl;
					player.attack += 60;
					player.money -= 7;
					ultimateWeapon++;
				}
				break;
		case 5: if (player.money < 2)
		{
			cout << "You don't have enough money" << endl;
		}
				else if (player.level < 4)
				{
					cout << "Level 4 required" << endl;
				}
				else {
					cout << "Successfully bought!" << endl;
					player.defense += 20;
					player.money -= 2;
				}
				break;
		case 6: if (player.money < 5)
		{
			cout << "You don't have enough money" << endl;
		}
				else if (player.level < 7)
				{
					cout << "Level 7 required" << endl;
				}
				else {
					cout << "Successfully bought!" << endl;
					player.defense += 60;
					player.money -= 5;
				}
				break;
		default: cout << "Do you want to buy something or leave?" << endl;
			break;
		}
		Sleep(1500);
		cout << "\nWhat do you want to do next? " << endl;
		if (player.name == "Monkey King")
		{
			cout << "1.Buy wooden cudgel (1 gold attack+10)" << endl;
			cout << "2.Buy iron cudgel (2 gold attack+20)" << endl;
			cout << "3.Buy composed cudgel (5 gold attack+40)" << endl;
			cout << "4.Buy As-You-Will Gold-Banded cudgel (7 gold attack+60)" << endl;
			cout << "5.Buy Gold Band (2 gold defense+20)" << endl;
			cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
			cout << "7.Leave" << endl;

		}
		if (player.name == "Pigsy")
		{
			cout << "1.Buy wooden rake (1 gold attack+10)" << endl;
			cout << "2.Buy iron rake (2 gold attack+20)" << endl;
			cout << "3.Buy composed rake (5 gold attack+40)" << endl;
			cout << "4.Buy nine-pronged rake (7 gold attack+60)" << endl;
			cout << "5.Buy Gold hat (2 gold defense+20)" << endl;
			cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
			cout << "7.Leave" << endl;
		}
		if (player.name == "Sandy")
		{
			cout << "1.Buy wooden spade (1 gold attack+10)" << endl;
			cout << "2.Buy iron spade (2 gold attack+20)" << endl;
			cout << "3.Buy composed spade (5 gold attack+40)" << endl;
			cout << "4.Buy Crescent Spade (7 gold attack+60)" << endl;
			cout << "5.Buy Gold hat (2 gold defense+20)" << endl;
			cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
			cout << "7.Leave" << endl;
		}
		if (player.name == "Tripitaker")
		{
			cout << "1.Buy wooden rake (1 gold attack+10)" << endl;
			cout << "2.Buy iron rake (2 gold attack+20)" << endl;
			cout << "3.Buy composed rake (5 gold attack+40)" << endl;
			cout << "4.Buy ogre−quelling staff (7 gold attack+60)" << endl;
			cout << "5.Buy Gold hat (2 gold defense+20)" << endl;
			cout << "6.Buy Locked Golden Armor (5 gold defense+60)" << endl;
			cout << "7.Leave" << endl;
		}
		cin >> choice;
	}

	cout << "Leaving the weapon shop..." << endl;
	Sleep(1000);
}


void drugStore(struct characters &player)
{
	cout << "Welcome to the drug store!" << endl;
	cout << "1.Buy life portion(1 gold health+200)" << endl;
	cout << "2.Buy magic peach(5 gold health+1200)" << endl;
	cout << "3.Buy immortal wine(10 gold health+2400)" << endl;
	cout << "4.Leave" << endl;
	int choice;
	cin >> choice;
	while (choice != 4)
	{
		switch (choice)
		{
		case 1: if (player.money < 1)
		{
			cout << "You don't have enough money" << endl;
		}
				else {
					cout << "Successfully bought!" << endl;
					player.health += 200;
					player.money -= 1;
				}
				break;
		case 2: if (player.money < 5)
		{
			cout << "You don't have enough money" << endl;
		}
				else {
					cout << "Successfully bought!" << endl;
					player.health += 1200;
					player.money -= 5;
				}
				break;
		case 3: if (player.money < 10)
		{
			cout << "You don't have enough money" << endl;
		}
				else {
					cout << "Successfully bought!" << endl;
					player.health += 2400;
					player.money -= 10;
				}
				break;
		
		default: cout << "Do you want to buy something or leave?" << endl;
			break;
		}
		cin >> choice;
	}
	cout << "Leaving the drug store..." << endl;
}

void treasure(struct characters &player)
{
	srand((unsigned)time(NULL));
	cout << "You need to spend 5 gold for treasure hunting, do you want to continue? (Y/N) " << endl;
	char choice;
	cin >> choice;
	while(choice == 'y' || choice == 'Y')
	{
		player.money -= 5;
		if (1 == rand() % 10)
		{
			cout << "wow! You find a old book. Let's get closer and read it..." << endl;
			Sleep(3000);
			cout << "You need to get the \"ultimate weapon\" to beat the boss... Good luck my man!" << endl;
		}else if (1 == rand() % 20)
		{
			cout << "Fantastic! You find the Golden Elixir Pill! Now you restore all your health and gain 20 attack and defense" << endl;
			player.health += 3000;
			player.attack += 20;
			player.defense += 20;
		}else if (1 == rand() % 15)
		{
			cout << "Congratulations! You get a chance to visit Dragon Palace! " << endl;
			cout << "You feel you are getting stronger!" << endl;
			player.attack += 10;
			player.defense += 10;
		}else if (1 == rand() % 5)
		{
			cout << "Congratulations! You get a key to open the final gate!" << endl;
			key++;
		}else {
			cout << "Sorry but you find nothing this time. Good luck next time! " << endl;
		}
		cout << "Do you want to give it another try? (Y/N) " << endl;
		cin >> choice;
	}
	
	cout << "Leaving..." << endl;
	cout << "Thanks for treasure hunting!" << endl;
	
}

void monster(struct characters &player)
{
	srand((unsigned)time(NULL));
	cout << "Get ready to fight monsters!!!" << endl;
	double* monsterHealth = new double;
	int* monsterAttack = new int;
	int* monsterDefense = new int;
	int* monsterMoney = new int;
	*monsterHealth = rand() % 200 + 40;
	*monsterAttack = rand() % 20 + 1;
	*monsterDefense = rand() % 20 + 1;
	*monsterMoney = ((int)*monsterHealth + *monsterAttack + *monsterDefense) / 80;
	double* playerStats = new double;
	double* monsterStats = new double;
	*playerStats = 0;
	*monsterStats = 0;
	int round = 1;
	int choice;
	do
	{
		cout << "Now is round " << round << " ！" << endl;
		cout << "Please choose your desired behavior:\n";
		cout << "1.Attack 2.Run away\n";
		
		cin >> choice;
		if (choice == 1)
		{
			cout << "You attacked this monster!" << endl;
			*monsterStats = player.attack*1.5 - *monsterDefense;
			if (*monsterStats < 0) *monsterStats = 0;
			*monsterHealth -= *monsterStats;
			if (*monsterHealth <= 0)
			{
				cout << "You killed this monster！You are amazing！！！" << endl;
				player.money += *monsterMoney;
				levelUp(player);
				Sleep(1000);
				return;
			}
			cout << "You caused " << *monsterStats << " damage to the monster." << endl;
			cout << "This monster now has " << *monsterHealth << " health" << endl;
			*playerStats = *monsterAttack*1.5 - player.defense;
			if (*playerStats < 0) *playerStats = 0;
			player.health -= *playerStats;
			if (player.health <= 0)
			{
				cout << "You died！Game over！！！" << endl;
				cout << "Thanks for playing my game!" << endl;
				exit(0);
			}
			cout << "Monster caused " << *playerStats << " damage to you." << endl;
			cout << "You now have " << player.health << " health" << endl;
		}else {
			cout << "You decide to run away!" << endl;
			cout << "." << endl;
			Sleep(1500);
			cout << "." << endl;
			Sleep(1500);
			cout << "." << endl;
			if (1 == rand() % 50)
			{
				cout << "You successfully run away!" << endl;
				break;
			}else {
				cout << "You cannot escape this time! " << endl;
				*playerStats = *monsterAttack*1.5 - player.defense;
				if (*playerStats < 0) *playerStats = 0;
				player.health -= *playerStats;
				if (player.health <= 0)
				{
					cout << "You died！Game over！！！" << endl;
					cout << "Thanks for playing my game!" << endl;
					exit(0);
				}
				cout << "Monster caused " << *playerStats << " damage to you." << endl;
				cout << "You now have " << player.health << " health" << endl;
			}
			
		}
		round++;
	} while ((*monsterHealth) > 0 && player.health > 0);
	


}

void boss(struct characters &player)
{
	cout << "You are at Devil Incarnate's cave" << endl;
	cout << "Do you want to get closer? (Y/N)" << endl;
	char choice;
	cin >> choice;
	if (choice == 'Y' || choice == 'y')
	{
		cout << "You see a gate but it's locked...seems like you need a key... But the boss is behind the gate, do you want to use your key? (Y/N)" << endl;
		cin >> choice;
		if (choice == 'Y' || choice == 'y')
		{
			if (key > 0)
			{
				key--;
				cout << "You used a key, now you have " << key << " left." << endl;
				cout << "Get ready to fight Devil Incarnate!!!" << endl;
				double* bossHealth = new double;
				int* bossAttack = new int;
				int* bossDefense = new int;
				//int* bossMoney = new int;
				*bossHealth = 3500;
				*bossAttack = 500;
				*bossDefense = 500;
				//*bossMoney = (*monsterHealth + *monsterAttack + *monsterDefense) / 100;
				double* playerStats = new double;
				double* bossStats = new double;
				*playerStats = 0;
				*bossStats = 0;
				int round = 1;
				int choice;
				do
				{
					cout << "Now is round " << round << " ！" << endl;
					cout << "Please choose your desired behavior:\n";
					cout << "1.Attack 2.Run away\n";

					cin >> choice;
					if (choice == 1)
					{
						cout << "You attacked Devil Incarnate!" << endl;
						if(ultimateWeapon < 1) 
						*bossStats = player.attack*1.5 - *bossDefense;
						if (*bossStats < 0) *bossStats = 0;
						*bossHealth -= *bossStats;
						if (*bossHealth <= 0)
						{
							cout << "You killed Devil Incarnate！You are awesome！！！" << endl;
							clear = true;
							//player.money += *bossMoney;
							return;
						}
						cout << "You caused " << *bossStats << " damage to Devil Incarnate." << endl;
						cout << "Devil Incarnate now has " << *bossHealth << " health" << endl;
						*playerStats = *bossAttack*1.5 - player.defense;
						if (*playerStats < 0) *playerStats = 0;
						player.health -= *playerStats;
						if (player.health <= 0)
						{
							cout << "You died！Game over！！！" << endl;
							;
						}
						cout << "Devil Incarnate caused " << *playerStats << " damage to you." << endl;
						cout << "You now have " << player.health << " health" << endl;
					}
					else {
						cout << "You decide to run away!" << endl;
						cout << "." << endl;
						Sleep(1000);
						cout << "." << endl;
						Sleep(1000);
						cout << "." << endl;
						if (1 == rand() % 50)
						{
							cout << "You successfully run away!" << endl;
							break;
						}
						else {
							cout << "You cannot escape this time! " << endl;
							*playerStats = *bossAttack*1.5 - player.defense;
							if (*playerStats < 0) *playerStats = 0;
							player.health -= *playerStats;
							if (player.health <= 0)
							{
								cout << "You died！Game over！！！" << endl;
								cout << "Thanks for playing my game!" << endl;
								exit(0);
							}
							cout << "Devil Incarnate caused " << *playerStats << " damage to you." << endl;
							cout << "You now have " << player.health << " health" << endl;
						}

					}
					round++;
				} while ((*bossHealth) > 0 && player.health > 0);

			}else {
				cout << "Sorry you don't have a key to the gate. Please find a way to get it." << endl;
				
			}
		}
	}
	cout << "Leaving the cave..." << endl;
	Sleep(1000);
	
}