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

/*void Meal::print_options() {
    std::cout << "Opções de carboidratos:\n";
    for (size_t i = 0; i < carbs_options.size(); ++i) {
        std::cout << i + 1 << ". " << carbs_options[i].name << ": " 
                  << carbs_options[i].carbs << "g carbs, " 
                  << carbs_options[i].proteins << "g proteins, " 
                  << carbs_options[i].fats << "g fats, " 
                  << carbs_options[i].calories << " kcal\n";
    }

    std::cout << "Opções de proteinas:\n";
    for (size_t i = 0; i < proteins_options.size(); ++i) {
        std::cout << i + 1 << ". " << proteins_options[i].name << ": " 
                  << proteins_options[i].carbs << "g carbs, " 
                  << proteins_options[i].proteins << "g proteins, " 
                  << proteins_options[i].fats << "g fats, " 
                  << proteins_options[i].calories << " kcal\n";
    }

    std::cout << "Opções de gorduras:\n";
    for (size_t i = 0; i < fats_options.size(); ++i) {
        std::cout << i + 1 << ". " << fats_options[i].name << ": " 
                  << fats_options[i].carbs << "g carbs, " 
                  << fats_options[i].proteins << "g proteins, " 
                  << fats_options[i].fats << "g fats, " 
                  << fats_options[i].calories << " kcal\n";
    }
}*/
