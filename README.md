
```markdown
# CPP_03 Inheritance

## Exercise 00: Aaaaand... OPEN!
First, you have to implement a class! How original! It will be called `ClapTrap`.

### Key Points to Remember:
- Implement constructors and a destructor.
- Define attributes like `name`, `hitPoints`, `energyPoints`, and `attackDamage`.
- Add member functions for `attack()`, `takeDamage()`, and `beRepaired()`.

### Example:
```cpp
class ClapTrap {
private:
    std::string name;
    int hitPoints;
    int energyPoints;
    int attackDamage;

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
};
```

Happy coding! Once you're comfortable with `ClapTrap`, you're ready to move on to the next exercise.
```

Feel free to modify or extend the example as needed. Let's keep this coding adventure rolling! When you're ready, we can jump into Exercise 01.
