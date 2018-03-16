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
#include <time.h>




int main()
{
        srand(time(NULL));
        Dagger D;
        Hammer H;
        std::cout << "A: " << D.Attack() << std::endl;
        std::cout << "B: " << D.Attack() << std::endl;
        std::cout << "C: " << D.Attack() << std::endl;
        std::cout << "D: " << H.Attack() << std::endl;
        std::cout << "E: " << H.Attack() << std::endl;
        std::cout << "F: " << H.Attack() << std::endl;
        Boots B(50);
        std::cout << "Boots: " << B.GetDefence() << std::endl;
        std::cout << "Boots: " << B.GetType() << std::endl;
        Helm* Hel = new Helm(30);
        Gloves* G = new Gloves(5);
        Player P;
        P.Equip(G);
        P.Equip(Hel);
        return 0;
}
