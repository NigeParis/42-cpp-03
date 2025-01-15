# CPP 03 - Inheritance

Welcome to the cpp 03 module! This module focuses on the concepts of inheritance in C++. Get ready to dive into the world of classes and derived classes. Below, you'll find a detailed overview of each exercise to guide you along the way.

## Exercise 00: Aaaaand... OPEN!
Your first task is to implement a class named `ClapTrap`. This is the foundation of your inheritance journey, so make it robust.

### Key Points to Remember:
- Implement constructors and a destructor.
- Define attributes like `name`, `hitPoints`, `energyPoints`, and `attackDamage`.
- Add member functions for `attack()`, `takeDamage()`, and `beRepaired()`.

## Exercise 01: Serena, my love!
Now, you'll create a derived robot named `ScavTrap` which will inherit from `ClapTrap`. Its constructors, destructor, and `attack()` will print different messages to show individuality.

### Key Points to Remember:
- Ensure `ScavTrap` inherits `ClapTrap`'s constructors and destructor.
- Override `attack()` to print specific messages.
- Emphasize individuality in constructors and destructor messages.

## Exercise 02: Repetitive work
Next, implement a `FragTrap` class that inherits from `ClapTrap`.

### Key Points to Remember:
- Implement `FragTrap` with unique behavior in its methods.
- Reinforce the inheritance structure.
- Explore adding specific functionalities exclusive to `FragTrap`.

## Exercise 03: Now it’s weird!
Finally, you'll create a `ClapTrap` that's half `FragTrap`, half `ScavTrap`. It will be named `DiamondTrap`, and it will inherit from both the `FragTrap` and the `ScavTrap`.

### Key Points to Remember:
- `DiamondTrap` should inherit constructors and destructors from both `FragTrap` and `ScavTrap`.
- Be creative with how `DiamondTrap` combines features from both parent classes.
- Ensure it has unique identifiers and methods reflecting its dual heritage.

Happy coding! Embrace the quirks and challenges of inheritance. Each exercise builds on the last, so make sure your foundation is strong and your implementations are creative and robust.
