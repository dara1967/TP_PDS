#include "User.hpp"

User::User(double weight, double height, int age, char gender, std::string goal)
    : weight(weight), height(height), age(age), gender(gender), goal(goal) {}

double User::calculate_BM() {
    if (gender == 'M' || gender == 'm') {
        return 10 * weight + 6.25 * height - 5 * age + 5;
    } else if (gender== 'F'|| gender =='f'){
        return 10 * weight + 6.25 * height - 5 * age - 161;
    }else{
        std::out << " Esse gênero não é existe nesse software";
        return 0; //alterar, tentar substituir por loop de do...while
}

double User::calculate_daily_calories() {
    double bm = calculate_BM();
    double daily_calories = bm * 1.55; // atividade moderada (tentar alterar para adcionar opção de leve e moderada)
    if (goal == "perder peso") {
        daily_calories -= 500;
    } else if (goal == "ganhar peso") {
        daily_calories += 500;
    } else if(goal== "manter peso"){
    return daily_calories;
    }
}
