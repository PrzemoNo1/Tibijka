#include <iostream>
#include <cstdlib>
#include "Dagger.h"
#include <time.h>
//hh


/*
class IArmor: public IItem
{

    int def;

public:
    int GetDefence()
    {
        return def;
    }

    IArmor(int a)
    {
        def = a;
    }
};


class Helm: public IArmor
{
    ItemEnum item = HEL;
public:
    virtual ItemEnum GetType() override
    {
            return this->item;
    }
    Helm(int a) : IArmor(a)
    {

    }

};

class Pants : public IArmor
{
    ItemEnum item = PAN;
public:
    virtual ItemEnum GetType() override
    {
            return this->item;
    }
    Pants(int a) : IArmor(a)
    {

    }

};

class Tunic : public IArmor
{
    ItemEnum item = TUN;
public:
    virtual ItemEnum GetType() override
    {
            return this->item;
    }
    Tunic(int a) : IArmor(a)
    {

    }

};

class Gloves : public IArmor
{
    ItemEnum item = GLO;
public:
    virtual ItemEnum GetType() override
    {
            return this->item;
    }
    Gloves(int a) : IArmor(a)
    {

    }

};

class Boots : public IArmor
{
    ItemEnum item = BOO;
public:
    virtual ItemEnum GetType() override
    {
            return this->item;
    }
    Boots(int a) : IArmor(a)
    {

    }

};

class Player
{
    IWeapon* wep;
    Helm* hel;
    Tunic* tun;
    Pants* pants;
    Gloves* glo;
    Boots* boo;

public:
    void Equip(IItem* item)
    {
        switch(item->GetType())
        {
            case 1: wep = static_cast<IWeapon*>(item); break;
            case 2: hel = (Helm*)item; std::cout << "Ubieram helm"; break;
            case 3: tun = (Tunic*)item; break;
            case 4: pants = (Pants*)item; break;
            case 5: glo = (Gloves*)item; std::cout << "Ubieram buty"; break;
            case 6: boo = (Boots*)item; break;

        }
    }
};

*/

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
