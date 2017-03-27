#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>
char gen_randcharacter()
{
	char ch;
	int randominteger = rand()% 80 + 32;
	if(randominteger == 32 || randominteger == 9)
	{
		ch=gen_randcharacter();
	}
	else {
	ch= randominteger;
	}
	return ch;
}
std::string gen_rand_length_str()
{
	int randlength = rand()% 100 + 1;
	std::string rand_str="";
	for(int i=0;i<randlength;i++)
	{
		rand_str=rand_str+gen_randcharacter();
	}
	return rand_str;
}
int main()
{
    std::ifstream infile("text.txt");
    std::ofstream ofile("temp.txt");
    std::string str;
    while (std::getline(infile,str))
    {
      //  std::cout<<"sfosofdf";
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            char ch=str.at(i);
            int ascval= int(ch);
            std::string newline="";
            std::cout<<ascval<<std::endl;
            for(int j=0;j<ascval;j++)
            {
		    newline=newline +" "+gen_randcharacter() + gen_rand_length_str();
            }
	    char indicator='%';
            ofile<<newline<<std::endl;

        }
        ofile<<std::endl;

    }
    //int b;
    //std::cin>>b;
}
