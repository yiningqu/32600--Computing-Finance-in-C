#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

string Lettergrade(int x){
    if (x>= 95 && x <= 100){
        return "A";
    }
    else if (x>=90 && x<=94){
        return "A-";
    }
    else if (x>=85 && x<=89){
        return "B+";
    }
    else if (x>=80 && x<=84){
        return "B";
    }
    else if (x>=75 && x<=79){
        return "B-";
    }
    else if (x>=65 && x<=74){
        return "C";
    }
    else if (x>=0 && x<=64){
        return "F";
    }
    else{
        return "Invalid Input";
    }
}


int main() {
    int score;
    cin >> score;
    string lettergrade = Lettergrade(score);
    cout << lettergrade << endl;
}
