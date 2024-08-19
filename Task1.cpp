#include<iostream>
#include<vector>
#include<string>

using namespace std;

void calculateCGPA(){
    int numCourses;
    double totalCerditHours = 0;
    double totalGradePoints = 0;
    double creditHour;
    double CGPA;
    string courseName;
    string grade;
    vector<string> courseNames;
    vector<string> grades;
    vector<double> gradePoints;
    vector<double> creditHours;

    cout<<"Enter the number of courses: ";
    cin>>numCourses;
    for(int i=0;i<numCourses;i++){
    cout<<"Enter the name of course "<<i+1<<" : ";
    cin>>courseName;
    courseNames.push_back(courseName);
    cout<<"Enter the grade of course "<<i+1<<" : ";
    cin>>grade;
    grades.push_back(grade);
    cout<<"Enter the credit hours for course "<<i+1<<" : ";
        cin>>creditHour;
        creditHours.push_back(creditHour);
    }
    for(int i=0;i<numCourses;i++){
        if(grades[i]=="A"){
            gradePoints.push_back(4.0);
        }
        else if(grades[i]=="A-"){
            gradePoints.push_back(3.7);
        }
        else if(grades[i]=="B+"){
            gradePoints.push_back(3.4);
        }
        else if(grades[i]=="B"){
            gradePoints.push_back(3.0);
        }
        else if(grades[i]=="B-"){
            gradePoints.push_back(2.7);
        }
        else if(grades[i]=="C+"){
            gradePoints.push_back(2.4);
        }
        else if(grades[i]=="C"){
            gradePoints.push_back(2.0);
        }
        else if(grades[i]=="C-"){
            gradePoints.push_back(1.7);
        }
        else if(grades[i]=="D"){
            gradePoints.push_back(1.0);
        }
        else if(grades[i]=="F"){
            gradePoints.push_back(0.0);
        }
        else{
            cout<<"Invalid grade entered"<<endl;
        }
    }
    for(int i=0;i<numCourses;i++){
        totalGradePoints+=gradePoints[i]*creditHours[i];
        totalCerditHours+=creditHours[i];
    }
    CGPA=totalGradePoints/totalCerditHours;
    cout << "Course Name\tGrade\tCreditsHours\tGrade Points" << endl;
    cout << "-----------------------------------------------------" << endl;
    for (int i = 0; i < numCourses; i++)
    {
        cout << courseNames[i] << "\t\t" << grades[i] << "\t" << creditHours[i] << "\t\t" << gradePoints[i]*creditHours[i] << endl;
    }
    cout << "-----------------------------------------------------" << endl;
    cout << "Total Credits: " << totalCerditHours << endl;
    cout << "Total Grade Points: " << totalGradePoints << endl;
    cout<<"CGPA: "<<CGPA<<endl;
}
int main(){
    calculateCGPA();
    return 0;
}