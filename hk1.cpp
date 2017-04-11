#include <cmath>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
	string sentence;
	bool flag=false;
    string vowels[]={"aa","ae","ai","ao","au","ay","ea","ee","ei","eo","eu","ey","ia","ie","ii","io","iu","iy","oa","oe","oi","oo","ou","oy","ua","ue","ui","uo","uu","uy"
        ,"ya","ye","yi","yo","yu","yy"}  ;
    cin>>sentence;
    
    for(int i = 0 ; i<36 ;i++){
        if(sentence.find(vowels[i])!=string::npos){
        	flag=true;
        	break;
		}
    }
    if(flag)
    cout<<"No"<<endl;
    else{
    	for(int i = 0 ; i<sentence.size() ;i++){
    		if(i+1<sentence.size() && sentence[i]==sentence[i+1])
    		flag=true;
		}
		if(flag)
		cout<<"No"<<endl;
		else
		cout<<"Yes"<<endl;
	}
    
    return 0;
}

