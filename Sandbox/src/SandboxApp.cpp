#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		// ���캯��
	}

	~Sandbox()
	{
		
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}