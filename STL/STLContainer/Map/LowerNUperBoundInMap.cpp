/*
Lower Bound & Upper Bound 
m.lower_bound(key): Returns an iterator to the first key greater than or equal to the given key.
m.upper_bound(key): Returns an iterator to the first key strictly greater than the given key.

Syntax: 
map_name.lower_bound(key)

The function returns an iterator pointing to the key in the map container which is equivalent to k passed in the 
parameter. In case k is not present in the map container, the function returns an iterator pointing to the immediate
next element which is just greater than k. If the key passed in the parameter exceeds the maximum key in the
container, then the iterator returned points to the number of elements in the map as key and element=0.
*/
#include <iostream>
#include <map>
using namespace std;


int main() {
	
	map<int,string> m;
	m.insert({5,"gfg"});
	m.insert({2,"ide"});
	m.insert({1,"practice"});

	if(m.find(5)==m.end())
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	if(m.count(2)==0)
	    cout<<"Not found";
	else
	    cout<<"Found";
	    cout<<endl;
	auto it=m.lower_bound(7);
	if(it!=m.end())
	    cout<<(*it).first<<" ";
	else
	    cout<<"No Equal or Greater Value";
	    
	return 0;
}