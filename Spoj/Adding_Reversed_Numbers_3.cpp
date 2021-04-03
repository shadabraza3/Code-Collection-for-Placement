#include <iostream>

using namespace std;

int reverse(int num) {
	int rem, rev_num=0;
	while(num != 0) {
		rem = num % 10;
		rev_num = rev_num * 10 + rem;
		num /= 10;
	}
	return rev_num;
}

int add(int a, int b) {
	int sum;
	int rev_a, rev_b;
	rev_a = reverse(a);
	rev_b = reverse(b);
	sum = rev_a + rev_b;
	return (reverse(sum));
}

int main()
{
	int t;
	int a,b;
	cin>>t;
	while(t--){
		cin>>a>>b;
		cout << add(a,b) << endl;
	}
	return 0;
}
