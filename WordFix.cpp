// WordFix.cpp: Demonstration of the IFilter functionality and WordFix program
//	Matthew Luchette CPSC 430
//	Comments are taken directly from hw4.docx to show the process of following
//	project specific requirements.
//////////////////////////////////////////////////////////////////////
#include "FilterMgr.h"

using namespace std;

int main() {

	FilterMgr filterManager;
	string filterChoice;
	string myWord;
	IFilter *filter;

	//Prompts the user for a filter name, using the FilterMgr to get the choices.
	cout	<< "Enter your choice of the following filters. (q to quit)\n"
			<< filterManager.getChoices();
	//Accepts a filter name from the user.
	cin >> filterChoice;
	filter = filterManager.selectFilter(filterChoice);
	//If the filter name is not one of the available filters, the user gets the prompt again 
	while(filter == NULL)
	{
		if(filterChoice == "q")
			break;
		cout << "\nPlease choose a valid option:\n" << filterManager.getChoices();
		cin >> filterChoice;
		filter = filterManager.selectFilter(filterChoice);
	}
	//If the filter name is �q�, the program quits.
	while(filterChoice != "q")
	{
		//Otherwise it prompts the user for a word.
		cout << "\nEnter a word:\t";
		//It accepts a word from the user.
		cin >> myWord;
		cout << "Filtered word is:\t";
		//It executes the filter on the word, and displays the result.
		filter->execute(myWord);
		//It deletes the filter, then goes back to the first prompt
		filter->~IFilter();
		cout	<< "\n\nPlease enter your choice of the following filters. (q to quit)\n"
				<< filterManager.getChoices();
		//Accepts a filter name from the user.
		cin >> filterChoice;
		//If the filter name is �q�, the program quits.
		if(filterChoice == "q")
				break;
		filter = filterManager.selectFilter(filterChoice);
		//If the filter name is not one of the available filters, the user gets the prompt again 
		while(filter == NULL)
		{
			//If the filter name is �q�, the program quits.
			if(filterChoice == "q")
				break;
			cout << "\nPlease choose a valid option:\n" << filterManager.getChoices();
			cin >> filterChoice;
			filter = filterManager.selectFilter(filterChoice);
		}
	}
	
	return 0;
}