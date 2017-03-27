#include <iostream>
#include <fstream>
int main()
{
	std::ifstream infile("temp.txt");
	std::ofstream ofile("text.txt");
	std::string str;
	std::string newline="";
	while(std::getline(infile,str))
	{
		int len=str.size();
		int c=0,j=0;
		for(j=0;j<len;j++)
		{
			if(str.at(j) == ' ')
				c++;
		}
		char ch=c;
		std::cout<<ch;
		newline=newline+ch;
		;
		
		}
		ofile<<newline;
}
