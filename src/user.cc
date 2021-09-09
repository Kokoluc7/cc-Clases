#include "user.hh"

user::user(unsigned int age, std::string name, float height, float weight)
{
    this->age = age;
    this->name = name;
    this->height = height;
    this->weight = weight;
}

user::~user()
{
}

unsigned int GetAge() const
{
    return age;
}
std::string GetName() const
{
    return name;
}
float GetHeight() const
{
    return height;
}
float GetWeight() const
{
    return weight;
}
