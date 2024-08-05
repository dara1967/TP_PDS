#ifndef MEAL_HPP
#define MEAL_HPP

#include <vector>
#include "Food.hpp"

class Meal {
public:
    std::vector<Food> carbs_options;
    std::vector<Food> proteins_options;
    std::vector<Food> fats_options;

    void add_carb_option(Food food);
    void add_protein_option(Food food);
    void add_fat_option(Food food);
    //void print_options();
    void calculate_food_quantities(double carbs, double proteins, double fats);
};

#endif // MEAL_HPP
