

// Program 2 ///////////////////////////////////////////////////////////////
// Define a structure  named "product" that contains following data members

// a) product id, product name, current discount percentage, 
//    product label price, user rating
//
// b) define the following functions to perform the mentioned tasks
//
//   i)  input_detail() : to input the data for product details.
//   ii) output_Detail() : to output the data of a product details.
//   iii)ComputeSalesPrice(): the sales price of a product is = label price - current discount rate + SGST + CGST
//
// c) define an array of structure for 5 product and demonstrate the above task.




#include <iostream>
using namespace std;

// structure 
struct product
{
private:
    string productId, productName;
    float discountPercentage;
    float productLabelPrice;
    string rating;

public:

    // takes input
    void input_detail(string prodName, string prod, float disPer, float prodLabelPrice, string rat){
        productId = prod;
        productName = prodName;
        discountPercentage = disPer;
        productLabelPrice = prodLabelPrice;
        rating = rat;
    }

    // Outputs detail
    void output_detail(){
        cout << "Details are...\n";
        cout << "Name : " << productName << endl;
        cout << "ProductId : " << productId << endl;
        cout << "Discount Percentage : " << discountPercentage << endl;
        cout << "product Label Price : " << productLabelPrice << endl;
        cout << "Rating : " << rating << endl;
    }

    // Compute Sales Price
    // Taking GST 12 percent so CGST 6 % and SGST 6 %
    float computeSalesDetails(){
        const float CGST = productLabelPrice * 0.06;
        const float SGST = productLabelPrice * 0.06;
        float discount = productLabelPrice * discountPercentage / 100;

        float sellingPrice = productLabelPrice - discount + SGST + CGST;
        return sellingPrice;
    }

};



// Driver Code //////////////////////////////////////////////////////////////////////////////////
int main()
{
    // creating objects of product
    product objects[5];

    cout << "Enter details of 5 products one by one...\n\n";
    cout << "Each Product is consisting 5 lines and each seperated with new line..\n\n";
    cout << "In next 5 lines enter Product Name, Product Id, Discount Percentage, Product Price, Rating...\n\n";

    string productName, productId, rating;
    float discountPercentage, productLabelPrice;

    // take input detail of all 5 products one by one
    for(int i = 0;  i < 5;  i++){
        cin >> productName >> productId >> discountPercentage >> productLabelPrice >> rating;
        objects[i].input_detail(productName, productId, discountPercentage, productLabelPrice, rating);
    }


    // Display all products' detail
    cout << "\n=============================================\n";
    for(int i = 0;  i < 5;  i++){
        objects[i].output_detail();
    }



    // Calculate Selling Price and Display details of each product
    cout << "\n=============================================\n";
    for(int i = 0;  i < 5;  i++){
        objects[i].output_detail();
        cout << objects[i].computeSalesDetails() << endl << endl;
    }


    return 0;
}




