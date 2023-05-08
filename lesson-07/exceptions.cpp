#include <iostream>
#include <cmath>
#include <stdexcept>
using namespace std;

class Logarithm {
 public:
  Logarithm(double base, double argument) {
    base_ = base;
    argument_ = argument;
  }

  double Calculate() const {
      if (base_ <= 0)
        {
            std::string exception = "Base domain (<=0) error!";
            throw std::range_error(exception);
        }
        if (argument_ <= 0)
        {
            std::string exception = "Argument domain (<=0) error!";
            throw std::range_error(exception);
        }
        if (base_ == 1)
        {
            std::string exception = "Base domain (=1) error!";
            throw std::range_error(exception);
        }
    return std::log(argument_) / std::log(base_);
  }

 private:
  double base_;
  double argument_;
};

int main()
{
    Logarithm logarithm(2.0, -9.0);
    try 
    {
        logarithm.Calculate();
    }
    catch (std::range_error exception)
    {
        
        cout << "Exception: " << exception.what();
        cout << endl;
        
    }
    return 0;
}
