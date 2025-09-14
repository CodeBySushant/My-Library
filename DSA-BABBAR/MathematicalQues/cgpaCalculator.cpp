#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure to store subject information
struct Subject {
    string name;
    int credit;
};

// Data for 8 semesters (can be customized)
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

int main() {
    int sem;
    cout << "Enter your current semester (1-8): ";
    cin >> sem;

    if (sem < 1 || sem > 8) {
        cout << "Invalid semester entered. Exiting...\n";
        return 1;
    }

    vector<Subject> currentSubjects = semesters[sem - 1];
    vector<float> grades(currentSubjects.size());

    cout << "\nEnter your grades (on a scale of 4 to 10) for the following subjects:\n";

    for (size_t i = 0; i < currentSubjects.size(); ++i) {
        float grade;
        do {
            cout << currentSubjects[i].name << " (" << currentSubjects[i].credit << " credits): ";
            cin >> grade;

            if (grade < 0 || grade > 10) {
                cout << "Invalid grade! Enter a number between 0 and 10.\n";
            }
        } while (grade < 0 || grade > 10);

        grades[i] = grade;
    }

    // Calculate SGPA
    float totalWeighted = 0;
    int totalCredits = 0;

    for (size_t i = 0; i < currentSubjects.size(); ++i) {
        totalWeighted += grades[i] * currentSubjects[i].credit;
        totalCredits += currentSubjects[i].credit;
    }

    float sgpa = totalWeighted / totalCredits;

    cout << "\n----------------------------------\n";
    cout << "Your SGPA for Semester " << sem << " is: " << sgpa << endl;
    cout << "----------------------------------\n";

    return 0;
}
