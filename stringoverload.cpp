#include <iostream>
#include <string>

class String
{
	public:
			std::string s;
			
			String() : s("") {}
			String(const std::string &str1) : s(str1) {}
			String operator*(String st) const
			{
				return (s + st.s);
			}
			void display() const
			{
				std::cout << " The string is ~> " << s << std::endl;
			}	
};
int main()
{
	String s1("KIIT");
	String s2(" UNIVERSITY");
	String s3 = s1 * s2;
	s3.display();
}	
	
	