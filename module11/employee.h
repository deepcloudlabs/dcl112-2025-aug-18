#ifndef DCL113_2025_AUG_18_EMPLOYEE_H
#define DCL113_2025_AUG_18_EMPLOYEE_H

#include <string>
#include <iostream>

using namespace std;

class employee {
public:
    constexpr static const char *gender_name[] = {"female", "male"};
    constexpr static const char *department_name[] = {"it", "finance", "hr", "sales", "marketing"};

    enum gender_t {
        female, male
    };

    enum department_t {
        it, finance, hr, sales, marketing
    };

    employee(string mFirstName, string mLastName, department_t mDepartment, gender_t mGender,
             double mSalary, string mIban, int mBirthYear);

    employee();

    [[nodiscard]] const string &getMFirstName() const;

    [[nodiscard]] const string &getMLastName() const;

    [[nodiscard]] department_t getMDepartment() const;

    [[nodiscard]] gender_t getMGender() const;

    [[nodiscard]] double getMSalary() const;

    [[nodiscard]] const string &getMIban() const;

    [[nodiscard]] int getMBirthYear() const;

    bool operator<(const employee &emp) const {
        return getMIban() < emp.getMIban();
    }

    bool operator==(const employee &emp) const {
        return getMIban() == emp.getMIban();
    }

private:
    string m_first_name;
    string m_last_name;
    department_t m_department;
    gender_t m_gender;
    double m_salary;
    string m_iban;
    int m_birth_year;
};

ostream &operator<<(ostream &os, const employee &emp);

#endif //DCL113_2025_AUG_18_EMPLOYEE_H
