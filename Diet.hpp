#ifndef DIET_HPP
#define DIET_HPP

#include "User.hpp"
#include "Meal.hpp"

class Diet {
public:
    User user;
    double daily_calories;
    double carbs_grams;
    double proteins_grams;
    double fats_grams;

    Diet(User user);

    void calculate_macros();
    void print_macros();
    void suggest_meal_plan(Meal& breakfast, Meal& lunch, Meal& snack, Meal& dinner);
    void suggest_meal(Meal& meal, double carbs, double proteins, double fats);
};

#endif // DIET_HPP
