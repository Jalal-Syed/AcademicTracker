#include <iostream>
#include <chrono>
#include <thread>
#include "Log.h"

int WelcomeMenu() {
    while (true) {
        std::cout << "==========================================" << std::endl;
        std::cout << "   Hello! Welcome to Academic Tracker!" << std::endl;
        std::cout << "==========================================" << std::endl;
        std::cout << "  0. to Exit. " << std::endl;
        std::cout << "  1. for MainMenu. " << std::endl;
        std::cout << "Enter your Choice: ";
        std::cin >> Choice;
        if (Choice == 0) {
            Running = false;
            return Choice;
        }
        else if (Choice == 1) {
            return Choice;
        }
        else {
            std::cout << "Invalid Choice." <<std::endl;
            for (int i = 3; i >= 1; i--) {
                std::cout << "Please try again in " << i << " seconds." <<std::endl;
                std::this_thread::sleep_for(std::chrono::seconds(1));
            }
        }
    }
}

int MainMenu() {            //Main Menu of the program

    std::cout << "\n====================" << std::endl;
    std::cout << "     MAIN MENU" << std::endl;
    std::cout << "====================\n" << std::endl;
    std::cout << "  0. Exit the program." << std::endl;
    std::cout << "  1. Academic Status" << std::endl;
    std::cout << "  2. Add Semester" << std::endl;
    std::cout << "  3. Add Subject" << std::endl;
    std::cout << "  4. Add Laboratory" << std::endl;
    std::cout << "  5. Add No-Credit Subject" << std::endl;
    std::cout << "  6. Add Project" << std::endl;
    std::cout << "Enter your Choice: ";
    std::cin >> Choice;
    return Choice;
}

int main() {
    WelcomeMenu();
    while (Running) {
            Choice = MainMenu();
            switch(Choice) {
                case 0:
                    std::cout << "Exiting program..." << std::endl;
                    Running = false;
                    break;
                case 1 :
                    AcademicStatus();  //calling AcademicStatus Func
                    break;
                case 2 :
                    AddSemester();     //calling AddSemester Func
                    break;
                case 3 :
                    AddSubject();      //calling AddSubject Func
                    break;
                case 4 :
                    AddLab();          //calling AddLab Func
                    break;
                case 5 :
                    AddNCS();          //calling AddNCS Func
                    break;
                case 6 :
                    AddProject();      //calling AddProject Func
                    break;
                default:
                    std::cout << "\n=============================" << std::endl;
                    std::cout << "Invalid Choice. Please try again." << std::endl;
                    std::cout << "=============================\n" << std::endl;
                    std::this_thread::sleep_for(std::chrono::seconds(2));
            }
    }
    return 0;
}


int BackToMainMenu() {
    std::cout << "\n=============================" << std::endl;
    std::cout << "0. Exit the program" << std::endl;
    std::cout << "1. Go Back to Main Menu" << std::endl;
    std::cout << "Enter your Choice: ";
    std::cin >> Choice;

    if (Choice == 0) {
        Running = false;
    }
    else {
        std::cout << "Invalid Choice." <<std::endl;
        for (int i = 3; i >= 1; i--) {
            std::cout << "\n\nPlease try again in " << i << " seconds." << std::endl;
            std::this_thread::sleep_for(std::chrono::seconds(1));
        }
        return Choice;
    }
}

void AcademicStatus(){
    std::cout << "Academic Status: " << std::endl;
    BackToMainMenu();
}

void AddSemester(){
    std::cout << "Semester Added. \n" << std::endl;
    BackToMainMenu();
}

void AddSubject(){
    std::cout << "Subject Added " << std::endl;
    BackToMainMenu();
}

void AddLab(){
    std::cout << "Lab Added " << std::endl;
    BackToMainMenu();
}

void AddNCS(){
    std::cout << "NCS Added " << std::endl;
    BackToMainMenu();
}

void AddProject(){
    std::cout << "Project Added " << std::endl;
    BackToMainMenu();
}