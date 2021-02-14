#ifndef OBS_HPP
#define OBS_HPP

#include <vector>

class Observer {
public:
  virtual void update(){};
};

class Subject {
public:
  void AddObserver (Observer *ob){ observers.push_back(ob); }
  void DeleteObserver (){ observers.pop_back(); }
  void NotifyObservers (){
    for(Observer *it: observers){
      it->update();
    }
  }
private:
  std::vector<Observer *> observers;
};

#endif
