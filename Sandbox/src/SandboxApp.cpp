
#include <Galileo.h>
class Sandbox : public GALILEO::Application
{
public:
	Sandbox()
	{

	}

	~Sandbox()
	{

	}

};

GALILEO::Application* GALILEO::CreateApplication() {
	return new Sandbox();
}