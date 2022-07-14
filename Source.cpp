#include<iostream>
#include<string>
#include<time.h>

using namespace std;


string GetDataFromPC()
{
	return "GetDataFromPC";
}

string GetDataFromServer()
{
	return "GetDataFromServer";
}

string GetDataFromVoice()
{
	return "GetDataFromVoice";
}

void ShowInfo(string (*anyfunck)())
{
	cout << "Your data: " << anyfunck() << endl;
}

void main()
{
	ShowInfo(GetDataFromVoice);
}