#include <iostream>
#include <fstream>
#include <string>
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
                newline=newline +" ";
            }
	    char indicator='%';
            ofile<<newline<<std::endl;

        }
        //ofile<<"c";

    }
    //int b;
    //std::cin>>b;
}
