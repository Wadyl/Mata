#include <random>
#include <iostream>

using namespace std;
int liczba;
int main(){
    random_device losowa;
    default_random_engine gen(losowa());
    uniform_int_distribution<int> przedzial( 1 , 6 );
    liczba = przedzial(gen);

    cout << liczba << endl;
    return  liczba;
    
}

