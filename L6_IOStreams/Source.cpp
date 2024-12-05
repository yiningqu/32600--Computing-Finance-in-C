#include <iostream>
#include <fstream>
#include <sstream>
using std::string;
using std::cout;
using std::endl;
using std::cerr;
using std::ofstream;
using std::ifstream;
using std::istringstream;

void WriteToFile()
{
    // name of the output file
    // string filename = "C:\\Users\\l_cha\\Desktop\\greetings.txt";
    string filename = "./greetings.txt";

    // open output file for writing
    ofstream outfile(filename);

    // check if file is open
    if (outfile)
    {
        outfile << "hello " << endl;
        outfile << "world" << endl;
        // closes automatically when outfile goes out of scope
        // but, we can close it too..
        // outfile.close();
    }
    else //couldn't open open the file
    {
        cerr << "Unable to open file " << filename << endl;
    }

}


void ReadFromFile()
{
    // name of the input file
    // string filename = "C:\\Users\\l_cha\\Desktop\\greetings.txt";
    string filename = "./greetings2.txt";

    // open file for reading
    ifstream infile(filename);

    if (!infile) // check if file is open
    {
        cerr << "Unable to open file " << filename << endl;
        return;
    }

// read the file
    string data;
    while (getline(infile, data))
    {
        cout << data << endl;
    }

}



void ReadExchangeRatesFromFile() {
    // Name of the input file
    // reading the file from desktop. Replace xyz with your login name
    string filename = "./CurrencyRates.txt";

    // Open file for reading
    ifstream infile(filename);

    if (!infile) // check if file is open
    {
        cerr << "Unable to open file " << filename << endl;
        return;
    }

    string data;
    while (getline(infile, data)) {
        string symbol;
        double rate = 0.0;
        istringstream iss(data); //extract "USD 1.0"

        iss >> symbol >> rate; //认定whitespace = pause

        cout << symbol << " " << rate << endl;
    }
}




    //ostringstream: Write data into string
    std::ostringstream oss;
    oss << "USD";
    oss << 1.0 << ends;

    cout << oss.str() << endl;


    //istringstream: Extract data from the string
    string s = "USD 1.0";
    std::istringstream iss(s);
    string symbol; double rate;
    iss >> symbol >> rate;
}


