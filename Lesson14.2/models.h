#pragma once

struct Worker {
	size_t id = 0;
	char* name = nullptr;
	char* surname = nullptr;
	unsigned short age = 0;
	char* address = nullptr;
	char* phone = nullptr;
	float salary = 0;
};


struct Company {
	size_t id = 0;
	char* name = nullptr;
	char* address = nullptr;
	Worker* workers = nullptr;
	size_t size = 0;
};