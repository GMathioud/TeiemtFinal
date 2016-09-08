/* 
 * File:   main.cpp
 * Author: georgem
 *
 * Created on 12 June 2016, 20:58
 */
//Copyright <2016> George Mathioudakis
#include <iostream>

using namespace std;

int main() {
    int height;
    cout << "Enter pyramid height:";
    cin >> height;
    for (int i = 1; i <= height; i++) {
        int e1 = (height - i);
        int e2 = i*2;
        for (int j = 1; j <= e1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= e2; j++) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}
