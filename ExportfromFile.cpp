#include <iostream>
#include <cstdlib>
using namespace std;
int main(int argc, char *argv[])
{
	if(argc==3)
	{
		string variable=argv[1];
		string file=argv[2];
		cout<<"Variable: "<<variable<<endl;
		cout<<"File: "<<file<<endl;
		string command="export "+variable+"=\"$(more "+file+")\"";
		cout<<"Command: "<<command<<endl;
		system("ls");
	}
	else
	{
		cout<<"TERMED"<<endl;
	}
}