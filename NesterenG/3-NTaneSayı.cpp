#include<iostream>
using namespace std;

int main()
{
	int n, sum=0, i=0;

	cout << "Input a number:" << endl;
    cin >> n;

    while(i<=n){

        sum = sum+i;
        i++;

    }
    cout << "Sum of the numbers:" << sum << endl;

	return 0;
	
}
