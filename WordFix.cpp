#include "FilterMgr.h"

#include <iostream>


using namespace std;

int main() {

	FilterMgr filterManager;
	string filterChoice;
	string myWord;

	cout << "Enter your choice of the following filters. (q to quit)\n";
	cout << filterManager.getChoices();
	while(filterChoice != "q")
	{
		cin >> filterChoice;
		IFilter *filter = filterManager.selectFilter(filterChoice);
		cout << "\nEnter a word:\t";
		cin >> myWord;
		cout << "Filtered word is:\t";
		filter->execute(myWord);
	}
	
	return 0;
}
