#include <iostream>
#include <string>
using namespace std;
string make_plural(size_t ctr,const string &word,const string &normalending="s",const string &specialending="es")
{ 
	return (ctr>1)? (word[word.size()-1]=='s' ? word+specialending : word+normalending): word;
}
inline bool isShorter(const string &s1,const string &s2){return s1.size()<s2.size();}
int main()
{ 
	string word1="success";
	string word2="failure";
	cout<<make_plural(word1.size(),word1)<<endl;
	cout<<make_plural(word2.size(),word2)<<endl;
	cout<<isShorter(make_plural(word1.size(),word1),make_plural(word2.size(),word2))<<endl;
	return 0;
}