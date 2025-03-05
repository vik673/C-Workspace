/*
Finding Elements:
m.find(key): Returns an iterator to the key-value pair if the key exists; otherwise, returns m.end().
m.count(key): Returns 1 if the key exists, otherwise 0.
if (m.find(5) != m.end())
    cout << "Found";
else
    cout << "Not Found";
Traversal Methods:
begin(), end(): Iterators for normal traversal.
rbegin(), rend(): Iterators for reverse traversal.
cbegin(), cend(): Constant iterators
*/

#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,int> m;
	m.insert({10,200});
	m[5]=100;
	m.insert({3,300});

	for(auto it=m.begin();it!=m.end();it++)
	    cout<<(*it).first<<" "<<(*it).second<<endl;
	    
	m.clear();
	cout<<"Size: "<<m.size()<<endl;
	cout<<"Empty: "<<(m.empty()?"Yes":"No")<<endl;
	    
	return 0;
}