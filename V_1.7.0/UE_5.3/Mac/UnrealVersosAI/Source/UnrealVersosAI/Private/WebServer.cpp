//#define WIN32_LEAN_AND_MEAN
//#include "httplib.h"
#include "WebServer.h"
#include "HAL/PlatformProcess.h"

bool UWebServer::Init() {
	return true;
}

uint32 UWebServer::Run() {
//	httplib::Server svr;
	// svr.Get("/", [](const httplib::Request&, httplib::Response& res) {
	// 	res.set_content("Hello, World!", "text/html");
	// });
	// svr.listen("0.0.0.0", 8080); // Listen on port 8080
	while(!bShutdown)
	{
		FPlatformProcess::Sleep(0.1f);
	}
	return 0;
}

void UWebServer::Exit() {
}

void UWebServer::Stop() {
	bShutdown = true;
}