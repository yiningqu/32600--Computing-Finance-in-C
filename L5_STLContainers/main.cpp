#include <iostream>
#include <map> //std::map
#include <vector> //std::vector
#include <utility> //std::make_pair
using std::map;
using std::vector;
using std::string;
using std::cout;
using std::endl;



int main() {
    //// 1. Vector
    vector<int> v;
    for(int i = 0; i <= 10; i++){
        //class自带的function：expensive operation
        // add element at end of vector
        v.push_back(i);
    }

    vector<int> v1(10); //create vector with size = 10
    for(int i = 0; i < 10; i++){
        v[i] = i;
    }

    //// 1.1 Auto + Iterator for Vector
    // iteration是pointer to current position, *iter = value of that position
    for(auto iter= v1.begin(); iter != v1.end(); ++iter){
        cout << *iter << endl;
    }


    //// 2. Map
    //first type = key, second type = value
    map <unsigned int, string> zipcodes;
    zipcodes[60604] = "Chicago";

    map < string, unsigned int> population;
    population["Chicago"] = 10;


    //// 2.1 Pair
    //Two ways to use std::pair to insert values to map
    std::pair <unsigned int, string> p(30322, "Atlanta");
    zipcodes.insert(p);

    zipcodes.insert(std::make_pair(60615, "Cook"));



    //// 2.2 Auto + Iterator for Map
    // iteration是pointer to current position, *iter = value of that position
    for(auto iter= zipcodes.begin(); iter != zipcodes.end(); ++iter){
        cout << "Key: " << iter->first << ", Value: " << iter->second << endl;
    }


    //// 3 Iterator.Find
    auto iter = currencies_.find(currencySymbol);
    return iter->second;
}
