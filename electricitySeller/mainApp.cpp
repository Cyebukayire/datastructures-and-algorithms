#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <fstream>

using namespace std;

struct Meter
{
    string custName;
    string custCategory;
    int meterNum;
};
void insert_meter()
{
    fstream meterFile;
    meterFile.open("meters.csv", ios::out | ios::app);
    string customerName, customerCategory, meterNumber;
    cout << "Enter customerName: ";
    getline(cin, customerName);
    cout << "Enter meterNumber: ";
    getline(cin, meterNumber);
    cout << "Choose the customer category: " << endl;
    cout << "1. Residential" << endl;
    cout << "2. Non-Residential" << endl;
    cout << "Choice>> ";
    getline(cin, customerCategory);
    meterFile << customerName << "," << meterNumber << "," << customerCategory << endl;
    cout << "\n\nRegistered Customer Successfully!" << endl
         << endl;
    meterFile.close();
}

void printMeters(vector<Meter> meters)
{
    for (Meter meter : meters)
    {
        cout << "\n\n- Meter -\n";
        cout << "CustName: " << meter.custName << endl;
        cout << "CustCategory: " << meter.custCategory << endl;
        cout << "MeterNumber: " << meter.meterNum << endl;
    }
}
vector<Meter> get_all_meters()
{
    fstream file;
    vector<Meter> meters;
    file.open("meters.csv", ios::in);
    if (file.is_open())
    {
        string line;
        while (getline(file, line))
        {
            stringstream ss(line);
            int k = 1;
            string substr;
            Meter meter;
            while (ss.good())
            {
                // cout << "K: " << k << endl;
                getline(ss, substr, ',');
                if (k == 1)
                {
                    meter.custName = substr;
                }
                else if (k == 2)
                {
                    // meter.custCategory = substr;
                    if (substr == "1")
                    {
                        meter.custCategory = "Residential";
                    }
                    else if (substr == "2")
                    {
                        meter.custCategory = "Non-Residential";
                    }
                }
                else if (k == 3)
                {
                    meter.meterNum = stoi(substr);
                }
                k++;
            }
            meters.push_back(meter);
        }
        // printMeters(meters);
        file.close();
    }
    return meters;
}

void delete_meter(int meterNum)
{
    fstream file("temp_meters.csv", ios::out);
    if (file.is_open())
    {
        vector<Meter> meters = get_all_meters();
        for (Meter meter : meters)
        {
            if (meter.meterNum != meterNum)
            {
                file << meter.custName << "," << meter.custCategory << "," << meter.meterNum << endl;
            }
        }
        remove("meters.csv");
        rename("temp_meters.csv", "meters.csv");
        file.close();
    }
}
int main()
{
    vector<Meter> meters = get_all_meters();
    delete_meter(123124);
    // printMeters(meters);
    return 0;
}