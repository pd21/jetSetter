#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> vec(3);

    vec[0] = 5;
    vec[1] = 7;
    vec[2] = 8;
    vec.push_back(10);

    cout << vec.front() << endl;
    cout << vec.back() << endl;
    cout << vec.at(2) << endl;
  
    return 0;
}
