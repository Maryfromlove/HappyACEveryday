/**
  *    █████╗  ██████╗       ██████╗ ██╗     ███████╗
  *   ██╔══██╗██╔════╝       ██╔══██╗██║     ╚══███╔╝
  *   ███████║██║            ██████╔╝██║       ███╔╝ 
  *   ██╔══██║██║            ██╔═══╝ ██║      ███╔╝  
  *   ██║  ██║╚██████╗▄█╗    ██║     ███████╗███████╗
  *   ╚═╝  ╚═╝ ╚═════╝╚═╝    ╚═╝     ╚══════╝╚══════╝
  *
  *  @Author: TieWay59
  *  @Created: 2019/11/23 20:04
  *  @Link: https://www.cometoj.com/contest/79/problem/C?problem_id=4221
  *  @Tags:
  *
  *******************************************************/


#include <bits/stdc++.h>

#ifdef DEBUG
//#define debug(x)  cerr <<#x << " = "<<x<<endl;
#include "libs59/debugers.h"

#else
#define endl '\n'
#define debug(...)  59
#endif

#define STOPSYNC ios::sync_with_stdio(false);cin.tie(nullptr)
#define MULTIKASE int Kase=0;cin>>Kase;for(int kase=1;kase<=Kase;kase++)
typedef long long ll;
const int MAXN = 2e5 + 59;
const int MOD = 1e9 + 7;
const int INF = 0x3F3F3F3F;
const ll llINF = 0x3F3F3F3F3F3F3F3F;
using namespace std;

int l0, r0;
int l1, r1;
int a[MAXN];
int b[MAXN];
int n;

int check(int bound) {
    memset(b, 0, sizeof b);
    for (int i = 1; i <= n; ++i) {
        if (a[i] > i) {

        }
    }

}


void solve(int kaseId = -1) {
    cin >> n;
    r0 = r1 = 0;
    l0 = l1 = INF;

    for (int i = 1; i <= n; ++i) {
        cin >> a[i];
        b[a[i]] = i;
        if (a[i] < i) {
            l1 = min(l1, a[i]);
            r1 = max(r1, a[i]);
            l0 = min(l0, i);
            r0 = max(r0, i);
        }
    }
    bool valid = true;
//    debug(l1, r1, l0, r0);
    for (int i = 1; i <= n; ++i) {
        if (i >= b[i]
            && l1 <= i && i <= r1
            && l0 <= b[i] && b[i] <= r0) {

            valid = false;
            break;
        }
    }

    if (valid) {
        cout << l1 - 1 << " " << l0 - 1 << endl;
    } else {
        cout << "-1 -1" << endl;
    }
}

void solves() {
    MULTIKASE {
        solve(kase);
    }
}

int main() {
    STOPSYNC;
    solves();
    return 0;
}
/*

 */