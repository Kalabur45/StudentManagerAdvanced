#include "student.h"
#include <string>
#include <vector>
using namespace std;


void student::setName(string first, string last)
{
        m_firstName = first;
        m_lastName = last;
}
string student::fullName()
{

        return m_firstName + " " + m_lastName;
}
void student::addGrade(double score)
{
        m_Grades.push_back(score);
}
double student::getScore()
{
        double scoreSum;
        for(int x = 0; x < m_Grades.size(); x++)
        {
                scoreSum = m_Grades[x] + m_Score;
                m_Score = scoreSum / (x + 1);
        }
}
