


// Question 5 /////////////////////////////////////////////
// Complete

#include <iostream>
#include <iomanip>
using namespace std;

// Driver Code
int main()
{
    cout << "Enter how many persons are there...?\n";
    int n;      cin >> n;

    // create two array one for temperature in farenheit and other for name of person
    float tempInFaren[n+1] = {0};
    string name[n+1];

    // take input name of person and their temperature
    for(int i = 1;  i <= n;  i++){
        cout << "Enter " << i << " person name and temperature in Farenheit seperated with new line...\n";
        getline(cin,  name[i]);
        cin >> tempInFaren[i];
    }
    cout << "\n==========================================\n";

    // Array for storing temperature in centigrate
    float tempInCel[n+1] = {0};

    // Converting Farenheit to Centigrate
    for(int i = 1;  i <= n;  i++){
        float cent = (tempInFaren[i] - 32) * 5*1.0/8;
        tempInCel[i] = cent;
    }

    // Display the temperature in centigrate with person name
    for(int i = 1;  i <= n;  i++){
        cout << name[i] << setw(16 - name[i].size()) << setfill('_') << '\n' ; 
        cout << fixed << setprecision(1) << tempInCel[i] << endl << endl;
    }

    return 0;
}