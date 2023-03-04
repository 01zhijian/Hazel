#include "Hazel.h"

class Sandbox : public Hazel::Application
{
public:
	Sandbox()
	{
		// ¹¹Ôìº¯Êý
	}

	~Sandbox()
	{
		
	}
};

Hazel::Application* Hazel::CreateApplication()
{
	return new Sandbox();
}