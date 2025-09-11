#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Student {
    string name;
    bool present;
};

int main() {
    int n;
    cout << "Enter number of students: ";
    cin >> n;

    vector<Student> students(n);

    // Input student names
    for (int i = 0; i < n; i++) {
        cout << "Enter name of student #" << i + 1 << ": ";
        cin >> students[i].name;
        students[i].present = false;  // Initialize attendance as absent
    }

    cout << "\nMark attendance (P for present, A for absent):\n";

    // Mark attendance
    for (int i = 0; i < n; i++) {
        char attendance;
        do {
            cout << "Is " << students[i].name << " present? (P/A): ";
            cin >> attendance;
            attendance = toupper(attendance);
        } while (attendance != 'P' && attendance != 'A');

        students[i].present = (attendance == 'P');
    }

    // Display attendance report
    cout << "\nAttendance Report:\n";
    for (const auto& student : students) {
        cout << student.name << ": " << (student.present ? "Present" : "Absent") << endl;
    }

    return 0;
}
