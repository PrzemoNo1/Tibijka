#include <iostream>
#include <cstdlib>
#include "Boots.h"
#include "Dagger.h"
#include "Gloves.h"
#include "Hammer.h"
#include "Helm.h"
#include "IArmor.h"
#include "IItem.h"
#include "IWeapon.h"
#include "Pants.h"
#include "Tunic.h"
#include "Player.h"
#include "Fight.h"
#include <time.h>




int main()
{
        srand(time(NULL));
		/*
        Dagger D;
        Hammer H;
        std::cout << "A: " << D.Attack() << std::endl;
        std::cout << "B: " << D.Attack() << std::endl;
        std::cout << "C: " << D.Attack() << std::endl;
        std::cout << "D: " << H.Attack() << std::endl;
        std::cout << "E: " << H.Attack() << std::endl;
        std::cout << "F: " << H.Attack() << std::endl;
        Boots B(50);
        std::cout << "Boots: " << B.getDefence() << std::endl;
        std::cout << "Boots: " << B.GetType() << std::endl;
		*/
        Helm* Hel = new Helm(30);
        Gloves* G = new Gloves(5);
		IWeapon* Da = new Dagger();
		Boots* Boo = new Boots(2);
		Tunic* Tun = new Tunic(50);
		Pants* Pa = new Pants(40);
        Player* P = new Player(1, 1000);
        P->Equip(G);
        P->Equip(Hel);
		P->Equip(Da);
		P->Equip(Boo);
		P->Equip(Tun);
		P->Equip(Pa);
		
		//P.getInventory().listItems();
		//P.getInventory().dropItem();

		Player* P2 = new Player(1,1000);
		Helm* Hel2 = new Helm(28);
		Gloves* G2 = new Gloves(8);
		IWeapon* Da2 = new Hammer();
		Boots* Boo2 = new Boots(15);
		Tunic* Tun2 = new Tunic(52);
		Pants* Pa2 = new Pants(20);
		P2->Equip(G2);
		P2->Equip(Hel2);
		P2->Equip(Da2);
		P2->Equip(Boo2);
		P2->Equip(Tun2);
		P2->Equip(Pa2);
		/*
		std::cout << "Obrona pierwszego: " << P->getDefence() << std::endl;
		std::cout << "Obrona drugiego: " << P2->getDefence() << std::endl;
		std::cout << "Runda 1" << std::endl;
		P->attack(P2);
		std::cout << "---------------" << std::endl;
		P2->attack(P);
		std::cout << P->getHP() << std::endl;
		std::cout << P2->getHP() << std::endl;
		std::cout << "Runda 2" << std::endl;
		P->attack(P2);
		std::cout << "---------------" << std::endl;
		P2->attack(P);
		std::cout << P->getHP() << std::endl;
		std::cout << P2->getHP() << std::endl;
		std::cout << "Runda 3" << std::endl;
		P->attack(P2);
		P2->attack(P);
		std::cout << P->getHP() << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << P2->getHP() << std::endl;
		std::cout << "Runda 4" << std::endl;
		P->attack(P2);
		P2->attack(P);
		std::cout << P->getHP() << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << P2->getHP() << std::endl;
		std::cout << "Runda 5" << std::endl;
		P->attack(P2);
		P2->attack(P);
		std::cout << P->getHP() << std::endl;
		std::cout << "---------------" << std::endl;
		std::cout << P2->getHP() << std::endl;
		*/
		Fight F(P, P2);
		F.battle();
		system("pause");
		std::cin.get();

		delete Hel, G, Da, Boo, Tun, Pa, P, P2;
        return 0;
}
