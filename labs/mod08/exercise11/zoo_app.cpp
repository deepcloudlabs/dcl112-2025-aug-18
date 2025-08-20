#include "cat.h"
#include "fish.h"
#include "spider.h"

int main() {
    zoo::animal* animals[] {
        new zoo::cat(),
        new zoo::spider(),
        new zoo::cat(std::string("Garfield")),
        new zoo::fish("free willy"),
        new zoo::fish("jaws")
    };
    for (auto animal : animals) {
        animal->walk();
        animal->eat();
        if (const auto pet = dynamic_cast<zoo::pet*>(animal)) { // RTTI (Run-time Type Information)
            pet->play();
        }
    }
    for (const auto animal : animals) {
        delete animal;
    }
    return 0;
}
