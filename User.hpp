#ifndef USER_HPP
#define USER_HPP

#include <string>

class User {
public:
    double weight;
    double height;
    int age;
    char gender;
    std::string goal;

    User(double weight, double height, int age, char gender, std::string goal);

    double calculate_BM();//BM
    double calculate_daily_calories(); //calculate_daily_calories
};

#endif // USER_HPP
