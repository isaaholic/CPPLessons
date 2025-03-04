#include <iostream>

using namespace std;

size_t workerId = 1;
size_t companyId = 1;

#include "models.h"
#include "functions.h"


int main()
{
	Worker* w1 = createWorker();
	Worker* w2 = createWorker();

	Company* company = createCompany();

	addWorkerInCompany(company, w1);
	addWorkerInCompany(company, w2);

	printCompany(company);

	// salaryGreaterThan(float 1000);
	// ageLessThan(ushort 25);
	// nomresi nar olanlari ekrana chixarmaq();
}