#include <iostream>
#include <vector>
#include "Game.h"

int main()
{
    CHumanArmyFactory* ArmyFactory = new CHumanArmyFactory;
    Army* MyArmy = new Army();
    MyArmy -> add_unit(ArmyFactory -> create_warrior());
    MyArmy -> add_unit(ArmyFactory -> create_warrior());
    MyArmy -> add_unit(ArmyFactory -> create_agent());
    MyArmy -> add_unit(ArmyFactory -> create_agent());
    MyArmy -> add_unit(ArmyFactory -> create_dragon());
    MyArmy -> add_unit(ArmyFactory -> create_dragon());
    MyArmy -> add_unit(ArmyFactory -> create_wizard());
    MyArmy -> add_unit(ArmyFactory -> create_wizard());
    MyArmy -> show_army();
    return 0;
}
