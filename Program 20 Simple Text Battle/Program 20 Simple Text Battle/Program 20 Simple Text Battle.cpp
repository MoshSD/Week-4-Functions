#include <iostream>
using namespace std;

int playerHealth = 1000;
int enemyHealth = 1000;
bool playing = true;


int attack_Choice()
{
	int choice = 0;
	const int sword_Damage = 300;
	const int magic_Damage = 650;
	const int axe_Damage = 450;
	const int troll_Sword = 350;
	const int troll_Magic = 50;
	const int troll_Axe = 100;


	cout << "What will you choose?" << endl << "1) Use Sword" << endl << "2) Use magic" << endl << "3) Use axe" << endl;
	cin >> choice; 

	if (choice == 1) 
	{
		enemyHealth -= sword_Damage;
		playerHealth -= troll_Sword;
		cout << "You have taken 350 damage!" << endl << "The enemy has taken 300 damage!" << endl << "Your current health is: " << playerHealth << endl << "Enemy current health is: " << enemyHealth << endl;
	}
	else if (choice == 2)
	{
		enemyHealth -= magic_Damage;
		playerHealth -= troll_Magic;
		cout << "You have taken 50 damage!" << endl << "The enemy has taken 650 damage!" << endl << "Your current health is: " << playerHealth << endl << "Enemy current health is: " << enemyHealth << endl;
	}
	else if (choice == 3)
	{
		enemyHealth -= axe_Damage;
		playerHealth -= troll_Axe;
		cout << "You have taken 100 damage!" << endl << "The enemy has taken 450 damage!" << endl << "Your current health is: " << playerHealth << endl << "Enemy current health is: " << enemyHealth << endl;
	}
	else
	{
		cout << "You chose not to attack!" << endl;
	}
	
	return 0;
}

bool playStateCheck(int playerHealth, int enemyHealth)
{
	char stillPlayingInput;

	if (playerHealth <= 0)
	{
		cout << "You have died!" << endl << "Would you like to play again?  (Y) / (N)" << endl;
		cin >> stillPlayingInput;
		cout << stillPlayingInput;

		if (stillPlayingInput == 'Y')
		{
			return true;
		}
		else
		{

			return false;
		}

	}

	else if (enemyHealth <= 0)
	{
		cout << "You have killed the enemy!" << endl << "Would you like to play again? (Y) / (N)" << endl;
		cin >> stillPlayingInput;

		if (stillPlayingInput == 'Y')
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	else
		return true;

}


int main()
{
	
 

	while (playing == true)
	{

		if (enemyHealth <= 0 or playerHealth <= 0)
		{
			enemyHealth = 1000;
			playerHealth = 1000;

		}

		if (enemyHealth && playerHealth == 1000)
		{
			cout << "You have met a troll, prepare for battle!" << endl;
		}

		attack_Choice();
		playing = playStateCheck(playerHealth, enemyHealth);
	}



}
