#include <iostream>
#include "student.cpp"

using namespace std;

int main()
{
  Student student_info;
  //student_info.student("Carlos Meza");
  student_info.get_name("Bjarne Stroustrup");
  student_info.exam(100.0);
  student_info.exam(90.0);
  student_info.exam(80.0);

  if(student_info.name() != "Bjarne Stroustrup")
    cout << "Error" << endl;

  if(student_info.average() != 90)
    cout << "Grade Error" << endl;

  return 0;
}
