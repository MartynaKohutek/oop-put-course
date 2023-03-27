#include <iostream>
using namespace std;

class Wallet
{
    public: 
    float money;
    string colour;
    Wallet()
    {
        money = 0;
        colour = "none";
    }

    Wallet(float money, string colour)
    {
        this->money = money;
        this->colour = colour;
    }
    
    Wallet(float money) : Wallet()
    {
        this->money = money;
    }
    
};

int main()
{
    Wallet *myWallet = new Wallet(87.43, "red");
    Wallet *theirWallet = new Wallet();
    Wallet *hisWallet = new Wallet(12);
    
    cout << "amount: " << hisWallet->money << endl;
    cout << "colour: " << hisWallet->colour << endl;
    cout << "colour: " << theirWallet->colour << endl;
    cout << "amount: " << theirWallet->money << endl;
    cout << "colour: " << myWallet->colour << endl;
    cout << "amount: " << myWallet->money << endl;
    

    return 0;
}
