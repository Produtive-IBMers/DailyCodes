#include <iostream>
using namespace std;
int gcd(int a, int b) 
{ 
    if (b == 0) 
        return a;
    return gcd(b, a % b);     
} 
int etf(int n) 
{ 
    float result = n; 
    for (int p = 2; p * p <= n; ++p) { 
        if (n % p == 0) { 
            while (n % p == 0) 
                n /= p; 
            result *= (1.0 - (1.0 / (float)p)); 
        } 
    } 
    if (n > 1) 
        result *= (1.0 - (1.0 / (float)n)); 
  
    return (int)result; 
}
int main() {
	int t ;
	cin >> t;
	while(t-->0)
	{
		int n ; 
		cin >> n ; 
		cout << etf(n) << endl ;
	}
	return 0;
}
