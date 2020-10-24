#include<iostream>
#include<list>

using namespace std;

int main(){
    list <int> l1{1, 2, 3, 4, 5} ;
    list <int>::iterator p = l1.begin();

    while(p!=l1.end()){
        cout<< *p << endl;
        p++;
    }
    return 0;
}

