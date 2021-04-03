#include <iostream>
#include <cmath>
using namespace std;

void prime_print(unsigned long long m, unsigned long long n) {
	int flag = 0;
	unsigned long long i,j;
	for(i=m; i<=n; i++) {
		for(j=2; j<=sqrt(i); j++) {
			if(i%j != 0)
				continue;
			else {
				flag=1;
				break;
			}
		}
		if(i == 1)
			continue;
		if(flag == 0)
			cout << i << endl;
		flag = 0;		
	}
	cout << endl;
}

int main()
{
	int t;
	unsigned long long m,n;
	cin>>t;
	while(t--) {
		cin>>m>>n;
		prime_print(m,n);
	}
	return 0;
}

