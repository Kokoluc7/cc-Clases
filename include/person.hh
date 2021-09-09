#pragma once
#include <string>

struct person
{
    unsigned int age;
    const char* name;
    float height;
    float weight;   

    person(unsigned int age, const char* name, float height, float weight)
    {
        this->age = age;
        this->name = name;
        this->height = height;
        this->weight = weight;
    } 

};

