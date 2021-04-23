#include<iostream>
#include<string>
#include<fstream>
#include<stdlib.h> 
using namespace std;
int main()
{
	ofstream out("newcpp.cpp");
	out<<"#include<iostream>"<<endl;
	out<<"#include<string>"<<endl;
	out<<"using namespace std;"<<endl;
	out<<"int main()"<<endl;
	out<<"{"<<endl;
	out<<"	return 0;"<<endl;
	out<<"}"<<endl;
	system("RENAME newcpp.cpp NewCpp.cpp");
}
