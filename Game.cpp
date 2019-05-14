#include <iostream>
#include <vector>
#include "Game.h"

template <typename T>
T* CSingleton<T>::m_instance = nullptr;

template <class T>
T* CSingleton<T>::get_instance() {
    if(m_instance == nullptr) {
        m_instance = new T();
    }
    return m_instance;
}

void CWarrior::set_strength(unsigned int strength) {
    m_strength = strength;
}

void CWarrior::set_health(unsigned int health) {
    m_health = health;
}

void CWarrior::set_intelligence(unsigned int intelligence) {
    m_intelligence = intelligence;
}

void CWarrior::set_charisma(unsigned int charisma) {
    m_charisma = charisma;
}

void CWarrior::set_weapon(unsigned int weapon) {
    m_weapon = weapon;
}

int CWarrior::get_strength() const {
    return m_strength;
}

int CWarrior::get_health() const {
    return m_health;
}

int CWarrior::get_intelligence() const {
    return m_intelligence;
}

int CWarrior::get_charisma() const {
    return m_charisma;
}

int CWarrior::get_weapon() const {
    return m_weapon;
}

void CWarrior::show_parametres() const {
    std::cout << "WARRIOR" << std::endl;
    std::cout << "STRENGTH: " << m_strength << std::endl;
    std::cout << "HEALTH: " << m_health << std::endl;
    std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
    std::cout << "CHARISMA: " << m_charisma << std::endl;
    std::cout << "WEAPON " << m_weapon << std::endl;
    std::cout << std::endl;
}

bool operator==(const CWarrior& first_warrior, const CWarrior& second_warrior) {
    if (first_warrior.get_strength() != second_warrior.get_strength()) {
        return false;
    }
    if (first_warrior.get_health() != second_warrior.get_health()) {
        return false;
    }
    if (first_warrior.get_intelligence() != second_warrior.get_intelligence()) {
        return false;
    }
    if (first_warrior.get_charisma() != second_warrior.get_charisma()) {
        return false;
    }
    if (first_warrior.get_weapon() != second_warrior.get_weapon()) {
        return false;
    }
    return true;
}

void CAgent::set_strength(unsigned int strength) {
    m_strength = strength;
}

void CAgent::set_health(unsigned int health) {
    m_health = health;
}

void CAgent::set_intelligence(unsigned int intelligence) {
    m_intelligence = intelligence;
}

void CAgent::set_charisma(unsigned int charisma) {
    m_charisma = charisma;
}

void CAgent::set_weapon(unsigned int weapon) {
    m_weapon = weapon;
}

int CAgent::get_strength() const {
    return m_strength;
}

int CAgent::get_health() const {
    return m_health;
}

int CAgent::get_intelligence() const {
    return m_intelligence;
}

int CAgent::get_charisma() const {
    return m_charisma;
}

int CAgent::get_weapon() const {
    return m_weapon;
}

void CAgent::show_parametres() const {
    std::cout << "AGENT" << std::endl;
    std::cout << "STRENGTH: " << m_strength << std::endl;
    std::cout << "HEALTH: " << m_health << std::endl;
    std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
    std::cout << "CHARISMA: " << m_charisma << std::endl;
    std::cout << "WEAPON " << m_weapon << std::endl;
    std::cout << std::endl;
}

bool operator==(const CAgent& first_agent, const CAgent& second_agent) {
    if (first_agent.get_strength() != second_agent.get_strength()) {
        return false;
    }
    if (first_agent.get_health() != second_agent.get_health()) {
        return false;
    }
    if (first_agent.get_intelligence() != second_agent.get_intelligence()) {
        return false;
    }
    if (first_agent.get_charisma() != second_agent.get_charisma()) {
        return false;
    }
    if (first_agent.get_weapon() != second_agent.get_weapon()) {
        return false;
    }
    return true;
}

void CDragon::set_strength(unsigned int strength) {
    m_strength = strength;
}

void CDragon::set_health(unsigned int health) {
    m_health = health;
}

void CDragon::set_intelligence(unsigned int intelligence) {
    m_intelligence = intelligence;
}

void CDragon::set_charisma(unsigned int charisma) {
    m_charisma = charisma;
}

void CDragon::set_weapon(unsigned int weapon) {
    m_weapon = weapon;
}

int CDragon::get_strength() const {
    return m_strength;
}

int CDragon::get_health() const {
    return m_health;
}

int CDragon::get_intelligence() const {
    return m_intelligence;
}

int CDragon::get_charisma() const {
    return m_charisma;
}

int CDragon::get_weapon() const {
    return m_weapon;
}

void CDragon::show_parametres() const {
    std::cout << "DRAGON" << std::endl;
    std::cout << "STRENGTH: " << m_strength << std::endl;
    std::cout << "HEALTH: " << m_health << std::endl;
    std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
    std::cout << "CHARISMA: " << m_charisma << std::endl;
    std::cout << "WEAPON " << m_weapon << std::endl;
    std::cout << std::endl;
}

bool operator==(const CDragon& first_dragon, const CDragon& second_dragon) {
    if (first_dragon.get_strength() != second_dragon.get_strength()) {
        return false;
    }
    if (first_dragon.get_health() != second_dragon.get_health()) {
        return false;
    }
    if (first_dragon.get_intelligence() != second_dragon.get_intelligence()) {
        return false;
    }
    if (first_dragon.get_charisma() != second_dragon.get_charisma()) {
        return false;
    }
    if (first_dragon.get_weapon() != second_dragon.get_weapon()) {
        return false;
    }
    return true;
}

void CWizard::set_strength(unsigned int strength) {
    m_strength = strength;
}

void CWizard::set_health(unsigned int health) {
    m_health = health;
}

void CWizard::set_intelligence(unsigned int intelligence) {
    m_intelligence = intelligence;
}

void CWizard::set_charisma(unsigned int charisma) {
    m_charisma = charisma;
}

void CWizard::set_weapon(unsigned int weapon) {
    m_weapon = weapon;
}

int CWizard::get_strength() const {
    return m_strength;
}

int CWizard::get_health() const {
    return m_health;
}

int CWizard::get_intelligence() const {
    return m_intelligence;
}

int CWizard::get_charisma() const {
    return m_charisma;
}

int CWizard::get_weapon() const {
    return m_weapon;
}

void CWizard::show_parametres() const {
    std::cout << "WIZARD" << std::endl;
    std::cout << "STRENGTH: " << m_strength << std::endl;
    std::cout << "HEALTH: " << m_health << std::endl;
    std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
    std::cout << "CHARISMA: " << m_charisma << std::endl;
    std::cout << "WEAPON " << m_weapon << std::endl;
    std::cout << std::endl;
}

bool operator==(const CWizard& first_wizard, const CWizard& second_wizard) {
    if (first_wizard.get_strength() != second_wizard.get_strength()) {
        return false;
    }
    if (first_wizard.get_health() != second_wizard.get_health()) {
        return false;
    }
    if (first_wizard.get_intelligence() != second_wizard.get_intelligence()) {
        return false;
    }
    if (first_wizard.get_charisma() != second_wizard.get_charisma()) {
        return false;
    }
    if (first_wizard.get_weapon() != second_wizard.get_weapon()) {
        return false;
    }
    return true;
}

CWarrior* CHumanArmyFactory::create_warrior() {
    auto curr_warrior = new CWarrior;
    curr_warrior -> set_strength(5);
    curr_warrior -> set_health(5);
    curr_warrior -> set_intelligence(1);
    curr_warrior -> set_charisma(1);
    curr_warrior -> set_weapon(4);
    return curr_warrior;
}

CAgent* CHumanArmyFactory::create_agent() {
    CAgent* curr_agent = CSingleton<CAgent>::get_instance();
    if(curr_agent -> get_strength() + curr_agent -> get_health() + curr_agent -> get_intelligence() + curr_agent -> get_charisma() + curr_agent -> get_weapon() > 0) {
        std::cout << "The agent already exists! You cannot create a new one.\n";
        return curr_agent;
    }
    curr_agent -> set_strength(2);
    curr_agent -> set_health(5);
    curr_agent -> set_intelligence(5);
    curr_agent -> set_charisma(7);
    curr_agent -> set_weapon(2);
    return curr_agent;
}

CDragon* CHumanArmyFactory::create_dragon() {
    CDragon* curr_dragon = CSingleton<CDragon>::get_instance();
    if(curr_dragon -> get_strength() + curr_dragon -> get_health() + curr_dragon -> get_intelligence() + curr_dragon -> get_charisma() + curr_dragon -> get_weapon() > 0) {
        std::cout << "The dragon already exists! You cannot create a new one.\n";
        return curr_dragon;
    }
    curr_dragon -> set_strength(10);
    curr_dragon -> set_health(10);
    curr_dragon -> set_intelligence(0);
    curr_dragon -> set_charisma(0);
    curr_dragon -> set_weapon(10);
    return curr_dragon;
}

CWizard* CHumanArmyFactory::create_wizard() {
    CWizard *curr_wizard = CSingleton<CWizard>::get_instance();
    if(curr_wizard -> get_strength() + curr_wizard -> get_health() + curr_wizard -> get_intelligence() + curr_wizard -> get_charisma() + curr_wizard -> get_weapon() > 0) {
        std::cout << "The wizard already exists! You cannot create a new one.\n";
        return curr_wizard;
    }
    curr_wizard -> set_strength(10);
    curr_wizard -> set_health(10);
    curr_wizard -> set_intelligence(10);
    curr_wizard -> set_charisma(10);
    curr_wizard -> set_weapon(10);
}

CWarrior* CAlienArmyFactory::create_warrior() {
    auto curr_warrior = new CWarrior;
    curr_warrior -> set_strength(5);
    curr_warrior -> set_health(4);
    curr_warrior -> set_intelligence(0);
    curr_warrior -> set_charisma(0);
    curr_warrior -> set_weapon(5);
    return curr_warrior;
}

CAgent* CAlienArmyFactory::create_agent() {
    CAgent* curr_agent = CSingleton<CAgent>::get_instance();
    if(curr_agent -> get_strength() + curr_agent -> get_health() + curr_agent -> get_intelligence() + curr_agent -> get_charisma() + curr_agent -> get_weapon() > 0) {
        std::cout << "The agent already exists! You cannot create a new one.\n";
        return curr_agent;
    }
    curr_agent -> set_strength(2);
    curr_agent -> set_health(4);
    curr_agent -> set_intelligence(4);
    curr_agent -> set_charisma(4);
    curr_agent -> set_weapon(1);
    return curr_agent;
}

CDragon* CAlienArmyFactory::create_dragon() {
    CDragon* curr_dragon = CSingleton<CDragon>::get_instance();
    if(curr_dragon -> get_strength() + curr_dragon -> get_health() + curr_dragon -> get_intelligence() + curr_dragon -> get_charisma() + curr_dragon -> get_weapon() > 0) {
        std::cout << "The dragon already exists! You cannot create a new one.\n";
        return curr_dragon;
    }
    curr_dragon -> set_strength(10);
    curr_dragon -> set_health(10);
    curr_dragon -> set_intelligence(0);
    curr_dragon -> set_charisma(0);
    curr_dragon -> set_weapon(10);
    return curr_dragon;
}

CWizard* CAlienArmyFactory::create_wizard() {
    CWizard* curr_wizard = CSingleton<CWizard>::get_instance();
    if(curr_wizard -> get_strength() + curr_wizard -> get_health() + curr_wizard -> get_intelligence() + curr_wizard -> get_charisma() + curr_wizard -> get_weapon() > 0) {
        std::cout << "The wizard already exists! You cannot create a new one.\n";
        return curr_wizard;
    }
    curr_wizard -> set_strength(10);
    curr_wizard -> set_health(10);
    curr_wizard -> set_intelligence(10);
    curr_wizard -> set_charisma(10);
    curr_wizard -> set_weapon(10);
    return curr_wizard;
}

void Army::add_unit(CUnit* curr_unit) {
    if(curr_unit != nullptr) {
        my_army.push_back(curr_unit);
    }
}

void Army::show_army() {
    for(int i = 0; i < my_army.size(); ++i) {
        my_army[i] -> show_parametres();
    }
}