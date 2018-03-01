#include <iostream>
#include <vector>
#include <algorithm>


struct Rectangle
{
	int length;
	int breadth;
	int area;
};
bool sortByArea(const Rectangle &a, const Rectangle &b)
{
	return a.area >= b.area;
}
int main()
{
	Rectangle obj;
	std::vector<Rectangle> list;
	std::cout<<"Enter the length, followed by the breadth."<<std::endl;
	while(std::cin>>obj.length && std::cin>>obj.breadth)
	{
		obj.area = obj.length * obj.breadth;
		list.push_back(obj);
	}	
	std::cout<<"Vector before sorting"<<std::endl;
	for(auto start = list.begin(); start != list.end(); start++)
	{
		std::cout<<"Length->"<<(*start).length <<"Breadth->"<<(*start).breadth <<"Area->"<<(*start).area<<std::endl;
	}
	std::cout<<"Vector after sorting"<<std::endl;
	std::sort(list.begin(), list.end(), sortByArea);
	for(auto start = list.begin(); start != list.end(); start++)
	{
		std::cout<<"Length-(oh yeah)"<<(*start).length <<"Breadth-(oh yeah)"<<(*start).breadth <<"Area-(oh yeah)"<<(*start).area<<std::endl;
	}
}	
	

	