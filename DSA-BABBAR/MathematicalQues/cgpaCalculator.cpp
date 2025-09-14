#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store subject information
struct Subject {
    string name;
    int credit;
};

// Data for 8 semesters
vector<vector<Subject>> semesters = {
    {{"Maths-I", 4}, {"Engineering Graphics", 4}, {"Computer Programming Lab", 2}, {"Physics Lab", 2}, {"PHE", 1}, {"Physics", 3}, {"Communication Skill", 3}, {"Computer Programming", 3}},       // Sem 1
    {{"Maths-II", 4}, {"Engineering Mechanics", 4}, {"Engineering Chemistry", 3}, {"Environmental Science", 3}, {"BEEE", 3}, {"Workshop Practice", 3}, {"BEEE Lab", 1}, {"Chemistry Lab", 1}, {"NSS", 1}}, // Sem 2
    {{"PPL", 3}, {"Data Structures", 3}, {"Professional Practices", 2}, {"Digital Circuit Design", 3}, {"PPL Lab", 1}, {"Mathematics-III", 4}, {"DBMS", 3}, {"Data Structures Lab", 1}, {"FOD", 3}, {"DBMS Lab", 1}},     // Sem 3
    {{"TOC", 3}, {"FOE", 3}, {"ADA", 3}, {"CSO", 3}, {"Data Communication", 3}, {"Software Engineering", 4}, {"ADA Lab", 1}, {"Project Based Lab", 1}, {"CSO Lab", 1}},        // Sem 4
    {{"Software Engg", 3}, {"Web Tech", 3}, {"Networks", 4}, {"Compiler", 3}, {"Open Elective I", 3}}, // Sem 5
    {{"ML", 3}, {"Mobile Computing", 3}, {"Cloud", 3}, {"Open Elective II", 3}, {"Mini Project", 3}},  // Sem 6
    {{"Big Data", 3}, {"AI", 3}, {"Seminar", 2}, {"Project I", 4}, {"Prof Elective I", 3}},            // Sem 7
    {{"Project II", 6}, {"Internship", 6}, {"Prof Elective II", 3}}                                   // Sem 8
};

// Function to calculate SGPA for a semester
float calculateSGPA(int sem) {
    vector<Subject> subjects = semesters[sem - 1];
    vector<float> grades(subjects.size());

    cout << "\nEnter your grades (on a scale of 0 to 10) for Semester " << sem << ":\n";

    for (size_t i = 0; i < subjects.size(); ++i) {
        float grade;
        do {
            cout << subjects[i].name << " (" << subjects[i].credit << " credits): ";
            cin >> grade;

            if (grade < 0 || grade > 10) {
                cout << "Invalid grade! Enter a number between 0 and 10.\n";
            }
        } while (grade < 0 || grade > 10);

        grades[i] = grade;
    }

    float totalWeighted = 0;
    int totalCredits = 0;

    for (size_t i = 0; i < subjects.size(); ++i) {
        totalWeighted += grades[i] * subjects[i].credit;
        totalCredits += subjects[i].credit;
    }

    float sgpa = totalWeighted / totalCredits;

    cout << "\n----------------------------------\n";
    cout << "Your SGPA for Semester " << sem << " is: " << sgpa << endl;
    cout << "----------------------------------\n";

    return sgpa;
}

int main() {
    int choice;

    while (true) {
        cout << "\n----- MENU -----\n";
        cout << "1. Calculate SGPA for a single semester\n";
        cout << "2. Calculate CGPA up to your current semester\n";
        cout << "3. Exit\n";
        cout << "Enter your choice (1-3): ";
        cin >> choice;

        if (choice == 1) {
            int sem;
            cout << "Enter the semester number (1-8): ";
            cin >> sem;

            if (sem < 1 || sem > 8) {
                cout << "Invalid semester. Try again.\n";
            } else {
                calculateSGPA(sem);
            }
        } else if (choice == 2) {
            int currentSem;
            cout << "Enter your current semester (1-8): ";
            cin >> currentSem;

            if (currentSem < 1 || currentSem > 8) {
                cout << "Invalid semester. Try again.\n";
                continue;
            }

            float totalWeighted = 0;
            int totalCredits = 0;

            for (int sem = 1; sem <= currentSem; ++sem) {
                cout << "\n--- Semester " << sem << " ---";
                vector<Subject> subjects = semesters[sem - 1];
                vector<float> grades(subjects.size());

                for (size_t i = 0; i < subjects.size(); ++i) {
                    float grade;
                    do {
                        cout << "\n" << subjects[i].name << " (" << subjects[i].credit << " credits): ";
                        cin >> grade;

                        if (grade < 0 || grade > 10) {
                            cout << "Invalid grade! Enter a number between 0 and 10.\n";
                        }
                    } while (grade < 0 || grade > 10);

                    grades[i] = grade;
                }

                for (size_t i = 0; i < subjects.size(); ++i) {
                    totalWeighted += grades[i] * subjects[i].credit;
                    totalCredits += subjects[i].credit;
                }
            }

            float cgpa = totalWeighted / totalCredits;

            cout << "\n----------------------------------\n";
            cout << "Your CGPA up to Semester " << currentSem << " is: " << cgpa << endl;
            cout << "----------------------------------\n";
        } else if (choice == 3) {
            cout << "Exiting program. Goodbye!\n";
            break;
        } else {
            cout << "Invalid choice. Please enter 1, 2, or 3.\n";
        }
    }

    return 0;
}
