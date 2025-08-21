cmake_minimum_required(VERSION 4.0)
project(dcl113_2025_aug_18)

set(CMAKE_CXX_STANDARD 23)

add_executable(exercise01 module02/exercise01.cpp)
add_executable(exercise02 module02/exercise02.cpp)
add_executable(exercise03 module02/exercise03.cpp)
add_executable(exercise04 module02/exercise04.cpp)
add_executable(exercise05 module02/exercise05.cpp)
add_executable(exercise06 module02/exercise06.cpp)
add_executable(exercise07 module02/exercise07.cpp)
add_executable(exercise08 module02/exercise08.cpp)
add_executable(exercise09 module02/exercise09.cpp)
add_executable(exercise10 module02/exercise10.cpp)
add_executable(exercise11 module02/exercise11.cpp)
add_executable(exercise12 module02/exercise12.cpp)
add_executable(exercise13 module02/exercise13.cpp)

add_executable(mod04-exercise1 module04/exercise01.cpp)
add_executable(mod04-exercise2 module04/exercise02.cpp)

add_executable(mod05-exercise1 module05/exercise01.cpp)
add_executable(mod05-exercise2 module05/exercise02.cpp)

add_executable(mod06-exercise1 module06/exercise01.cpp)
add_executable(mod06-exercise2 module06/exercise02.cpp)

add_executable(mod07-exercise1 module07/exercise01.cpp)

add_executable(mod08-exercise1 module08/exercise01.cpp)
add_executable(mod08-exercise2 module08/exercise02.cpp)

add_executable(mod09-exercise1 module09/exercise01.cpp
        module09/employee.cpp
        module09/employee.h)

add_executable(mod09-exercise2 module09/exercise02.cpp)
add_executable(mod09-exercise5 module09/exercise05.cpp)
add_executable(mod09-exercise3 module09/exercise03.cpp
        module09/employee.cpp
        module09/employee.h)
add_executable(mod09-exercise4 module09/exercise04.cpp
        module09/employee.cpp
        module09/employee.h)

add_executable(mod11-exercise1 module11/exercise01.cpp
        module11/employee.cpp
        module11/employee.h)

add_executable(banking_project module03/bankingapp.cpp module03/account.cpp module03/account.h)

add_executable(banking_exercise01 module03/exercise01.cpp module03/account.cpp module03/account.h)
add_executable(banking_exercise02 module03/exercise02.cpp module03/account.cpp module03/account.h)
add_executable(banking_exercise03 module03/exercise03.cpp module03/account.cpp module03/account.h)
add_executable(lab03-exercise01 labs/mod03/exercise01/TestVehicle.cpp labs/mod03/exercise01/vehicle.cpp labs/mod03/exercise01/vehicle.h)
add_executable(lab03-exercise02 labs/mod03/exercise02/TestVehicle.cpp labs/mod03/exercise02/vehicle.cpp labs/mod03/exercise02/vehicle.h)
add_executable(lab03-exercise03 labs/mod03/exercise03/TestVehicle.cpp labs/mod03/exercise03/vehicle.cpp labs/mod03/exercise03/vehicle.h)
add_executable(lab04-exercise04 labs/mod04/exercise04/TestBanking.cpp labs/mod04/exercise04/account.cpp labs/mod04/exercise04/account.h)
add_executable(lab04-exercise05 labs/mod04/exercise05/TestBanking.cpp labs/mod04/exercise05/account.cpp labs/mod04/exercise05/account.h labs/mod04/exercise05/customer.cpp labs/mod04/exercise05/customer.h)
add_executable(lab04-exercise06 labs/mod04/exercise06/TestBanking.cpp labs/mod04/exercise06/account.cpp labs/mod04/exercise06/account.h labs/mod04/exercise06/customer.cpp labs/mod04/exercise06/customer.h)
add_executable(lab05-exercise07 labs/mod05/exercise07/TestBanking.cpp labs/mod05/exercise07/account.cpp labs/mod05/exercise07/account.h labs/mod05/exercise07/customer.cpp labs/mod05/exercise07/customer.h labs/mod05/exercise07/bank.cpp labs/mod05/exercise07/bank.h)
add_executable(lab06-exercise08 labs/mod06/exercise08/TestBanking.cpp labs/mod06/exercise08/account.cpp labs/mod06/exercise08/account.h labs/mod06/exercise08/customer.cpp labs/mod06/exercise08/customer.h labs/mod06/exercise08/bank.cpp labs/mod06/exercise08/bank.h labs/mod06/exercise08/checkingaccount.cpp labs/mod06/exercise08/checkingaccount.h
        labs/mod06/exercise08/savingsaccount.cpp
        labs/mod06/exercise08/savingsaccount.h)

add_executable(lab08-exercise09 labs/mod08/exercise09/TestReport.cpp labs/mod08/exercise09/account.cpp labs/mod08/exercise09/account.h labs/mod08/exercise09/customer.cpp labs/mod08/exercise09/customer.h labs/mod08/exercise09/bank.cpp labs/mod08/exercise09/bank.h labs/mod08/exercise09/checkingaccount.cpp labs/mod08/exercise09/checkingaccount.h
        labs/mod08/exercise09/CustomerReport.cpp
        labs/mod08/exercise09/CustomerReport.h
        labs/mod08/exercise09/savingsaccount.cpp
        labs/mod08/exercise09/savingsaccount.h)

add_executable(lab08-exercise10 labs/mod08/exercise10/TestReport.cpp labs/mod08/exercise10/account.cpp labs/mod08/exercise10/account.h labs/mod08/exercise10/customer.cpp labs/mod08/exercise10/customer.h labs/mod08/exercise10/bank.cpp labs/mod08/exercise10/bank.h labs/mod08/exercise10/checkingaccount.cpp labs/mod08/exercise10/checkingaccount.h
        labs/mod08/exercise10/CustomerReport.cpp
        labs/mod08/exercise10/CustomerReport.h
        labs/mod08/exercise10/savingsaccount.cpp
        labs/mod08/exercise10/savingsaccount.h)

add_executable(lab08-exercise11 labs/mod08/exercise11/zoo_app.cpp labs/mod08/exercise11/animal.cpp labs/mod08/exercise11/animal.h
        labs/mod08/exercise11/pet.cpp
        labs/mod08/exercise11/pet.h
        labs/mod08/exercise11/spider.cpp
        labs/mod08/exercise11/spider.h
        labs/mod08/exercise11/cat.cpp
        labs/mod08/exercise11/cat.h
        labs/mod08/exercise11/fish.cpp
        labs/mod08/exercise11/fish.h)