#include <iostream>

using namespace std;

class Student
{
  private:
    string student_name;
    double exam_sum;
    double exam_num_grades;
  
  public:
    void get_name(string name)	
    {
      student_name = name;
    }

    string name()
    {
      return student_name;
    }
    
    void exam(double grade)	// Totals all inputs and increments for # of grades given
    {
      exam_sum += grade;
      exam_num_grades++;
    }
     
    double average()		
    {
      if(exam_sum != 0){
        return exam_sum/exam_num_grades;
      }

      else {
        return 100.0;
      } 
    }
};


