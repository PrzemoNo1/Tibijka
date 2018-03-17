#include "Dagger.h"

Dagger::Dagger(int a , int b ) : IWeapon(a, b)
{

}

Dagger::~Dagger()
{
}

int Dagger::Attack()
{
	int sum = 0;
	for (int i = 1; i <= 2; i++)
	{
		std::cout << i << ". ";
		if (IWeapon::IsCriticalHit())
		{
			std::cout << "Critical Hint (Attack*2): " << 2 * Att << std::endl;
			sum += 2 * Att;
		}
		else
		{
			std::cout << "At by Dagger " << std::endl;
			sum += Att;
		}
	}
	return sum;
}

