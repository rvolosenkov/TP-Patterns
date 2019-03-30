#ifndef GAME_H_INCLUDED
#define GAME_H_INCLUDED

class CUnit {
public:
    virtual void set_strength(unsigned int strength) = 0;
    virtual void set_health(unsigned int health) = 0;
    virtual void set_intelligence(unsigned int intelligence) = 0;
    virtual void set_charisma(unsigned int charisma) = 0;
    virtual void set_weapon(unsigned int weapon) = 0;
    virtual void show_parametres() = 0;
    virtual ~CUnit() {}
};

class CWarrior : public CUnit {
public:
    CWarrior() {}
    void set_strength(unsigned int strength) { m_strength = strength; }
    void set_health(unsigned int health) { m_health = health; }
    void set_intelligence(unsigned int intelligence) { m_intelligence = intelligence; }
    void set_charisma(unsigned int charisma) { m_charisma = charisma; }
    void set_weapon(unsigned int weapon) { m_weapon = weapon; }
    void show_parametres() {
        std::cout << "WARRIOR" << std::endl;
        std::cout << "STRENGTH: " << m_strength << std::endl;
        std::cout << "HEALTH: " << m_health << std::endl;
        std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
        std::cout << "CHARISMA: " << m_charisma << std::endl;
        std::cout << "WEAPON " << m_weapon << std::endl;
        std::cout << std::endl;
    }
    ~CWarrior() {}

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

class CAgent : public CUnit {
public:
    CAgent() {}
    void set_strength(unsigned int strength) { m_strength = strength; }
    void set_health(unsigned int health) { m_health = health; }
    void set_intelligence(unsigned int intelligence) { m_intelligence = intelligence; }
    void set_charisma(unsigned int charisma) { m_charisma = charisma; }
    void set_weapon(unsigned int weapon) { m_weapon = weapon; }
    void show_parametres() {
        std::cout << "AGENT" << std::endl;
        std::cout << "STRENGTH: " << m_strength << std::endl;
        std::cout << "HEALTH: " << m_health << std::endl;
        std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
        std::cout << "CHARISMA: " << m_charisma << std::endl;
        std::cout << "WEAPON " << m_weapon << std::endl;
        std::cout << std::endl;
    }
    ~CAgent() {}

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

class CDragon : public CUnit {
public:
    CDragon() {}
    void set_strength(unsigned int strength) { m_strength = strength; }
    void set_health(unsigned int health) { m_health = health; }
    void set_intelligence(unsigned int intelligence) { m_intelligence = intelligence; }
    void set_charisma(unsigned int charisma) { m_charisma = charisma; }
    void set_weapon(unsigned int weapon) { m_weapon = weapon; }
    void show_parametres() {
        std::cout << "DRAGON" << std::endl;
        std::cout << "STRENGTH: " << m_strength << std::endl;
        std::cout << "HEALTH: " << m_health << std::endl;
        std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
        std::cout << "CHARISMA: " << m_charisma << std::endl;
        std::cout << "WEAPON " << m_weapon << std::endl;
        std::cout << std::endl;
    }
    ~CDragon() {}

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

class CWizard : public CUnit {
public:
    CWizard() {}
    void set_strength(unsigned int strength) { m_strength = strength; }
    void set_health(unsigned int health) { m_health = health; }
    void set_intelligence(unsigned int intelligence) { m_intelligence = intelligence; }
    void set_charisma(unsigned int charisma) { m_charisma = charisma; }
    void set_weapon(unsigned int weapon) { m_weapon = weapon; }
    void show_parametres() {
        std::cout << "WIZARD" << std::endl;
        std::cout << "STRENGTH: " << m_strength << std::endl;
        std::cout << "HEALTH: " << m_health << std::endl;
        std::cout << "INTELLIGENCE: " << m_intelligence << std::endl;
        std::cout << "CHARISMA: " << m_charisma << std::endl;
        std::cout << "WEAPON " << m_weapon << std::endl;
        std::cout << std::endl;
    }
    ~CWizard() {}

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

template <class T>
class CSingleton {
public:
    CSingleton() = delete;
    ~CSingleton() = delete;
    CSingleton(const CSingleton&) = delete;
    CSingleton& operator=(const CSingleton&) = delete;

    static T* get_instance() {
        if(m_instance == 0) {
            m_instance = new T();
            return m_instance;
        }
        return 0;
    }

private:
    static T* m_instance;
};

template <typename T>
T* CSingleton<T>::m_instance = 0;

class CArmyFactory {
public:
    virtual CWarrior* create_warrior() = 0;
    virtual CAgent* create_agent() = 0;
    virtual CDragon* create_dragon() = 0;
    virtual CWizard* create_wizard() = 0;
    virtual ~CArmyFactory() {}
};

class CHumanArmyFactory : public CArmyFactory {
public:
    CWarrior* create_warrior() {
        CWarrior* curr_warrior = new CWarrior;
        curr_warrior -> set_strength(5);
        curr_warrior -> set_health(5);
        curr_warrior -> set_intelligence(1);
        curr_warrior -> set_charisma(1);
        curr_warrior -> set_weapon(4);
        return curr_warrior;
    }
    CAgent* create_agent() {
        CAgent* curr_agent = CSingleton<CAgent>::get_instance();
        if(curr_agent == 0) {
            std::cout << "The agent already exists! You cannot create a new one.\n";
            return 0;
        }
        curr_agent -> set_strength(2);
        curr_agent -> set_health(5);
        curr_agent -> set_intelligence(5);
        curr_agent -> set_charisma(7);
        curr_agent -> set_weapon(2);
        return curr_agent;
    }
    CDragon* create_dragon() {
        CDragon* curr_dragon = CSingleton<CDragon>::get_instance();
        if(curr_dragon == 0) {
            std::cout << "The dragon already exists! You cannot create a new one.\n";
            return 0;
        }
        curr_dragon -> set_strength(10);
        curr_dragon -> set_health(10);
        curr_dragon -> set_intelligence(0);
        curr_dragon -> set_charisma(0);
        curr_dragon -> set_weapon(10);
        return curr_dragon;
    }
    CWizard* create_wizard() {
        CWizard* curr_wizard = CSingleton<CWizard>::get_instance();
        if(curr_wizard == 0) {
            std::cout << "The wizard already exists! You cannot create a new one.\n";
            return 0;
        }
        curr_wizard -> set_strength(10);
        curr_wizard -> set_health(10);
        curr_wizard -> set_intelligence(10);
        curr_wizard -> set_charisma(10);
        curr_wizard -> set_weapon(10);
    }
};

class CAlienArmyFactory : public CArmyFactory {
public:
    CWarrior* create_warrior() {
        CWarrior* curr_warrior = new CWarrior;
        curr_warrior -> set_strength(5);
        curr_warrior -> set_health(4);
        curr_warrior -> set_intelligence(0);
        curr_warrior -> set_charisma(0);
        curr_warrior -> set_weapon(5);
        return curr_warrior;
    }
    CAgent* create_agent() {
        CAgent* curr_agent = CSingleton<CAgent>::get_instance();
        if(curr_agent == 0) {
            std::cout << "The agent already exists! You cannot create a new one.\n";
            return 0;
        }
        curr_agent -> set_strength(2);
        curr_agent -> set_health(4);
        curr_agent -> set_intelligence(4);
        curr_agent -> set_charisma(4);
        curr_agent -> set_weapon(1);
        return curr_agent;
    }
    CDragon* create_dragon() {
        CDragon* curr_dragon = CSingleton<CDragon>::get_instance();
        if(curr_dragon == 0) {
            std::cout << "The dragon already exists! You cannot create a new one.\n";
            return 0;
        }
        curr_dragon -> set_strength(10);
        curr_dragon -> set_health(10);
        curr_dragon -> set_intelligence(0);
        curr_dragon -> set_charisma(0);
        curr_dragon -> set_weapon(10);
        return curr_dragon;
    }
    CWizard* create_wizard() {
        CWizard* curr_wizard = CSingleton<CWizard>::get_instance();
        if(curr_wizard == 0) {
            std::cout << "The wizard already exists! You cannot create a new one.\n";
            return 0;
        }
        curr_wizard -> set_strength(10);
        curr_wizard -> set_health(10);
        curr_wizard -> set_intelligence(10);
        curr_wizard -> set_charisma(10);
        curr_wizard -> set_weapon(10);
    }
};

class Army {
public:
    Army() {}
    void add_unit(CUnit* curr_unit) {
        if(curr_unit != 0) {
            my_army.push_back(curr_unit);
        }
    }
    void show_army() {
        for(int i = 0; i < my_army.size(); ++i) {
            my_army[i] -> show_parametres();
        }
    }
    ~Army() {}

private:
    std::vector<CUnit*> my_army;
};

#endif // GAME_H_INCLUDED
