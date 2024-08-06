#include "Diet.hpp"
#include <iostream>

Diet::Diet(User user) : user(user) {
    daily_calories = user.calculate_daily_calories();
    calculate_macros();
}
//calcula a quantidade necessária de macronutrientes
void Diet::calculate_macros() {
    double carbs_calories = daily_calories * 0.50;
    double proteins_calories = daily_calories * 0.25;
    double fats_calories = daily_calories * 0.25;

    carbs_grams = carbs_calories / 4; // 1 grama = 4 calorias
    proteins_grams = proteins_calories / 4; // 1 grama = 4 calorias
    fats_grams = fats_calories / 9; // 1 grama = 9 calorias
}

void Diet::suggest_meal(Meal& meal, double carbs, double proteins, double fats) {
    std::cout << "Escolha apenas uma opção de cada grupo:\n";

    std::cout << "\nOpções de Carboidratos:\n";
    for (const auto& food : meal.carbs_options) {
        double quantity = (carbs / food.carbs) * 100;
        std::cout << "- " << food.name << ": " << quantity << " gramas\n";
    }

    std::cout << "\nOpções de Proteínas:\n";
    for (const auto& food : meal.proteins_options) {
        double quantity = (proteins / food.proteins) * 100;
        std::cout << "- " << food.name << ": " << quantity << " gramas\n";
    }

    std::cout << "\nOpções de Gorduras:\n";
    for (const auto& food : meal.fats_options) {
        double quantity = (fats / food.fats) * 100;
        std::cout << "- " << food.name << ": " << quantity << " gramas\n";
    }
}
//divide calorias diárias por refeição e sugere opções de refeições
void Diet::suggest_meal_plan(Meal& breakfast, Meal& lunch, Meal& snack, Meal& dinner) {
    double breakfast_carbs = carbs_grams * 0.25;
    double breakfast_proteins = proteins_grams * 0.25;
    double breakfast_fats = fats_grams * 0.25;

    double lunch_carbs = carbs_grams * 0.35;
    double lunch_proteins = proteins_grams * 0.35;
    double lunch_fats = fats_grams * 0.35;

    double snack_carbs = carbs_grams * 0.15;
    double snack_proteins = proteins_grams * 0.15;
    double snack_fats = fats_grams * 0.15;

    double dinner_carbs = carbs_grams * 0.25;
    double dinner_proteins = proteins_grams * 0.25;
    double dinner_fats = fats_grams * 0.25;

    std::cout << "\nCafé da Manhã:\n";
    suggest_meal(breakfast, breakfast_carbs, breakfast_proteins, breakfast_fats);

    std::cout << "\nAlmoço:\n";
    suggest_meal(lunch, lunch_carbs, lunch_proteins, lunch_fats);

    std::cout << "\nLanche da Tarde:\n";
    suggest_meal(snack, snack_carbs, snack_proteins, snack_fats);

    std::cout << "\nJantar:\n";
    suggest_meal(dinner, dinner_carbs, dinner_proteins, dinner_fats);
}
