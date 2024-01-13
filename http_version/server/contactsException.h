#include <string>

// 异常类
class ContactsException
{
public:
	ContactsException(std::string message = "there has a problem")
		:message_(message)
	{}

	std::string what() const
	{
		return message_;
	}

private:
	std::string message_;
};
