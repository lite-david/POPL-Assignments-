#include <iostream>
#include <vector>
#include <string>
#include <math.h>
using namespace std;

class LexGen{
	int len,lmark,rmark;
	vector<string> v;
	char a[4];
	
	public: 
	typedef vector<string>::iterator iterator;
	LexGen(){
		len = 1;
		a[0] = 'a',a[1] = 'b',a[2] = 'c',a[3] = 'd';
	}

	LexGen(int n){
		len  = n;
		a[0] = 'a',a[1] = 'b',a[2] = 'c',a[3] = 'd';
		genList();
	}

	int getLength(){
		return len;
	}

	void setLength(int n){
		len = n;
	}

	void genList(){
		int tracker[len],i,j,flag=0,count=0;
		rmark = len-1;
		string base;
		for(i = 0;i<len;i++)
			tracker[i] = 0;
		while(v.size() != pow(4,len)){
			base = string();
			for(i = 0;i<len;i++)
				base += a[tracker[i]];
			v.push_back(base);
			if(tracker[rmark] == 3){
				while(tracker[rmark] == 3){
					if(rmark)
						rmark--;
					else
						break;
				}
				tracker[rmark]+=1;
				for(j = rmark+1;j<len;j++){
					tracker[j] = 0;
				}
				rmark = j-1;
			}
			else
				tracker[rmark]++;
		}
	}

	vector<string> getList(){
		return v;
	}

	iterator begin(){
		return v.begin();
	}

	iterator end(){
		return v.end();
	}
};

int main(){
	LexGen l(4);
	LexGen::iterator it;
	for(LexGen::iterator it = l.begin(); it!= l.end();++it)
		cout << *it << endl;
	return 0;
}