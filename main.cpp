#include "Observer.hpp"
#include <iostream>
using namespace std;

class Speaker : public Observer{
public:
  Speaker (string word){ word_m = word; }
  void update(){
    cout << word_m << endl;
  }
private:
  string word_m;
};

int main(){
  Subject *button = new Subject();
  Speaker *sp1 = new Speaker("May the Force be with you.");
  Speaker *sp2 = new Speaker("Magic Mirror on the wall, who is the fairest one of all?");
  button->AddObserver(sp1);
  button->AddObserver(sp2);

  button->NotifyObservers();

  return 0;
}
