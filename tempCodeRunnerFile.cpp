void solve()
{
    ll n;
    cin >> n;
    vl v(n), gcdarr;
    ll breakpnt = -1;
    for(int i=0; i<n; i++) cin >> v[i];
    for(int i=0; i<n-1; i++) {gcdarr.push_back(gcd(v[i], v[i+1]));}
    for(int i=0; i<n-2; i++) {
        if(gcdarr[i] > gcdarr[i+1]) {breakpnt = i;break;}
    }
    if(breakpnt == -1) {cout << "YES" << endl;return;}
    vl test1, test2, test3;
    for(int i=0; i<n; i++)
    {
        if(i!=breakpnt) test1.push_back(v[i]);
        if(i!=breakpnt+1) test2.push_back(v[i]);
        if(i!=breakpnt+2) test3.push_back(v[i]);
    }
    vl ans1, ans2, ans3;
    for(int i=0; i<n-2; i++)
    {
        ans1.push_back(gcd(test1[i], test1[i+1]));
        ans2.push_back(gcd(test2[i], test2[i+1]));
        ans3.push_back(gcd(test3[i], test3[i+1]));
    }
    bool try1 = try2 = try3 = false;
    for(int i=0; i<n-3; i++) {
        if(ans1[i] > ans1[i+1]) {try1 = true;break;}
        if(ans2[i] > ans2[i+1]) {try2 = true;break;}
        if(ans3[i] > ans3[i+1]) {try3 = true;break;}
    }
    if(try1 || try2 || try3) {cout << "NO" << endl;return;}
    cout << "YES" << endl;
}