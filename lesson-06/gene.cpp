#include <iostream>
#include <sstream>
#include <memory>
#include <cassert>
//using namespace std;

class Sequence{
 public:
  virtual int Length() = 0;
  class Fake;
}; //interfejs

class Sequence::Fake : public Sequence {
 int Length() {return 100;}; //klasa fake udaje prawdziwą implementacje i zwraca liczbe 100
};

class Gene{
 private:
  std::string name_;
  std::shared_ptr<Sequence> sequence_; //wskaznik na sekwencje
 public:
  
  Gene(std::string name, std::shared_ptr<Sequence> sequence)  //konstruktor
   : name_(name), sequence_(sequence){};
  std::string JSON(){
    std::stringstream ss;
    ss << "{";
    ss << " \"name\": \"" << name_ << "\",";
    ss << " \"length\": " << sequence_->Length();
    ss << "}";

      return ss.str();
  }
};

int main() {
  std::shared_ptr<Sequence> fakeSequence = std::make_shared<Sequence::Fake>();
  Gene gene("BALF5", fakeSequence);
  std::cout << gene.JSON() << std::endl;
  assert(fakeSequence->Length() == 100);
  return 0;
  
}
