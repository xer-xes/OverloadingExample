#include <iostream>
using namespace std;

class Zombie {
	public:
		int Damage = 10;
		friend Zombie operator+(Zombie a, Zombie b) {
			Zombie c;
			int Powerup = a.Damage + b.Damage;
			c.Damage = Powerup;
			return c;
		}

		friend bool operator>(Zombie a, Zombie b) {
			if (a.Damage > b.Damage)
				return true;
			else
				return false;
		}

		friend bool operator<(Zombie a, Zombie b) {
			if (a.Damage < b.Damage)
				return true;
			else
				return false;
		}
};

int main() {
	Zombie a, b;
	cout << "Damage of Normal A Zombie: " << a.Damage << endl;
	cout << "Damage of Normal B Zombie: " << b.Damage << endl;
	Zombie c = a + b;
	cout << "When two Zombies Merged , Damage of Mega Zombie: " << c.Damage << endl;
	a.Damage = 5;
	cout << "After Attack Zombie Attack power: " << a.Damage << endl;
	if (a < b) {
		cout << "Zombie A is Weaker then Zombie B";
	}
	cin.get();
	return 0;
}