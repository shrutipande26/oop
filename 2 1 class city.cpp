#include <iostream>
#include <string> 

using namespace std;

class city {
public:
    string name;
    int population;

    void accept() {
        cout << "Enter city name: ";
        cin >> name;
        cout << "Enter population: ";
        cin >> population;
    }

    void display() {
        cout << "City: " << name << ", Population: " << population << endl;
    }
};

int main() {
    const int num_cities = 5;
    city c[num_cities];
    int i;

    for (i = 0; i < num_cities; i++) {
        c[i].accept();
    }

    for (i = 0; i < num_cities; i++) {
        c[i].display();
    }

    int maxIndex = 0; 

    for (i = 1; i < num_cities; i++) {
        if (c[i].population > c[maxIndex].population) {
            maxIndex = i;
        }
    }

    cout << "\n";
    cout << "The most populated city is " << c[maxIndex].name
         << " with a population of " << c[maxIndex].population << endl;

    return 0;
}
