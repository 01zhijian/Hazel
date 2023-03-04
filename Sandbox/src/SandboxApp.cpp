#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		// construction function
	}

	~Sandbox()
	{
		// deconstruction function
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}