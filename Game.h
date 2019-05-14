#ifndef GAME_GAME_H
#define GAME_GAME_H

class CUnit {
public:
    virtual void set_strength(unsigned int strength) = 0;
    virtual void set_health(unsigned int health) = 0;
    virtual void set_intelligence(unsigned int intelligence) = 0;
    virtual void set_charisma(unsigned int charisma) = 0;
    virtual void set_weapon(unsigned int weapon) = 0;
    virtual int get_strength() const = 0;
    virtual int get_health() const = 0;
    virtual int get_intelligence() const = 0;
    virtual int get_charisma() const = 0;
    virtual int get_weapon() const = 0;
    virtual void show_parametres() const = 0;
};

class CWarrior : public CUnit {
public:
    CWarrior() : m_strength(0), m_health(0), m_intelligence(0), m_charisma(0), m_weapon(0) {}
    void set_strength(unsigned int strength) override;
    void set_health(unsigned int health) override;
    void set_intelligence(unsigned int intelligence) override;
    void set_charisma(unsigned int charisma) override;
    void set_weapon(unsigned int weapon) override;
    int get_strength() const override;
    int get_health() const override;
    int get_intelligence() const override;
    int get_charisma() const override;
    int get_weapon() const override;
    void show_parametres() const override;

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

bool operator==(const CWarrior& first_warrior, const CWarrior& second_warrior);

class CAgent : public CUnit {
public:
    CAgent() : m_strength(0), m_health(0), m_intelligence(0), m_charisma(0), m_weapon(0) {}
    void set_strength(unsigned int strength) override;
    void set_health(unsigned int health) override;
    void set_intelligence(unsigned int intelligence) override;
    void set_charisma(unsigned int charisma) override;
    void set_weapon(unsigned int weapon) override;
    int get_strength() const override;
    int get_health() const override;
    int get_intelligence() const override;
    int get_charisma() const override;
    int get_weapon() const override;
    void show_parametres() const override;

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

bool operator==(const CAgent& first_agent, const CAgent& second_agent);

class CDragon : public CUnit {
public:
    CDragon() : m_strength(0), m_health(0), m_intelligence(0), m_charisma(0), m_weapon(0) {}
    void set_strength(unsigned int strength) override;
    void set_health(unsigned int health) override;
    void set_intelligence(unsigned int intelligence) override;
    void set_charisma(unsigned int charisma) override;
    void set_weapon(unsigned int weapon) override;
    int get_strength() const override;
    int get_health() const override;
    int get_intelligence() const override;
    int get_charisma() const override;
    int get_weapon() const override;
    void show_parametres() const override;

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

bool operator==(const CDragon& first_dragon, const CDragon& second_dragon);

class CWizard : public CUnit {
public:
    CWizard() : m_strength(0), m_health(0), m_intelligence(0), m_charisma(0), m_weapon(0) {}
    void set_strength(unsigned int strength) override;
    void set_health(unsigned int health) override;
    void set_intelligence(unsigned int intelligence) override;
    void set_charisma(unsigned int charisma) override;
    void set_weapon(unsigned int weapon) override;
    int get_strength() const override;
    int get_health() const override;
    int get_intelligence() const override;
    int get_charisma() const override;
    int get_weapon() const override;
    void show_parametres() const override;

private:
    unsigned int m_strength;
    unsigned int m_health;
    unsigned int m_intelligence;
    unsigned int m_charisma;
    unsigned int m_weapon;
};

bool operator==(const CWizard& first_wizard, const CWizard& second_wizard);

template <class T>
class CSingleton {
public:
    CSingleton() = delete;
    ~CSingleton() = delete;
    CSingleton(const CSingleton&) = delete;
    CSingleton& operator=(const CSingleton&) = delete;

    static T* get_instance();

private:
    static T* m_instance;
};

class CArmyFactory {
public:
    virtual CWarrior* create_warrior() = 0;
    virtual CAgent* create_agent() = 0;
    virtual CDragon* create_dragon() = 0;
    virtual CWizard* create_wizard() = 0;
};

class CHumanArmyFactory : public CArmyFactory {
public:
    CWarrior* create_warrior() override;
    CAgent* create_agent() override;
    CDragon* create_dragon() override;
    CWizard* create_wizard() override;
};

class CAlienArmyFactory : public CArmyFactory {
public:
    CWarrior* create_warrior() override;
    CAgent* create_agent() override;
    CDragon* create_dragon() override;
    CWizard* create_wizard() override;
};

class Army {
public:
    Army() = default;
    void add_unit(CUnit* curr_unit);
    void show_army();

private:
    std::vector<CUnit*> my_army;
};

#endif //GAME_GAME_H
