#pragma once
#include <iostream>
#include <vector>
using namespace std;
class clsString
{
private:
	string _Value;
public:
	clsString()
	{
		_Value = "";
	}
	
	clsString(string Value)
	{
		_Value = Value;
	}
	
	string GetValue()
	{
		return _Value;
	}
	
	void SetValue(string Value)
	{
		_Value = Value;
	}
	
	__declspec(property(get = GetValue, put = SetValue)) string	Value;
	
	static short CountWords(string S1)
	{
		string delim = " "; // delimiter
		short Counter = 0;
		short pos = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the delimiters
		while ((pos = S1.find(delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				Counter++;
			}
			//erase() until positon and move to next word.
			S1.erase(0, pos + delim.length());
		}
		if (S1 != "")
		{
			Counter++; // it counts the last word of the string.
		}
		return Counter;
	}

	static vector<string> Split(string S1, string Delim)
	{
		vector<string> vString;
		short pos = 0;
		string sWord; // define a string variable
		// use find() function to get the position of the delimiters
		while ((pos = S1.find(Delim)) != std::string::npos)
		{
			sWord = S1.substr(0, pos); // store the word
			if (sWord != "")
			{
				vString.push_back(sWord);
			}
			S1.erase(0, pos + Delim.length());
		}
		if (S1 != "")
		{
			vString.push_back(S1); // it adds last word of the string.
		}
		return vString;
	}

	short CountWords()
	{
		return CountWords(_Value);
	};
};

