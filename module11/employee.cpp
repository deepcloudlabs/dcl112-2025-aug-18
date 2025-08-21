#include "employee.h"

#include <utility>

employee::employee(string mFirstName, string mLastName, employee::department_t mDepartment,
                   employee::gender_t mGender, double mSalary, string mIban, int mBirthYear) : m_first_name(std::move(
        mFirstName)), m_last_name(std::move(mLastName)), m_department(mDepartment), m_gender(mGender), m_salary(mSalary),
    m_iban(std::move(mIban)),
    m_birth_year(
        mBirthYear) {
}

const string &employee::getMFirstName() const {
    return m_first_name;
}

const string &employee::getMLastName() const {
    return m_last_name;
}

employee::department_t employee::getMDepartment() const {
    return m_department;
}

employee::gender_t employee::getMGender() const {
    return m_gender;
}

double employee::getMSalary() const {
    return m_salary;
}

const string &employee::getMIban() const {
    return m_iban;
}

int employee::getMBirthYear() const {
    return m_birth_year;
}

employee::employee() : m_first_name("kate"),
                       m_last_name("austen"),
                       m_department(finance),
                       m_gender(female),
                       m_salary(100'000),
                       m_iban("tr1"),
                       m_birth_year(1998) {
}

ostream &operator<<(ostream &os, const employee &emp) {
    os << "employee["
            << "first name: " << emp.getMFirstName()
            << ", last name: " << emp.getMLastName()
            << ", salary: " << emp.getMSalary()
            << ", iban: " << emp.getMIban()
            << ", department: " << employee::department_name[emp.getMDepartment()]
            << ", birth year: " << emp.getMBirthYear()
            << ", gender: " << employee::gender_name[emp.getMGender()]
            << "]";
    return os;
}
