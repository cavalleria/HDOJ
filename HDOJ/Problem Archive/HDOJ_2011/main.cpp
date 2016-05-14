#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, char** argv) 
{
	int m;
	cin >> m;
	
	int n;
	double sum;
	for(int j = 0; j < m; j++)
	{
		cin >> n;
		sum = 1.0;
		
		for(int i = 2, flag = 1; i <= n; i++)
        {
            flag *= -1;
            sum += (flag * 1.0 / i);
        }
		
		cout << fixed << setprecision(2) << sum <<endl;
	}
	
	return 0;
}


