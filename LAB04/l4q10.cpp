#include <iostream>
#include <string>
using namespace std;
class Classroom {
    string className;
    int totalStudents;
    int presentStudents;
    bool attendanceStatus;
public:
    Classroom(string name,int total,int present,bool status) {
        className = name;
        totalStudents = total;
        presentStudents = present;
        attendanceStatus = status;
    }
    friend class AttendanceManager;
};
class AttendanceManager {
public:
    void displayInfo(Classroom &c) {
        cout<<endl<<"Class Name: "<<c.className<<endl;
        cout<<"Total Students: "<<c.totalStudents<<endl;
        cout<<"Present Students: "<<c.presentStudents<<endl;
        cout<<"Attendance Status: "<<(c.attendanceStatus ? "Completed" : "Not Completed")<<endl;
    }
    void updatePresentStudents(Classroom &c, int present) {
        c.presentStudents = present;
        cout<<"Present student count updated.";
    }
    void markAttendanceCompleted(Classroom &c) {
        c.attendanceStatus = true;
        cout<<"Attendance marked as completed."<<endl;
    }
    void displayAttendanceStatus(Classroom &c) {
        cout<<"Attendance Status: "<<(c.attendanceStatus ? "Completed" : "Not Completed")<<endl;
    }
    void displayAbsentStudents(Classroom &c) {
        int absent = c.totalStudents - c.presentStudents;
        cout<<"Absent Students: "<<absent<<endl;
    }
};
int main() {
    Classroom c("CSE-B1",60,52,false);
    AttendanceManager m;
    m.displayInfo(c);
    m.updatePresentStudents(c,55);
    m.markAttendanceCompleted(c);
    m.displayAttendanceStatus(c);
    m.displayAbsentStudents(c);
    return 0;
}