#include <iostream>
#include <ctime>
#include <vector>
#include <memory>

using namespace std;

class Product
{
    string nameP;
    float price;
    int productID;
    public:
    Product()
    {
        this->nameP = "book";
        this->price = 13.96;
        this->productID = 9999;
    }
    Product(string nameP, float price, int productID)
    {
        this->nameP = nameP;
        this->price = price;
        this->productID = productID;
    }

    float Price()
    {
        return price;
    }
    //~Product();

};

class Customer
{
    private:
    string nameC;
    string email;
    public:
        string NameC()
        {
            return nameC;
        }
        string Email()
        {
            return email;
        }
    int customerID;
    Customer()
    {
        this->nameC = "John";
        this->email = "john@gmail.com";
        this->customerID = 1234;
    }
    Customer(string nameC, string email, int customerID)
    {
        this->nameC = nameC;
        this->email = email;
        this->customerID = customerID;
    }
    //~Customer();
};

int n;

class Order
{
    int Numberofproducts = 0;
    public:
    int IDorder;
    Customer Customer1;
    Product Trolley[1000];

    Order(int IDorder, Customer Customer1)
    {
        this->IDorder = IDorder;
        this->Customer1 = Customer1;
    }



    void AddtoTrolley (Product product)
    {


            Trolley[Numberofproducts] = product;
            Numberofproducts++;

    }

    float TotalCost ()
    {
         float cost = 0;
         for (int i=0; i<n; i++)
         {
             float priceofproduct = Trolley[i].Price();
             cost = cost + priceofproduct;
         }
         return cost;

    }
};


int main()
{
    n = 1;
    Customer Homme("Arek", "areczek@gmail.com", 1234);
    Product Book("Black", 1.98, 9999);
    Order First(0001, Homme);

    First.AddtoTrolley(Book);
    float pay = First.TotalCost();
    cout << "Total Cost: " << pay << endl;
    cout << Homme.NameC() << endl;



}
