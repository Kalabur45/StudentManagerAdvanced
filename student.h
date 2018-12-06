#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <string>
#include <vector>
using namespace std;
class student
{
        private:
                string m_firstName;
                string m_lastName;
                double m_Score;
                vector <double> m_Grades; 
        public:
                
                
                void setName(string, string);
                string fullName();
                void addGrade(double);
                double getScore();
                
};
#endif
