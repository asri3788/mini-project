#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Course {
private:
    string courseName;
    int courseCode;
public:
    Course(string name, int code) {
        courseName = name;
        courseCode = code;
    }
    string getName() {
        return courseName;
    }
    int getCode() {
        return courseCode;
    }
};

class Student {
private:
    string name;
    int rollNumber;
    vector<Course> courses;
public:
    Student(string n, int r) {
        name = n;
        rollNumber = r;
    }
    void addCourse(Course c) {
        courses.push_back(c);
    }
    void displayCourses() {
        cout << "Courses registered by " << name << ":\n";
        for (int i = 0; i < courses.size(); i++) {
            cout << courses[i].getName() << " (" << courses[i].getCode() << ")\n";
        }
    }
};

int main() {
    Student s("John", 12345);
    Course c1("C++ Programming", 101);
    Course c2("Data Structures", 201);
    s.addCourse(c1);
    s.addCourse(c2);
    s.displayCourses();
    return 0;
}