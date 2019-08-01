#ifndef TELEPHONE_H
#define TELEPHONE_H
#include<iostream>
#include<string.h>
#include<stdexcept>
#include<regex>
typedef unsigned long size_t;

// #include "nbind/nbind.h"

class Telephone{
    public:
        bool Validate(std::string);
        bool Validate(std::string, std::string);
        bool Validate(std::string, std::string, std::string);
        std::string Random(bool); 
        std::string Random(bool, std::string);
        std::string Random(bool, std::string, std::string);
        std::string Generate(int);
        std::string Generate_Invalid(int);
};

#endif 

// NBIND_CLASS(Telephone)      {
//     construct<>();
//     multimethod(Validate, args(std::string), "Validate");
//     multimethod(Validate, args(std::string, std::string), "ValidateWithCountryCode");
//     multimethod(Validate, args(std::string, std::string, std::string), "ValidateWithAreaCode");
//     multimethod(Random, args(bool), "Random");
//     multimethod(Random, args(bool, std::string), "RandomWithCountryCode");
//     multimethod(Random, args(bool, std::string), "RandomWithAreaCode");
//     method(Generate);
//     method(Generate_Invalid);
// }