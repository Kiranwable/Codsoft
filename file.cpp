#include<iostream>
#include<fstream>
#include<string>
#include<sstream>
using namespace std;

int main()
{
	ifstream in("test1.txt");
	
	if(in.is_open())
	{
		string line;
		int word_count=0;
	
while(std::getline(in,line))	
{ stringstream ss(line);
  string word;

  while(ss >>word)
  {
  	word_count++;
  }
}
in.close();

 cout<<" the no of words in file ===     "<<word_count<<endl;
  }
 else
 {
 	cout<<" error in opening file "<<endl;
   }  
}

