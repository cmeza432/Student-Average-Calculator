#include <iostream>
#include "student.cpp"

using namespace std;

int main()
{
  Student student;			
  double u_grade = 0;	//Grade variable to check if anything was inputed
  string u_name;
  cout << "Enter student's name: ";
  getline(cin, u_name);
  student.get_name(u_name);

  while(u_grade >= 0)	//Loop will run until negative number given
  {
    cout << "Enter next grade: ";
    cin >> u_grade;
    if(u_grade < 0)	//Break when input is finally less than 0
      break; 
    cin.ignore();	//Clears buffer from any /n character
    student.exam(u_grade);
  }
  cout << student.name() << " has a " << student.average() << " average." << endl;
  
  return 0;
}
