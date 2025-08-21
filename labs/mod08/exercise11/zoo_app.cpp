#include "cat.h"
#include "fish.h"
#include "spider.h"

int main() {
    // object header (pointer to cat's virtual table) 8B
    // legs (int: 4B)
    // string

    // cat's virtual table
    // class name
    // animal::walk's address
    // cat::eat's address
    // cat::setName
    // cat::getName
    // cat::play
    // ~cat

    // fish's virtual table
    // class name
    // fish::walk's address
    // fish::eat's address
    // ~fish

    zoo::animal* animals[] {
        new zoo::cat(),
        new zoo::spider(),
        new zoo::cat(std::string("Garfield")),
        new zoo::fish("free willy"),
        new zoo::fish("jaws")
    };
    zoo::animal *p = new zoo::cat();
    zoo::pet *t = new zoo::cat();
    zoo::animal *q = new zoo::fish("free willy");
    zoo::pet *u = new zoo::fish("free willy");
    zoo::animal *r = new zoo::spider();
    // zoo::pet *s = new zoo::spider(); // error

    for (auto animal : animals) {
        std::cout << typeid(*animal).name() << std::endl;
        animal->walk();
        animal->eat();
        if (const auto pet = dynamic_cast<zoo::pet*>(animal))
        { // RTTI (Run-time Type Information) -> Virtual Table
            pet->play();
        }
    }
    for (const auto animal : animals) {
        delete animal;
    }
    return 0;
}
