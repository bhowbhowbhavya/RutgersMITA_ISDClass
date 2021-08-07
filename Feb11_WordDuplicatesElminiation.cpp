#include "std_lib_facilities.h"

int main()
{
	cout << "Enter text below and use the word 'RBS' to finish inputting!\n";

	// read input text and save it in a word vector
	vector<string> words;
	for (string s; cin >> s && s != "RBS"; )
		words.push_back(s);

	// print the inputted words
	cout << "\nVector words before sorting:\n";
	for (int i = 0; i < words.size(); i++)
		cout << "word " << i << " has: " << words[i] << endl;

	// sort the words in the vector
	sort(words);
	cout << "\nsorted!" << endl;
	cout << "Total number of words inputted is: " << words.size() << endl << endl;

	// print the vector words after sorting
	cout << "Vector words after sorting:\n";
	for (int i = 0; i < words.size(); i++)
		cout << "word " << i << " has: " << words[i] << endl;

	// copy the unique words to a new vector
	cout << "\nProcessing the text:\n";
	vector<string>uniq_words;
	for (int i = 0; i < words.size(); i++)
	{
		cout << "found new word: " << words[i] << endl;
		uniq_words.push_back(words[i]); 

		// vector is already sorted, just compare the adjacent words
		while (i < words.size() - 1 && words[i+1] == words[i])
		{
			cout << "found duplications: " << words[i] << endl;
			i++;
		}
	}

	cout << "\nfound " << words.size() - uniq_words.size() << " duplicate words in total\n";
	cout << "\nUnique words are below: " << endl;
	// print the unique words
	for (string s : uniq_words)
		cout << s << "\n";
	
}

