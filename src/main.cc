#include <iostream>
//#include "person.hh"
#include "user.hh"

int main()
{
   /*person* person {new person(18, "Juanito", 1.70f, 100f)};

    std::cout << person->name << std::endl;
    std::cout << person->age << std::endl;
    std::cout << person->height << std::endl;
    std::cout << person->weight << std::endl;*/

    user* user1{new user(18, "Juanito", 1.70f, 100f)};

    std::cout << user1->GetName() << std::endl;
    std::cout << user1->GetAge() << std::endl;
    std::cout << user1->GetHeight() << std::endl;
    std::cout << user1->GetWeight() << std::endl;

    std::cin.get();
    return 0;
}