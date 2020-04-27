#include <string>
#include <iostream>
#include "buttonrpc.hpp"
#include <unistd.h>

int main() {
	buttonrpc client;
	client.as_client("127.0.0.1", 5555);
	client.set_timeout(5000);

	std::cout << "rpc start" << std::endl;
    int aa = 100;
	while (true) {
		client.call<void>("cat");
		std::cout << "call cat end" << std::endl;

		client.call<void>("dog");
		std::cout << "call dog end" << std::endl;

		int pig = client.call<int>("pig", aa).val();
		std::cout << "call pig end : " << pig << std::endl;
        aa--;
        usleep(1000000);
	}
	std::cout << "rpc end" << std::endl;
	return 0;
}
