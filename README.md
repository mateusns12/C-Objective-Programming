# Objective Programming in C 

![Language](https://img.shields.io/badge/Language-C-00599c?style=for-the-badge&logo=c)
![System](https://img.shields.io/badge/System-Arch_WSL2-A100FF?style=for-the-badge&logo=windows)

Testing "functional programming" in C, to simulate objects and class methods like in CPP.
In C all members of a struct are public by default, so there is no need to create get/set methods, but it is a great exercise to create them. 

This program will create a struct type Entity, calling the creation by a constructor. Then fill its properties by passing values as arguments in the constructor, and changing them later, via set methods. The current values are printed out by a method. Then it is liberated using free on the dynamic allocated properties, then on the struct itself.

# Notes

- Valgrid shows no memory leaks, but 44 errors of read, write operations on dynamic allocated values. 

# To-do

- [ ] Simulate private members.
- [ ] Fix errors and undefined behavior.

