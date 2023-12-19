#include <iostream>
#include <cmath>
#include <iomanip>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;
int main(){
    int D = 0;
    double A = 0,B = 0,M = 0,SD = 0;
    string textline;
    ifstream source("score.txt");
    while (getline(source,textline))
    {
        A += atof(textline.c_str());
        B += pow(atof(textline.c_str()),2);
        D++;
    }
    M = A/D;
    SD = sqrt((B/D)-pow(M,2));
    cout << "Number of data = " << D << "\n";
    cout << setprecision(3);
    cout << "Mean = " << M <<"\n";
    cout << "Standard deviation = " << SD;
}