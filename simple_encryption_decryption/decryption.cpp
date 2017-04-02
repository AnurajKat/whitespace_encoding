#include <iostream>
#include <fstream>
int main()
{
	std::ifstream infile("temp.txt");
	std::ofstream ofile("text.txt");
	std::string str;
	std::string newline="";
	std::string deckey="";
	std::cout<<"enter decryption key :";
	std::cin>>deckey;
	int val=0;
	for(int i=0;i<deckey.length();i++)
	{
		if(i%2==0)
			val=val+int(deckey.at(i));
		else
			val=val-int(deckey.at(i));
	}
	std::cout<<"key :"<<val<<std::endl;
	while(std::getline(infile,str))
	{
		if(!str.empty())
		{
			int len=str.size()/val;
			int c=0,j=0;
			for(j=0;j<len;j++)
			{
				if(str.at(j) == ' ')
					c++;
			}
			char ch=c;
			std::cout<<ch;
			newline=newline+ch;
		}
		else
		{ newline= newline +"\n";}
	}
		ofile<<newline;
		std::cout<<"decryption complete."<<std::endl;
}
