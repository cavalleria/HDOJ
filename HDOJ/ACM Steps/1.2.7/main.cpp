#include <iostream>
#include <string>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int n;	
	cin >> n;
	while(n--){		
		string id;
		cin >> id;
		
		int	d = (id[1] - '0') + (id[0] - '0') * 10;
		cout << "He/She is from ";
		
		switch(d){
			case 11 :
				cout << "Beijing";
				break;
			case 21 :
				cout << "Liaoning";
				break;
			case 31 :
				cout << "Shanghai";
				break;
			case 33 :
				cout << "Zhejiang";
				break;
			case 54 :
				cout << "Tibet";
				break;
			case 71 :
				cout << "Taiwan";
				break;
			case 81 :
				cout << "Hong Kong";
				break;
			case 82 :
				cout << "Macao";
				break;
		}
		
		cout << ",and his/her birthday is on " << id[10] << id[11] << "," << id[12] << id[13]
				<< "," << id[6] << id[7] << id[8] << id[9] 
				<< " based on the table." << endl;
		
	}
	return 0;
}


