#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Game.h"

using testing::Eq;

class CHumanArmyFactoryTest : public testing::Test {
public:
    CHumanArmyFactory* ArmyFactory;
    CHumanArmyFactoryTest() {
        ArmyFactory = new CHumanArmyFactory;
    }
    ~CHumanArmyFactoryTest() {
        delete ArmyFactory;
    }
};

TEST_F(CHumanArmyFactoryTest, CreateWarriorTest) {
    CWarrior* new_warrior = ArmyFactory -> create_warrior();
    CWarrior* right_warrior = new CWarrior;
    right_warrior -> set_strength(5);
    right_warrior -> set_health(5);
    right_warrior -> set_intelligence(1);
    right_warrior -> set_charisma(1);
    right_warrior -> set_weapon(4);
    ASSERT_EQ(*new_warrior, *right_warrior);
    new_warrior -> set_strength(0);
    new_warrior -> set_health(0);
    new_warrior -> set_intelligence(0);
    new_warrior -> set_charisma(0);
    new_warrior -> set_weapon(0);
}

TEST_F(CHumanArmyFactoryTest, CreateAgentTest) {
    CAgent* new_agent = ArmyFactory -> create_agent();
    CAgent* right_agent = new CAgent;
    right_agent -> set_strength(2);
    right_agent -> set_health(5);
    right_agent -> set_intelligence(5);
    right_agent -> set_charisma(7);
    right_agent -> set_weapon(2);
    ASSERT_EQ(*new_agent, *right_agent);
    new_agent -> set_strength(0);
    new_agent -> set_health(0);
    new_agent -> set_intelligence(0);
    new_agent -> set_charisma(0);
    new_agent -> set_weapon(0);
}

TEST_F(CHumanArmyFactoryTest, CreateDragonTest) {
    CDragon* new_dragon = ArmyFactory -> create_dragon();
    CDragon* right_dragon = new CDragon;
    right_dragon -> set_strength(10);
    right_dragon -> set_health(10);
    right_dragon -> set_intelligence(0);
    right_dragon -> set_charisma(0);
    right_dragon -> set_weapon(10);
    ASSERT_EQ(*new_dragon, *right_dragon);
    new_dragon -> set_strength(0);
    new_dragon -> set_health(0);
    new_dragon -> set_intelligence(0);
    new_dragon -> set_charisma(0);
    new_dragon -> set_weapon(0);
}

TEST_F(CHumanArmyFactoryTest, CreateWizardTest) {
    CWizard* new_wizard = ArmyFactory -> create_wizard();
    CWizard* right_wizard = new CWizard;
    right_wizard -> set_strength(10);
    right_wizard -> set_health(10);
    right_wizard -> set_intelligence(10);
    right_wizard -> set_charisma(10);
    right_wizard -> set_weapon(10);
    ASSERT_EQ(*new_wizard, *right_wizard);
    new_wizard -> set_strength(0);
    new_wizard -> set_health(0);
    new_wizard -> set_intelligence(0);
    new_wizard -> set_charisma(0);
    new_wizard -> set_weapon(0);
}

class CAlienArmyFactoryTest : public testing::Test {
public:
    CAlienArmyFactory* ArmyFactory;
    CAlienArmyFactoryTest() {
        ArmyFactory = new CAlienArmyFactory;
    }
    ~CAlienArmyFactoryTest() {
        delete ArmyFactory;
    }
};

TEST_F(CAlienArmyFactoryTest, CreateWarriorTest) {
    CWarrior* new_warrior = ArmyFactory -> create_warrior();
    CWarrior* right_warrior = new CWarrior;
    right_warrior -> set_strength(5);
    right_warrior -> set_health(4);
    right_warrior -> set_intelligence(0);
    right_warrior -> set_charisma(0);
    right_warrior -> set_weapon(5);
    ASSERT_EQ(*new_warrior, *right_warrior);
    new_warrior -> set_strength(0);
    new_warrior -> set_health(0);
    new_warrior -> set_intelligence(0);
    new_warrior -> set_charisma(0);
    new_warrior -> set_weapon(0);
}

TEST_F(CAlienArmyFactoryTest, CreateAgentTest) {
    CAgent* new_agent = ArmyFactory -> create_agent();
    CAgent* right_agent = new CAgent;
    right_agent -> set_strength(2);
    right_agent -> set_health(4);
    right_agent -> set_intelligence(4);
    right_agent -> set_charisma(4);
    right_agent -> set_weapon(1);
    ASSERT_EQ(*new_agent, *right_agent);
    new_agent -> set_strength(0);
    new_agent -> set_health(0);
    new_agent -> set_intelligence(0);
    new_agent -> set_charisma(0);
    new_agent -> set_weapon(0);
}

TEST_F(CAlienArmyFactoryTest, CreateDragonTest) {
    CDragon* new_dragon = ArmyFactory -> create_dragon();
    CDragon* right_dragon = new CDragon;
    right_dragon -> set_strength(10);
    right_dragon -> set_health(10);
    right_dragon -> set_intelligence(0);
    right_dragon -> set_charisma(0);
    right_dragon -> set_weapon(10);
    ASSERT_EQ(*new_dragon, *right_dragon);
    new_dragon -> set_strength(0);
    new_dragon -> set_health(0);
    new_dragon -> set_intelligence(0);
    new_dragon -> set_charisma(0);
    new_dragon -> set_weapon(0);
}

TEST_F(CAlienArmyFactoryTest, CreateWizardTest) {
    CWizard* new_wizard = ArmyFactory -> create_wizard();
    CWizard* right_wizard = new CWizard;
    right_wizard -> set_strength(10);
    right_wizard -> set_health(10);
    right_wizard -> set_intelligence(10);
    right_wizard -> set_charisma(10);
    right_wizard -> set_weapon(10);
    ASSERT_EQ(*new_wizard, *right_wizard);
    new_wizard -> set_strength(0);
    new_wizard -> set_health(0);
    new_wizard -> set_intelligence(0);
    new_wizard -> set_charisma(0);
    new_wizard -> set_weapon(0);
}