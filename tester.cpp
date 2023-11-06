#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;
int main() {
	int t, f, s, d, ti, raction, action;
	cin >> t >> f;
	while(t--){
		cin >> s >> d >> ti;
        int diff;
		if(s>d){raction=0;diff=s-d;}
		else{raction=1;diff=d-s;}
		if(s==f){action = 0;}
		else{action = 1;}
        if(s==d){raction=action;}
		int ans = s-1;
		while(ans < ti || action!=raction){
			if(action){
				ans += 2*(f-s);
				action = 0;
			}
			else{
				ans += 2*(s-1);
				action = 1;
			}
		}
        if(s==d && ti==0){cout << 0 << endl;}
		else if(s==d && action){cout << ans-(2*(s-1)) << endl;}
		else if(s==d && !action){cout << ans-(2*(f-s)) << endl;}
        else{cout << ans+(diff) << endl;}
        // cout << ans+(diff) << endl;
	}
	return 0;
}