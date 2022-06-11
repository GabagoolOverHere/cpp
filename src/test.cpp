#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Spell {
private:
    string scrollName;
public:
    Spell() : scrollName("") {}

    Spell(string name) : scrollName(name) {}

    virtual ~Spell() {}

    string revealScrollName() {
        return scrollName;
    }
};

class Fireball : public Spell {
private:
    int power;
public:
    Fireball(int power) : power(power) {}

    void revealFirepower() {
        cout << "Fireball: " << power << endl;
    }
};

class Frostbite : public Spell {
private:
    int power;
public:
    Frostbite(int power) : power(power) {}

    void revealFrostpower() {
        cout << "Frostbite: " << power << endl;
    }
};

class Thunderstorm : public Spell {
private:
    int power;
public:
    Thunderstorm(int power) : power(power) {}

    void revealThunderpower() {
        cout << "Thunderstorm: " << power << endl;
    }
};

class Waterbolt : public Spell {
private:
    int power;
public:
    Waterbolt(int power) : power(power) {}

    void revealWaterpower() {
        cout << "Waterbolt: " << power << endl;
    }
};

class SpellJournal {
public:
    static string journal;

    static string read() {
        return journal;
    }
};

string SpellJournal::journal = "";

void counterspell(Spell *spell) {
    if (dynamic_cast<Fireball *>(spell) != nullptr) {
        auto *fire = dynamic_cast<Fireball *>(spell);
        fire->revealFirepower();
    } else if (dynamic_cast<Frostbite *>(spell) != nullptr) {
        auto *frost = dynamic_cast<Frostbite *>(spell);
        frost->revealFrostpower();
    } else if (dynamic_cast<Waterbolt *>(spell) != nullptr) {
        auto *water = dynamic_cast<Waterbolt *>(spell);
        water->revealWaterpower();
    } else if (dynamic_cast<Thunderstorm *>(spell) != nullptr) {
        auto *thunder = dynamic_cast<Thunderstorm *>(spell);
        thunder->revealThunderpower();
    } else {
        int result, spell_cursor, journal_cursor;
        result = spell_cursor = journal_cursor = 0;

        vector<vector<int>> grid;

        std::cout << result << std::endl;
    }
}

class Wizard {
public:
    Spell *cast() {
        Spell *spell;
        string s;
        cin >> s;
        int power;
        cin >> power;
        if (s == "fire") {
            spell = new Fireball(power);
        } else if (s == "frost") {
            spell = new Frostbite(power);
        } else if (s == "water") {
            spell = new Waterbolt(power);
        } else if (s == "thunder") {
            spell = new Thunderstorm(power);
        } else {
            spell = new Spell(s);
            cin >> SpellJournal::journal;
        }
        return spell;
    }
};

int main() {
    int T;
    cin >> T;
    Wizard Arawn;
    while (T--) {
        Spell *spell = Arawn.cast();
        counterspell(spell);
    }
    return 0;
}