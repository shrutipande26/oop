#include <iostream>
using namespace std;


class CollegeStudent {
protected:
    int student_id;
    int college_code;
public:
    void collectdata() {
        cout << "enter student ID: ";
        cin >> student_id;
        cout << "enter college code: ";
        cin >> college_code;
    }
    void display() {
        cout << "\nstudent ID: " << student_id;
        cout << "\ncollege code: " << college_code;
    }
};

class Test : virtual public CollegeStudent {
protected:
    float percentage;
public:
    void getTestData() {
        cout << "enter percentage: ";
        cin >> percentage;
    }
    void displayTestData() {
        cout << "\npercentage: " << percentage;
    }
};


class Sports : virtual public CollegeStudent {
protected:
    char grade;
public:
    void getSportsData() {
        cout << "enter sports grade: ";
        cin >> grade;
    }
    void displaySportsData() {
        cout << "\nsports grade: " << grade;
    }
};


class Result : public Test, public Sports {
public:
    void getData() {
        collectdata();
        getTestData();
        getSportsData();
    }
    void displayData() {
        cout << "result :\n";
        display();
        displayTestData();
        displaySportsData();
    }
};


int main() {
    Result r;
    r.getData();
    r.displayData();
    return 0;
}
