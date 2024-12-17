#include <iostream>
#include <iomanip>
#include <cmath>
#include <fstream>
#include <cstdlib>
#include <string>
using namespace std;

int main(){
    string textline;
    int count = 0;
    float mean,sd;
    ifstream source;
    source.open("score.txt");
    while(getline(source,textline)){
        mean +=  atof(textline.c_str());
        sd +=  pow(atof(textline.c_str()),2);
        count++;
        }

    cout << "Number of data = " << count << endl;
    cout << setprecision(3);
    cout << "Mean = "<< mean/count << endl;
    cout << "Standard deviation = " << sqrt((sd/count)-pow(mean/count,2)) << endl;
}