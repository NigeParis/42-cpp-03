# CPP 03 - Inheritance

Welcome to the cpp 03 module! This module dives into the thrilling world of inheritance in C++. Get ready to explore classes and their offspring. Below, you'll find an engaging overview of each exercise to guide you through this adventure.

## Exercise 00: Aaaaand... OPEN!
Your mission, should you choose to accept it, is to implement a class named `ClapTrap`. This will be the cornerstone of your inheritance journey, so make it sturdy and versatile.

### Key Points to Remember:
- Design and implement constructors and a destructor.
- Define essential attributes like `name`, `hitPoints`, `energyPoints`, and `attackDamage`.
- Add member functions for `attack()`, `takeDamage()`, and `beRepaired()`.

### Example:
```cpp
class ClapTrap {

public:
    ClapTrap(std::string n) : name(n), hitPoints(100), energyPoints(50), attackDamage(20) {
        std::cout << "ClapTrap " << name << " constructed." << std::endl;
    }
    ~ClapTrap() {
        std::cout << "ClapTrap " << name << " destroyed." << std::endl;
    }

    void attack(const std::string &target) {
        std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attackDamage << " points of damage!" << std::endl;
    }

    void takeDamage(unsigned int amount) {
        hitPoints -= amount;
        std::cout << "ClapTrap " << name << " takes " << amount << " points of damage!" << std::endl;
    }

    void beRepaired(unsigned int amount) {
        hitPoints += amount;
        std::cout << "ClapTrap " << name << " is repaired for " << amount << " hit points!" << std::endl;
    }

    private:

        std::string name;
        int hitPoints;
        int energyPoints;
        int attackDamage;
};


```


## Exercise 01: Serena, my love!
Time to introduce a new family member! Create a derived robot named `ScavTrap` that inherits from `ClapTrap`. Its constructors, destructor, and `attack()` will have their own unique flair to showcase individuality.

### Key Points to Remember:
- Ensure `ScavTrap` inherits `ClapTrap`'s constructors and destructor.
- Override `attack()` to print distinct and specific messages.
- Highlight individuality in the constructors and destructor messages.

## Exercise 02: Repetitive work
Next up, expand the `ClapTrap` lineage with the `FragTrap` class. This class will inherit from `ClapTrap` and bring its own unique behaviors to the table.

### Key Points to Remember:
- Implement `FragTrap` with distinctive behavior in its methods.
- Strengthen the inheritance structure.
- Introduce specific functionalities exclusive to `FragTrap`.

## Exercise 03: Now it’s weird!
Get ready for the ultimate challenge: creating a `ClapTrap` that's half `FragTrap`, half `ScavTrap`. Meet `DiamondTrap`, a daring combination that inherits from both `FragTrap` and `ScavTrap`.

### Key Points to Remember:
- `DiamondTrap` should inherit constructors and destructors from both `FragTrap` and `ScavTrap`.
- Combine features from both parent classes creatively.
- Ensure it has unique identifiers and methods reflecting its dual heritage.

Happy coding! Embrace the quirks and challenges of inheritance. Each exercise builds on the last, so make sure your foundation is strong and your implementations are inventive and robust.

