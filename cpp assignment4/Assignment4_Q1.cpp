//<================== Assignment 1 ==========================>

// Problem 1/////////////////////////////////////////////////////////

// Define a structure named "KYC" that contains following data members

// a)-  name, data of birth, PAN No, Adhara No, Address, Annual Income, 
//      saving under tax scheme

// b)-  Define the following functions to perform the mentioned tasks.

//      i)   input_data(): to input the data for KYC details
//      ii)  output_data(): to output the data of a KYC details

//      iii) computeIncomeTax(): The rule of income tax calculation is as follows:
//          -> upto 5 lacks - no tax
//          -> Between 5-10 lacks - 10% on (Total income - saving under tax scheme(upto max of 1.5 lakhs))
//          -> above 10 lakhs 20% on (Total income - saving under tax scheme(upto max. of 1.5 lakhs))

// c)-  Define an array of structure for 7 KYC to perform the mentioned tasks.


#include <iostream>
#include <string>
#include <bits/stdc++.h>
using namespace std;

// Structure KYC
struct KYC
{
private:
    string name;
    string address;
    string dateOfBirth;
    string panNumber;
    long long adharNumber;
    double annualIncome;
    double savingsUnderTax;

public:
    // takes input all data members
    void inputData(string str, string add, string dob, string pan, long long adhar, double in, double savings){
        name = str;
        address = add;
        dateOfBirth = dob;
        panNumber = pan;
        adharNumber = adhar;
        annualIncome = in;
        savingsUnderTax = savings;
    }

    // display output all data members
    void output(){
        cout << fixed;
        cout << "Name :  " << name << endl;
        cout << "Address : " << address << endl;
        cout << "Date of Birth : " << dateOfBirth << endl;
        cout << "Pan Number : " << panNumber << endl;
        cout << "Adhar Number : " << adharNumber << endl;
        cout << "Annual Income :" << annualIncome << endl;
        cout << "savings Under Tax Scheme :" << savingsUnderTax << endl;
    }

    // Calculate Income Tax
    float incomeTax(){
        float ans = annualIncome;

        // if annual income is less the 500000 then tax in zero
        if(ans <= 500000) return 0;

        // If annual income is in between 500000 to 1000000 
        if(ans > 500000  and  ans <= 1000000){

            if(savingsUnderTax <= 150000){
                ans = (annualIncome - savingsUnderTax) * 0.1;
                return ans;
            }
            else{
                savingsUnderTax = savingsUnderTax - 150000;
                ans = (annualIncome - 150000 + savingsUnderTax) * 0.1;
                return ans;               
            }
        }

        // If annual income is greater than 1000000
        // if saving under tax is upto 150000
        if(savingsUnderTax <= 150000){
            ans = (annualIncome - savingsUnderTax) * 0.2;
            return ans;
        }
        // Otherwise
        else{
            savingsUnderTax = savingsUnderTax - 150000;
            ans = (annualIncome - 150000 + savingsUnderTax) * 0.2;
            return ans;               
        }
    }
};



// Driver Code
int main()
{
    const int SIZE = 1;

    // creating  array of object of structure KYC
    KYC obj[SIZE];

    for(int i = 0;  i < SIZE;  i++){
        cout << "\nEnter Details of " << i+1 << " first customer...\n\n";
        string name, address, dob, pan;
        long long adhar;
        double income, savingsUnderTax;

        cout << "Input name, address, date Of Birth, pan no, adhar no, income, savings Under Tax Scheme each seperated with new line...\n";
        getline(cin, name, '\n');
        getline(cin, address, '\n');
        getline(cin, dob, '\n');
        getline(cin, pan, '\n');
        cin >> adhar >> income >> savingsUnderTax;

        obj[i].inputData(name, address, dob, pan, adhar, income, savingsUnderTax);
    }
    
    // Details of custumers
    for(int i = 0;  i < SIZE;  i++){
        cout << i+1 << " customer details : \n";
        obj[i].output();
    }




    return 0;
}
