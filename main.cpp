#include <iostream>
#include <thread>
#include <mutex>

using namespace std;

mutex carMutax;
void driverCar(string driverName) {
    unique_lock<mutex> carLock(carMutax);
  cout << driverName << " is driving." << endl;
  this_thread::sleep_for(chrono::seconds(2)); 
  cout << driverName << " is done driving." << endl;
    carLock.unlock();
}

int main() {
  thread t1(driverCar, "Oggy ");
  thread t2(driverCar, "Jack ");

  t1.join();
  t2.join();
  return 0;
}
