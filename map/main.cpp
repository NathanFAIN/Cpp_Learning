#include <iostream>
#include <string>
#include <map>

using namespace std;

int main(void)
{
    map<string, double> poids;

    poids["ta mere"] = 0.05;
    poids["ton pere"] = 200;
    poids["ton frere"] = 3;
    poids["ta soeur"] = 10000;

    for(map<string, double>::iterator it = poids.begin(); it != poids.end(); it++) {
        cout << it->first << " pese " << it->second << " kg." << endl;
    }
    if (poids.find("ton chien") == poids.end())
        cout << "ERROR\n";
    return (0);
}
