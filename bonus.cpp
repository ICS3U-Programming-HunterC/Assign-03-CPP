// Copyright (c) 2022 Hunter Connolly All rights reserved
// Created by: Hunter Connolly
// Created on: April 7, 2022
// This program asks the user or how many years they have worked
// and if they have worked more than 5 years, they get a 5% bonus


#include <iostream>
#include <string>


int main() {
    // declare variables
    float yearsWorkedNumber, salary, bonus, netBonus;
    std::string yearsWorkedString;


    // Get the guess from the user
    std::cout << "How many years have you been working for?: ";
    std::cin >> yearsWorkedString;
    std::cout << "" << std::endl;


    // switch the guess into an int and then check if it is a number and if
    // it is correct or not
    try {
        yearsWorkedNumber = std::stoi(yearsWorkedString);
        if (yearsWorkedNumber >= 5) {
            std::cout << "CONGRATULATIONS! You are eligible for a bonus"
            " this year!! :)\n";
            std::cout << "Enter your salary: $";
            std::cin >> salary;
            std::cout << "\n";
            bonus = salary * 0.05;
            std::cout << "Your bonus this year is: $" << bonus;
            std::cout << "\n";
            netBonus = salary + bonus;
            std::cout << "Your total salary with the bonus this year is: "
            "$" << netBonus;
        } else if (yearsWorkedNumber == 4) {
            std::cout << "Unfortunately you are not eligible for a bonus this "
            "year. Next year you will be eligible!\n";
        } else if (yearsWorkedNumber == 3) {
            std::cout << "Unfortunately you are not eligible for a bonus this "
            "year. In two years you will be eligible!\n";
        } else if (yearsWorkedNumber == 2) {
            std::cout << "Unfortunately you are not eligible for a bonus this "
            "year. In three years you will be eligible! \n";
        } else {
            std::cout << "Unfortunately you are not eligible for a "
            "bonus this year";
    }
    } catch (std::invalid_argument) {
        std::cout << "That is not a number! \n";
    }
}

