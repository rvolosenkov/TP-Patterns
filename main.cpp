#include <iostream>
#include <vector>
#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Game.h"

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    /*CHumanArmyFactory* ArmyFactory = new CHumanArmyFactory;
    Army* MyArmy = new Army();
    MyArmy -> add_unit(ArmyFactory -> create_warrior());
    MyArmy -> add_unit(ArmyFactory -> create_warrior());
    MyArmy -> add_unit(ArmyFactory -> create_agent());
    MyArmy -> add_unit(ArmyFactory -> create_agent());
    MyArmy -> add_unit(ArmyFactory -> create_dragon());
    MyArmy -> add_unit(ArmyFactory -> create_dragon());
    MyArmy -> add_unit(ArmyFactory -> create_wizard());
    MyArmy -> add_unit(ArmyFactory -> create_wizard());
    MyArmy -> show_army();*/
}