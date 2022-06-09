#ifndef PERSON_H
#define PERSON_H

#include <string>
#include <iostream>

class Person {
friend std::istream &read(std::istream &is, Person &p);
friend std::ostream &print(std::ostream &os, Person &p);
public:
  Person() = default;
  Person(const std::string &name) : name(name) {}
  Person(const std::string &address) : address(address) {};
  Person(const std::string &name, const std::string &address) : 
         name(name), address(address) {}
  Person(std::istream &is);
  std::string get_name() const { return name; }
  std::string get_address() const { return address; }
private:
  std::string name;
  std::string address;
};

Person::Person(std::istream &is) {
  is >> name >> address;
}

std::ostream &print(std::ostream &os, Person &p) {
  os << p.name << " " << p.address << std::endl;
  return os;
}

std::istream &read(std::istream &is, Person &p) {
  is >> p.name >> p.address;
  return is;
}

#endif // PERSON_H