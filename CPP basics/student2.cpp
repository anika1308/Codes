#include <iostream>
#include <vector>
#include <algorithm>
#include <cctype>
#include <cstdlib>

using namespace std;

struct Student {
    string name;
    string rollNo;
    string course;
    string className;
    string contact;
};

vector<Student> students;

bool isValidName(const string& name) {
    return all_of(name.begin(), name.end(), ::isalpha);
}

bool isValidRollNo(const string& rollNo) {
    return rollNo.length() == 2 && all_of(rollNo.begin(), rollNo.end(), ::isdigit);
}

bool isValidContact(const string& contact) {
    return contact.length() == 10 && all_of(contact.begin(), contact.end(), ::isdigit);
}

bool getInput(string& input, const string& prompt) {
    cout << prompt;
    cin >> input;
    if (input == "q") {
        return false;
    }
    return true;
}

void enter() {
    int ch;
    cout << "How many students do you want to enter? (Press 'q' to quit)" << endl;
    string input;
    if (!getInput(input, "")) return;
    ch = stoi(input);

    for (int i = 0; i < ch; ++i) {
        Student student;
        cout << "\nEnter the data of student " << i + 1 << " (Press 'q' to quit)" << endl;
        
        if (!getInput(student.name, "Enter name: ")) return;
        while (!isValidName(student.name)) {
            cout << "Invalid name. Please enter alphabets only. (Press 'q' to quit)" << endl;
            if (!getInput(student.name, "Enter name: ")) return;
        }
        
        if (!getInput(student.rollNo, "Enter roll no: ")) return;
        while (!isValidRollNo(student.rollNo)) {
            cout << "Invalid roll number. Please enter exactly two digits. (Press 'q' to quit)" << endl;
            if (!getInput(student.rollNo, "Enter roll no: ")) return;
        }
        
        if (!getInput(student.course, "Enter course: ")) return;
        
        if (!getInput(student.className, "Enter class: ")) return;
        
        if (!getInput(student.contact, "Enter contact: ")) return;
        while (!isValidContact(student.contact)) {
            cout << "Invalid contact number. Please enter exactly ten digits. (Press 'q' to quit)" << endl;
            if (!getInput(student.contact, "Enter contact: ")) return;
        }

        students.push_back(student);
    }
}

void show() {
    if (students.empty()) {
        cout << "No data is entered" << endl;
    } else {
        for (size_t i = 0; i < students.size(); ++i) {
            cout << "\nData of Student " << i + 1 << endl;
            cout << "Name: " << students[i].name << endl;
            cout << "Roll no: " << students[i].rollNo << endl;
            cout << "Course: " << students[i].course << endl;
            cout << "Class: " << students[i].className << endl;
            cout << "Contact: " << students[i].contact << endl;
        }
    }
}

void search() {
    if (students.empty()) {
        cout << "No data is entered" << endl;
    } else {
        string rollNo;
        cout << "Enter the roll no of student (Press 'q' to quit): ";
        if (!getInput(rollNo, "")) return;

        auto it = find_if(students.begin(), students.end(), [&rollNo](const Student& student) {
            return student.rollNo == rollNo;
        });

        if (it != students.end()) {
            cout << "Name: " << it->name << endl;
            cout << "Roll no: " << it->rollNo << endl;
            cout << "Course: " << it->course << endl;
            cout << "Class: " << it->className << endl;
            cout << "Contact: " << it->contact << endl;
        } else {
            cout << "Student not found" << endl;
        }
    }
}

void update() {
    if (students.empty()) {
        cout << "No data is entered" << endl;
    } else {
        string rollNo;
        cout << "Enter the roll no of student which you want to update (Press 'q' to quit): ";
        if (!getInput(rollNo, "")) return;

        auto it = find_if(students.begin(), students.end(), [&rollNo](const Student& student) {
            return student.rollNo == rollNo;
        });

        if (it != students.end()) {
            cout << "\nPrevious data" << endl;
            cout << "Name: " << it->name << endl;
            cout << "Roll no: " << it->rollNo << endl;
            cout << "Course: " << it->course << endl;
            cout << "Class: " << it->className << endl;
            cout << "Contact: " << it->contact << endl;

            cout << "\nEnter new data (Press 'q' to quit)" << endl;
            if (!getInput(it->name, "Enter name: ")) return;
            while (!isValidName(it->name)) {
                cout << "Invalid name. Please enter alphabets only. (Press 'q' to quit)" << endl;
                if (!getInput(it->name, "Enter name: ")) return;
            }
            
            if (!getInput(it->rollNo, "Enter roll no: ")) return;
            while (!isValidRollNo(it->rollNo)) {
                cout << "Invalid roll number. Please enter exactly two digits. (Press 'q' to quit)" << endl;
                if (!getInput(it->rollNo, "Enter roll no: ")) return;
            }
            
            if (!getInput(it->course, "Enter course: ")) return;
            
            if (!getInput(it->className, "Enter class: ")) return;
            
            if (!getInput(it->contact, "Enter contact: ")) return;
            while (!isValidContact(it->contact)) {
                cout << "Invalid contact number. Please enter exactly ten digits. (Press 'q' to quit)" << endl;
                if (!getInput(it->contact, "Enter contact: ")) return;
            }
        } else {
            cout << "Student not found" << endl;
        }
    }
}

void deleterecord() {
    if (students.empty()) {
        cout << "No data is entered" << endl;
    } else {
        int a;
        cout << "Press 1 to delete all records" << endl;
        cout << "Press 2 to delete a specific record" << endl;
        cout << "Press 'q' to quit" << endl;
        string input;
        if (!getInput(input, "")) return;
        a = stoi(input);

        if (a == 1) {
            students.clear();
            cout << "All records are deleted" << endl;
        } else if (a == 2) {
            string rollNo;
            cout << "Enter the roll no of student which you want to delete (Press 'q' to quit): ";
            if (!getInput(rollNo, "")) return;

            auto it = remove_if(students.begin(), students.end(), [&rollNo](const Student& student) {
                return student.rollNo == rollNo;
            });

            if (it != students.end()) {
                students.erase(it, students.end());
                cout << "The record is deleted" << endl;
            } else {
                cout << "Student not found" << endl;
            }
        } else {
            cout << "Invalid input" << endl;
        }
    }
}

int main() {
    cout << "Welcome to the Student Management System" << endl;
    cout << "Press 'q' at any step to quit the current operation" << endl;
    while (true) {
        string input;
        cout << "\nPress 1 to enter data" << endl;
        cout << "Press 2 to show data" << endl;
        cout << "Press 3 to search data" << endl;
        cout << "Press 4 to update data" << endl;
        cout << "Press 5 to delete data" << endl;
        cout << "Press 6 to exit" << endl;
        cout << "Press 'q' to quit" << endl;
        if (!getInput(input, "")) break;
        int value = stoi(input);

        switch (value) {
            case 1:
                enter();
                break;
            case 2:
                show();
                break;
            case 3:
                search();
                break;
            case 4:
                update();
                break;
            case 5:
                deleterecord();
                break;
            case 6:
                exit(0);
                break;
            default:
                cout << "Invalid input" << endl;
                break;
        }
    }
    return 0;
}
