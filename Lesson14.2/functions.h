#pragma once


Worker* createWorker() {
	Worker* worker = new Worker;

	worker->id = workerId++;
	char name[30];
	cin.getline(name, 30);
	int sizename = strlen(name);
	char* nameptr = new char[sizename + 1];
	strcpy_s(nameptr, sizename + 1, name);
	worker->name = nameptr;
	worker->surname = new char[] {"Novruzov"};
	worker->age = 29;
	worker->address = new char[] { "Khirdalan"};
	worker->phone = new char[] { "070-750-55-65"};
	worker->salary = 99999.59f;

	return worker;
}



void printWorker(Worker* worker) {
	cout << "\n\tWorker Info\n";

	cout << "Id: " << worker->id << endl;
	cout << "Name: " << worker->name << endl;
	cout << "Surname: " << worker->surname << endl;
	cout << "Age: " << worker->age << endl;
	cout << "Address: " << worker->address << endl;
	cout << "Phone: " << worker->phone << endl;
	cout << "Salary: " << worker->salary << endl;
}


Company* createCompany() {
	Company* company = new Company;

	company->id = companyId++;
	company->name = new char[] {"Step"};
	company->address = new char[] { "Koroglu Rehimov 70"};

	return company;
}


void addWorkerInCompany(Company* company, Worker* worker)
{
	Worker* workers = new Worker[company->size + 1];

	for (size_t i = 0; i < company->size; i++)
		workers[i] = company->workers[i];

	workers[company->size++] = *worker;

	delete[] company->workers;
	company->workers = workers;
}


void printCompany(Company* company) {
	cout << "\n\Company Info\n";

	cout << "Id: " << company->id << endl;
	cout << "Name: " << company->name << endl;
	cout << "Address: " << company->address << endl;

	cout << "\n\Company Workers\n\n";
	for (size_t i = 0; i < company->size; i++)
		printWorker(&company->workers[i]);
}