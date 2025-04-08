/***********************************************************************
	Title:  		sequential.cpp
	Author: 		Malachi Dorman
	Description: 	A program that computes runtime to read in words 
					from a text file, prepend the number of characters
					in the word to each word, and then sort the words
					in ascending order.			
	Date Created:	April 3, 2025
************************************************************************/

#include <iostream> //used for input & output
#include <fstream> //used to read from text file
#include <vector> //used to create & use a vector data structure
#include <ctime> //used for computing runtime
#include <parallel/algorithm> //used for the for_each and sort functions
#include <omp.h> //used for __gnu_parallel 
#include <iomanip>

using namespace std;


//function prototype
void readFromFile(vector<string>&);


int main() 
{

    const int threads_wanted = 2;
    omp_set_dynamic(false);
    omp_set_num_threads(threads_wanted);


	vector<string> str;
	double compute_time_s;
	clock_t tStart, tStop;
	
	cout << setprecision(3);

	auto print = [](const string& n) { cout << n << endl; };
	
	readFromFile(str);
	
    cout << endl;
	
	//START THE CLOCK
	tStart = clock();
	
	/*
		The following for_each loop will iterate through the string 
		vector and for each element it will:
			1) Use a for loop to count the number of characters in the string.
			2) Convert the number of characters to a string
			3) Prepend the number of characters to the front of the string.
		Example: if the string is "apricot" then the resulting string after 
		running this code would be "7_apricot" and "cat" would turn into "3_cat"
	*/


    __gnu_parallel::for_each(str.begin(), str.end(), [](string &n) {
    int count = 0;
		for(int i=0;i<n.length();i++)
			count++;
		n=to_string(count)+"_"+n;		
	});
	
	//sort the vector serially
    __gnu_parallel::sort(str.begin(), str.end());
	
	//END THE CLOCK
	tStop = clock();
	
	compute_time_s = (static_cast<double>(tStop - tStart)/CLOCKS_PER_SEC);

	//for_each(str1.cbegin(), str1.cend(), print);

	cout << "******************************************************************************\n";
	cout << "Computation time for sequential = "  << compute_time_s << " seconds." << endl << endl;
	
	return 0;
}

/*
	Function:	readFromFile()
	Purpose:	Read each word from the words.txt text file and place
				in the str vector, which was passed by reference by calling
				the Vector push_back function.  push_back adds one new element
				at the end of the vector and places the argument sent to 
				the push_back function in that new element.
*/
void readFromFile(vector<string>& str)
{
	ifstream file;
	string line;
	file.open("words.txt");
	while(getline(file,line))
		str.push_back(line);
}