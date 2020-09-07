#include <iostream>
#include <memory>

using namespace std;
class ResourceType
{
private:
	/* data */
public:
	ResourceType
(/* args */);
	~ResourceType
();
};

ResourceType::ResourceType(/* args */)
{
	cout << "R1 called" << endl;
}

ResourceType::~ResourceType()
{
}

int main(int argc ,char *argv[])
{
	int val_int;
	unique_ptr<ResourceType> r1 = {make_unique<ResourceType>()};
	
	unique_ptr<ResourceType> r2;

	auto square = [](auto value){
		return  value * value;
	};

	cout << square(19) << endl;
	cout << square(9.9) << endl;

	cout << sizeof(int) << endl;

#if defined(__linux)
	cout << "This is Linux system\n" <<endl;
#endif

}
