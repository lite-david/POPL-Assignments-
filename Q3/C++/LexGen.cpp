#include <iostream>
#include <vector>
#include <string>
#include <math.h>

using namespace std;

class LexGen{

	//private variables
	int len;
	char a[4];
	string base;

	//private class
	class LexGenIterator{

		public:
		string ans;
		LexGenIterator(){
			ans = "";
		}

		LexGenIterator operator++ (){
			genNext();
			
		}

		string operator* (){
			return ans;
		}

		bool operator != (const LexGenIterator& l1){
			if(ans.compare(l1.getAns()))
				return true;
			else
				return false;
		}

		void setAns(string a){
			ans = a;
		}	

		string getAns() const{
			return ans;
		}

		void genNext(){
		int i = ans.length()-1;
		while(i >=0 && ans[i] == 'd'){
			ans[i] = 'a';
			i--;
		}
		if(i >= 0)
			ans[i]++;
	}

	};

	public:
	typedef LexGenIterator iterator;
	LexGen(int n){
		len = n;
		a[0] = 'a',a[1] = 'b',a[2] = 'c',a[3] = 'd';
	}
	
	iterator begin(){
		iterator it;
		base = "";
		for(int i = 0;i<len;i++)
			base += a[0];
		it.setAns(base);
		return it;
	}

	iterator end(){
		iterator it;
		base = "";
		for(int i = 0;i<len;i++)
			base += a[3];
		it.setAns(base	);
		return it;
	}
};


int main(){
	LexGen l(4);
	for (LexGen::iterator it = l.begin(); it != l.end(); ++it)
		cout << *it << endl;
	return 0;
}