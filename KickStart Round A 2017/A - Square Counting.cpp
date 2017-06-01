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
    //https://www.quora.com/How-many-squares-have-all-four-vertices-in-an-n-times-n-grid-of-dots
    //each square of dimension s (edge has s+1 dots) has exactly s square(1 upright, s-1 tilted square) with 4 vertices
    //on the boundary, total square Sum i (1->n-1) : i*(m-i)*(n-i)
    //can calculate directly based on sum of 3 series of i,i^2, i^3 faster than the below method
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
