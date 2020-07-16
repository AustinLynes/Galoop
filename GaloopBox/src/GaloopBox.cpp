#include <Galoop.h>


class GBox : public Galoop::Application
{
public:
	GBox() {

	}
	~GBox() {

	}
};

Galoop::Application* Galoop::CreateApplication() {
	return new GBox();
}
