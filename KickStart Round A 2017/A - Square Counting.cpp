#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <sstream>
#include <fstream>
#include <map>

using namespace std;

#define ll      long long
#define M       1000000007

ll solve(ll m, ll n){
    ll count = min(m,n);
    ll ans = 0;
    for (int i = 1; i <= count - 1; i++){
        ans += (i%M * (m%M - i%M)%M * (n%M - i%M)%M)%M;
        ans = ans%M;
    }
    return ans;
}

int main(int argc, char *argv[])
{
    int T = 0;
//    cin >> T;
    string path = "/home/trung/untitled3/A-large-practice.in";

    fstream inF(path);

    inF >> T;

    for (int t = 1; t <= T; t++){
//        cin >> n;
//        cin.ignore();
        ll m, n;
        inF >> m >> n;
        ll ans = solve(m,n);

        cout << "Case #" << t << ": " << ans  << endl;
    }
    return 0;
}
