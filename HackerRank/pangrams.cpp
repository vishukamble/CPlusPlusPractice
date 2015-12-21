/*
Author: Vishwanath Kamble
Practice Session C++ Programs
Website: www.geekstarts.info , www.vishukamble.info
Date: 12/20/2015
Program:
Desc:
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main()
{
    string line;
    getline(cin, line);
    int alphabeti = 0, flag =0; //alphabet counter and flag to check for pangram
    int alphabets[26]; //array of alphabets
    for(int i = 0; i < 26; i++) //for loop to make all the alphabets values in array to 0;
        {
		alphabets[i] = 0;
	}

	for(int i = 0; i < line.length(); i++)
	{
		int insertNum = (tolower(line[i]) - 'a');
	//	cout<<"insertNum: "<<insertNum<<endl;
		if(insertNum < 0 || insertNum > 25)
            {
			continue;
		}
		if(alphabets[insertNum] == 0)
            {
			alphabeti++;
	//		cout<<"\n alphabeti pointer! "<<alphabeti<<endl;
		}
		if(alphabeti >= 26)
            {
			flag = 1;
			break;
		}
		else
		{
			alphabets[insertNum]++;
		}
	}

	//cout<<"\nFlag: "<<flag<<endl;
	if(flag)
        {
		cout << "pangram" << endl;
	}
	else
	{
		cout << "not pangram" << endl;
	}

    return 0;
}
