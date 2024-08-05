#include "Meal.hpp"
#include <iostream>

void Meal::add_carb_option(Food food) {
    carbs_options.push_back(food);
}

void Meal::add_protein_option(Food food) {
    proteins_options.push_back(food);
}

void Meal::add_fat_option(Food food) {
    fats_options.push_back(food);
}
void Meal::calculate_food_quantities(double carbs, double proteins, double fats) {
    std::cout << "Quantities for carbohydrate options:\n";
    for (const auto& food : carbs_options) {
        double quantity = (carbs / food.carbs) * 100;
        std::cout << food.name << ": " << quantity << " grams\n";
    }

    std::cout << "Quantities for protein options:\n";
    for (const auto& food : proteins_options) {
        double quantity = (proteins / food.proteins) * 100;
        std::cout << food.name << ": " << quantity << " grams\n";
    }

    std::cout << "Quantities for fat options:\n";
    for (const auto& food : fats_options) {
        double quantity = (fats / food.fats) * 100;
        std::cout << food.name << ": " << quantity << " grams\n";
    }
}
