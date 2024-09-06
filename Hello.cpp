#include <fstream>
#include <iostream>
#include <string>
using namespace std;

template <typename T> class Base {
private:
  T salary;
  T password;

public:
  T name;
  T age;
  T gender;
  T address;
  T phone;
  T email;
  T birthday;
  T occupation;
  T education;
  T skills;
  T languages;
  T hobbies;
  T interests;
  T goals;
  T ambitions;
  T dreams;
  T subject;
  T marks;
  T grades;

  virtual void input() = 0;
  // virtual void display() = 0;
};

template <typename T> class Employes : public Base<T> {
public:
  void input() override {
    cout << "Enter Inforamtion if Employes" << endl;
    cout << "Enter name: ";
    getline(cin, this->name);
    cout << "Enter age: ";
    cin >> this->age;
    cin.ignore();
    cout << "Enter gender: ";
    getline(cin, this->gender);
    cout << "Enter address: ";
    getline(cin, this->address);
    cout << "Enter phone: ";
    getline(cin, this->phone);
    cout << "Enter email: ";
    getline(cin, this->email);
    cout << "Enter birthday: ";
    getline(cin, this->birthday);
    cout << "Enter education: ";
    getline(cin, this->education);
    cout << "Enter skills: ";
    getline(cin, this->skills);
    cout << "Enter language: ";
    getline(cin, this->languages);
  }
};

template <typename T> class Student : public Base<T> {
public:
  void input() override {
    cout << "Enter Information if Students" << endl;
    cout << "Enter student name: ";
    getline(cin, this->name);
    cout << "Enter student age: ";
    cin >> this->age;
    cin.ignore();
    cout << "Enter student gender: ";
    getline(cin, this->gender);
    cout << "Enter student address: ";
    getline(cin, this->address);
    // cout << "Enter your Subject: "
    // getline(cin, this->subject);
    cout << "Education: ";
    getline(cin, this->education);
    cout << "interests: ";
    getline(cin, this->interests);
    cout << "Goals: ";
    getline(cin, this->goals);
    cout << "Ambitions: ";
    getline(cin, this->ambitions);
  }
};

int main() {

  Employes<string> employee;
  employee.input();

  ofstream file("Text.txt");
  if (file.is_open()) {
    file << "Information about Employees" << endl;
    file << "Name: " << employee.name << endl;
    file << "Age: " << employee.age << endl;
    file << "Gender: " << employee.gender << endl;
    file << "Address: " << employee.address << endl;
    file << "Education: " << employee.education << endl;
    file << "Skills: " << employee.skills << endl;
    file << "Languages: " << employee.languages << endl;
    file.close();
  } else {
    cout << "Unable to open file" << endl;
  }

  Student<string> student;
  student.input();

  file.open("Text.txt", ios::app); // Open file in append mode
  if (file.is_open()) {
    file << "\nInformation about Students" << endl;
    file << "Name: " << student.name << endl;
    file << "Age: " << student.age << endl;
    file << "Gender: " << student.gender << endl;
    file << "Address: " << student.address << endl;
    // file << "Subject: " << student.subject << endl;
    //  file << "Marks: " << student.marks << endl;
    //  file << "Grades: " << student.grades << endl;
    file << "Interests: " << student.interests << endl;
    file << "Goals: " << student.goals << endl;
    file << "Ambition: " << student.ambitions << endl;
    file.close();
  } else {
    cout << "Unable to open file" << endl;
  }

  return 0;
}
