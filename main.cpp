#include <iostream>
#include <map>

int main() {
  // Create a map to store student names and their grades
  std::map<std::string, int> studentGrades;

  // Add some students and their grades
  studentGrades["Alice"] = 90;
  studentGrades["Bob"] = 85;
  studentGrades["Charlie"] = 95;

  // Print the grades for each student
  for (auto const& [name, grade] : studentGrades) {
    std::cout << name << ": " << grade << std::endl;
  }

  return 0;
}
