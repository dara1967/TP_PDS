#include <iostream>
#include "Food.hpp"
#include "Meal.hpp"
#include "User.hpp"
#include "Diet.hpp"

int main() {
    double weight, height;
    int age;
    char gender;
    std::string goal;

    // Entrada de dados do usuário
    std::cout << "Insira o seu peso (kg): ";
    std::cin >> weight;
    std::cout << "Insira a sua altura (cm): ";
    std::cin >> height;
    std::cout << "Insira a sua idade: ";
    std::cin >> age;
    std::cout << "Insira o seu gênero (M para masculino /F para feminino): ";
    std::cin >> gender;
    std::cout << "Qual é o seu objetivo? (perder peso/ganhar peso/manter meu peso): ";
    std::cin >> goal;

    User user(weight, height, age, gender, goal);

    Diet diet(user);
    //diet.print_macros();

    // Definindo opções de alimentos para cada refeição
    Meal breakfast;
    breakfast.add_carb_option(Food("Aveia", 27, 5, 3, 150));
    breakfast.add_carb_option(Food("Banana", 27, 1, 0, 105));
    breakfast.add_carb_option(Food("Pão Integral", 12, 3, 1, 69));
    breakfast.add_protein_option(Food("Ovo", 1, 6, 5, 70));
    breakfast.add_protein_option(Food("Iogurte", 12, 15, 0, 120));
    breakfast.add_protein_option(Food("Queijo Cottage", 3, 11, 2, 90));
    breakfast.add_fat_option(Food("Manteiga", 6, 3, 16, 190));
    breakfast.add_fat_option(Food("Abacate", 12, 3, 15, 234));
    breakfast.add_fat_option(Food("Queijo", 1, 7, 9, 110));

    Meal lunch;
    lunch.add_carb_option(Food("Brown Rice", 45, 5, 1, 215));
    lunch.add_carb_option(Food("Quinoa", 39, 8, 3.5, 222));
    lunch.add_carb_option(Food("Sweet Potato", 27, 2, 0, 112));
    lunch.add_protein_option(Food("Chicken Breast", 0, 31, 4, 165));
    lunch.add_protein_option(Food("Tofu", 2, 8, 4, 94));
    lunch.add_protein_option(Food("Lentils", 18, 9, 0, 230));
    lunch.add_fat_option(Food("Olive Oil", 0, 0, 14, 120));
    lunch.add_fat_option(Food("Avocado", 12, 3, 15, 234));
    lunch.add_fat_option(Food("Cheese", 1, 7, 9, 110));

    Meal snack;
    snack.add_carb_option(Food("Apple", 25, 0, 0, 95));
    snack.add_carb_option(Food("Berries", 15, 1, 0, 60));
    snack.add_carb_option(Food("Carrot Sticks", 10, 1, 0, 41));
    snack.add_protein_option(Food("Greek Yogurt", 12, 15, 0, 120));
    snack.add_protein_option(Food("Hard Boiled Egg", 1, 6, 5, 70));
    snack.add_protein_option(Food("Protein Shake", 3, 20, 1, 110));
    snack.add_fat_option(Food("Nuts", 6, 6, 15, 180));
    snack.add_fat_option(Food("Peanut Butter", 6, 8, 16, 190));
    snack.add_fat_option(Food("Cheese", 1, 7, 9, 110));

    Meal dinner;
    dinner.add_carb_option(Food("Brown Rice", 45, 5, 1, 215));
    dinner.add_carb_option(Food("Quinoa", 39, 8, 3.5, 222));
    dinner.add_carb_option(Food("Sweet Potato", 27, 2, 0, 112));
    dinner.add_protein_option(Food("Salmon", 0, 30, 11, 200));
    dinner.add_protein_option(Food("Chicken Breast", 0, 31, 4, 165));
    dinner.add_protein_option(Food("Black Beans", 40, 15, 1, 227));
    dinner.add_fat_option(Food("Olive Oil", 0, 0, 14, 120));
    dinner.add_fat_option(Food("Avocado", 12, 3, 15, 234));
    dinner.add_fat_option(Food("Cheese", 1, 7, 9, 110));

    // Exibir opções de alimentos para cada refeição
    /*std::cout << "\nOpções de Café da Manhã:\n";
    breakfast.print_options();

    std::cout << "\nOpções de Almoço:\n";
    lunch.print_options();

    std::cout << "\nOpções de Lanche da Tarde:\n";
    snack.print_options();

    std::cout << "\nOpções de Jantar:\n";
    dinner.print_options();*/
    
    diet.suggest_meal_plan(breakfast, lunch, snack, dinner);

    return 0;
}
