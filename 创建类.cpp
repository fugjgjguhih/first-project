#include<iostream>
#include<string>
#include<fstream> 
#include<stdlib.h> 
using namespace std;
int main()
{
	ofstream fout("��ҵ.cpp");
	fout<<"#include<iostream>"<<endl; 
	fout<<"using namespace std;"<<endl;
	cout<<"������������Q�˳�"<<endl;
	string n;
	while(1)
	{
		cin>>n; 
		if(n=="Q") break;
		if(n=="q") break;
		if(n==" ") break;
		fout<<"class "<<n<<endl<<"{"<<endl;
		fout<<"    private:"<<endl<<endl<<"    public:" <<endl<<"    ";
		fout<<"    "<<n<<"()"<<endl;
		fout<<"};"<<endl;
	} 
	fout<<"int main()"<<endl;
	fout<<"{"<<endl<<endl;
	fout<<"    "<<"return 0;"<<endl;
	fout<<"}"<<endl;
	fout.close();
}
