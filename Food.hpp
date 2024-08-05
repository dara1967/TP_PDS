#ifndef FOOD_HPP
#define FOOD_HPP

#include <string>

class Food {
public:
    std::string name;
    double carbs;    // grams
    double proteins; // grams
    double fats;     // grams
    double calories; // kcal

    Food(std::string name, 
    double carbs, 
    double proteins, 
    double fats, 
    double calories);
};

#endif // FOOD_HPP
