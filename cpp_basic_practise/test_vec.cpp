#include <vector>
#include <iostream>

using namespace std;

int main()
{
	vector<int> vetInt;
	vetInt.push_back(42);
	vetInt.push_back(100);
	vetInt.push_back(110);

	cout << "size: " << vetInt.size() <<endl;
	cout << "capcity: " << vetInt.capacity() <<endl;

	//vector<int>::const_iterator iter = vetInt.begin();
	vector<int>::iterator iter = vetInt.begin();
	while(iter != vetInt.end()){
		cout << "value of vetInt: "<< *iter << endl;
		++iter;
	}

	return 0;
}
