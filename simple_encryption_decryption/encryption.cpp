#include <iostream>
#include <fstream>
#include <string>
int main()
{
    std::ifstream infile("text.txt");
    std::ofstream ofile("temp.txt");
    std::string str;
    std::string enckey="";
    std::cout<<"enter encryption key :";
    std::cin>>enckey;
    int mul_val=0;
    for(int i=0;i<enckey.length();i++)
    {
	    if(i%2==0)
	    	mul_val = mul_val + int(enckey.at(i));
	    else
		    mul_val = mul_val - int(enckey.at(i));
    }
    std::cout<<"key :"<<val<<std::endl;
    while (std::getline(infile,str))
    {
        int len=str.length();
        for(int i=0;i<len;i++)
        {
            char ch=str.at(i);
            int asc_val= int(ch)*mul_val;
	    std::string newline="";
            for(int j=0;j<asc_val;j++)
            {
                newline=newline +" ";
            }
            ofile<<newline<<std::endl;
        }
	ofile<<std::endl;
    }
    std::cout<<"encryption complete."<<std::endl;
}
