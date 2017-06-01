#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

int countdistinctChar(string &s){
    map<char, int> temp;
    for (char c: s){
        temp[c] += 1;
    }

    return temp.count(' ')? temp.size() - 1: temp.size();       //check if contains ' ' char
}

int main(int argc, char *argv[])
{
    int t;
    int n;
    cin >> t;

    for (int i = 1; i <= t; i++){
        cin >> n;
        cin.ignore();
        string res = "";
        int maxDistinctChar = 0;
        for (int j = 1; j <= n; j++){
            string s;
            getline(cin, s);
            int num = countdistinctChar(s);
            if (num > maxDistinctChar){
                res = s;
                maxDistinctChar = num;
            }
            else if (num == maxDistinctChar){
                //a tie
                res = min(res,s);       //which comes first in the alphabeta
            }
//            cout << s << "  " << num << endl;
        }
        cout << "Case #" << i << ": " << res  << endl;
    
