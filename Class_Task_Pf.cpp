#include <iostream>
#include <string>
using namespace std;

int main()
{
    string names[] = {"Sayed Abdullah", "Syed Arham", "Abdul Samad"};

    int rollno[] = {190, 191, 192};

    for (int i = 0; i < 3; i++) {

        cout << "The name of student is " << names[i] << " and his/her role number is: " << rollno[i] << "\n";
    }
    return 0;
}