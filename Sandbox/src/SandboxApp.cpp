#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		// 构造函数
	}

	~Sandbox()
	{
		// 析构函数
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}