/* 
 * File:   main.cpp
 * Author: georgem
 *
 * Created on 13 June 2016, 23:41
 */
//Copyright <2016> George Mathioudakis
#include <iostream>

using namespace std;

/*
 * 
 */
bool first(int inp) {
    if (inp >= 1 && inp <= 1000) {
        for (int i = 2; i <= inp/2; i++) {
            if (!(i == inp)) {
                if (inp % i == 0) {
                    return false;
                }
            }
        }
        return true;
    }
}

int main(int argc, char** argv) {
    int inp;
    cout << "Enter a number between 1-1000:";
    cin >> inp;
    if (first(inp) == true) {
        cout << "O arithmos EINAI prwtos!";
    } else {
        cout << "O arithmos DEN einai prwtos!";
    }
    return 0;
}

