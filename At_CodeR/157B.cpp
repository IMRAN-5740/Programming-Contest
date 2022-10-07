#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main() {
    ll array[4][4];
    ll brray[4][4];
    ll drray[4][4];

    for (ll i = 1; i <= 3; i++) {
        for (ll j = 1; j <= 3; j++) {
            cin >> array[i][j];
            drray[i][j] = 0;
        }
    }
    ll m;
    cin >> m;
    ll crray[m + 1];
    for (ll k = 1; k <= m; k++) {
        cin >> crray[k];
        for (ll p = 1; p <= 3; p++) {
            for (ll q = 1; q <= 3; q++) {
                if (array[p][q] == crray[k]) {
                    drray[p][q] = 1;
                }
            }
        }
    }
    ll cnt = 0;
    for (ll i = 1; i <= 3; i++) {
        if (drray[1][i] == 1 && drray[2][i] == 1 && drray[3][i]) {
            cnt++;
            break;
        }
        else if (drray[i][1] == 1 && drray[i][2] == 1 && drray[i][3]) {
            cnt++;
            break;
        }
    }
    if (drray[1][1] == 1 && drray[2][2] && drray[3][3]) {
        cnt++;
    }
    if (drray[3][1] == 1 && drray[2][2] && drray[1][3]) {
        cnt++;
    }
    if (cnt > 0) { 
        cout << "Yes" << endl;
    } else
        cout << "No" << endl;
    return 0;
}