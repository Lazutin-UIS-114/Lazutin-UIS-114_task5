#pragma once
#include <string>
#include <exception>
#include <stdexcept>
#include <cmath>

/**
* \brief Класс-исключение MyExcept1 для выбрасывания пустого исключения
*/
class MyExcept1 {};

/**
* \brief Класс-исключение MyExcept2 для выбрасывания сторокового исключения
*/
class MyExcept2 {
private:
    std::string msg;
public:
    MyExcept2(const std::string &s) : msg(s) {}
    const char *what() const;
};

/**
* \brief Класс-исключение MyExcept3 для выбрасывания исключения о неправильном аргументе
*/
class MyExcept3 : public std::invalid_argument {
public:
    MyExcept3(const std::string msg) : invalid_argument(msg) {}
};

/**
* \brief Структура Angles для представления углов
*/
struct Angles {
    double angle_opposite_a, angle_opposite_b;
};

/**
* \brief поиск углов без выбрасывания исключений
*/
Angles find_angles_without_ex(const double a, const double b);

/**
* \brief поиск углов с выбрасыванием пустого строкового исключения
*/
Angles find_angles_with_ex(const double a, const double b);

/**
* \brief поиск углов с выбрасыванием стандартного исключения
*/
Angles find_angles_with_std_ex(const double a, const double b);

/**
* \brief поиск углов с выбрасыванием пустого исключения MyExcept1
*/
Angles find_angles_with_my_empty_ex(const double a, const double b);

/**
* \brief поиск углов с выбрасыванием строкового исключения MyExcept2
*/
Angles find_angles_with_my_ex(double a, double b);

/**
* \brief поиск углов с выбрасыванием строкового исключения о неправильном аргументе MyExcept3
*/
Angles find_angles_with_my_std_ex(double a, double b);
