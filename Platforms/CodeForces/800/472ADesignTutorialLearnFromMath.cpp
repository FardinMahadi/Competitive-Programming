// In the name of Allah, the Most Gracious, the Most Merciful
// C: FardinMahadi

#include <bits/stdc++.h>
using namespace std;

#define nl                  '\n'
#define F                   first
#define S                   second
#define ll                  long long
#define pb                  push_back
#define MOD                 1000000007
#define gcd(x,y)            __gcd(x,y)
#define lcm(x,y)            y*x/__gcd(x,y)
#define all(a)              (a.begin()),(a.end())
#define SUM(a)              accumulate(all(a),0LL);
#define ms(a,b)             memset(a, b, sizeof(a))
#define UNIQUE(X)           (X).erase(unique(all(X)),(X).end())
#define SORT_UNIQUE(c)      (sort(c.begin(),c.end()), c.resize(distance(c.begin(),unique(c.begin(),c.end()))))

const double PI = acos(-1);

bool isPrime(int n){
    bool is_prime = true;
    for (int i = 2; i <= n/2; ++i) {
        if (n % i == 0) {
            is_prime = false;
            break;
        }
    }
    return is_prime;
}

int32_t main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    vector<int> primeNums;
    for(int i = 2; i < 10e5; ++i){

    }
    
    long long int n;
    cin >> n;

    if( n%2==0 ){
        ll int num1, num2;
        num1 = n/2;
        num2 = n/2;

        while(isPrime(num1) || isPrime(num2)){
            num1--;
            num2++;
        }
        cout << num1 << " " << num2 << nl;
    }
    else{
        ll int num1, num2;
        num1 = n/2;
        num2 = (n/2)+1;

        while(isPrime(num1) || isPrime(num2)){
            num1--;
            num2++;
        }
        cout << num1 << " " << num2 << nl;
    }
    
    return 0;
}