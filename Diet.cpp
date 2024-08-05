#include "Diet.hpp"
#include <iostream>

Diet::Diet(User user) : user(user) {
    daily_calories = user.calculate_daily_calories();
    calculate_macros();
}

void Diet::calculate_macros() {
    double carbs_calories = daily_calories * 0.50;
    double proteins_calories = daily_calories * 0.25;
    double fats_calories = daily_calories * 0.25;

    carbs_grams = carbs_calories / 4; // 1 grama = 4 calorias
    proteins_grams = proteins_calories / 4; // 1 grama = 4 calorias
    fats_grams = fats_calories / 9; // 1 grama = 9 calorias
}
/*void Diet::print_macros() {
    std::cout << "Necessidade calórica diária: " << daily_calories << " kcal\n";
    std::cout << "Carboidratos: " << carbs_grams << " g\n";
    std::cout << "Proteínas: " << proteins_grams << " g\n";
    std::cout << "Gorduras: " << fats_grams << " g\n";
}*/

void Diet::suggest_meal(Meal& meal, double carbs, double proteins, double fats) {
    std::cout << "Choose one option from each group:\n";

    std::cout << "\nCarbohydrate options:\n";
    for (const auto& food : meal.carbs_options) {
        double quantity = (carbs / food.carbs) * 100;
        std::cout << "- " << food.name << ": " << quantity << " grams\n";
    }

    std::cout << "\nProtein options:\n";
    for (const auto& food : meal.proteins_options) {
        double quantity = (proteins / food.proteins) * 100;
        std::cout << "- " << food.name << ": " << quantity << " grams\n";
    }

    std::cout << "\nFat options:\n";
    for (const auto& food : meal.fats_options) {
        double quantity = (fats / food.fats) * 100;
        std::cout << "- " << food.name << ": " << quantity << " grams\n";
    }
}

void Diet::suggest_meal_plan(Meal& breakfast, Meal& lunch, Meal& snack, Meal& dinner) {
    double breakfastCarbs = carbs_grams * 0.25;
    double breakfastProteins = proteins_grams * 0.25;
    double breakfastFats = fats_grams * 0.25;

    double lunchCarbs = carbs_grams * 0.35;
    double lunchProteins = proteins_grams * 0.35;
    double lunchFats = fats_grams * 0.35;

    double snackCarbs = carbs_grams * 0.15;
    double snackProteins = proteins_grams * 0.15;
    double snackFats = fats_grams * 0.15;

    double dinnerCarbs = carbs_grams * 0.25;
    double dinnerProteins = proteins_grams * 0.25;
    double dinnerFats = fats_grams * 0.25;

    std::cout << "\nBreakfast:\n";
    suggest_meal(breakfast, breakfastCarbs, breakfastProteins, breakfastFats);

    std::cout << "\nLunch:\n";
    suggest_meal(lunch, lunchCarbs, lunchProteins, lunchFats);

    std::cout << "\nSnack:\n";
    suggest_meal(snack, snackCarbs, snackProteins, snackFats);

    std::cout << "\nDinner:\n";
    suggest_meal(dinner, dinnerCarbs, dinnerProteins, dinnerFats);
}
