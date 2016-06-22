/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

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
        int e1 = (2*height - i*2)/2;
        int e2 = i*2;
        for (int j = 1; j <= e1; j++) {
            cout << " ";
        }
        for (int j = 1; j <= e2; j++) {
            cout << "*";
        }
        for (int j = 1; j <= e1; j++) {
            cout << " ";
        }
        cout << endl;
    }
    return 0;
}