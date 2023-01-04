#include <iostream>


struct worker 
{
	char name[1024];
	int salary;
	worker* chief;

};

struct team
{
	char teamName[1024];
	worker workers[100];
	std::size_t amountOfWorkers = sizeof(workers) / sizeof(workers[0]);

};

struct company
{
	char companyName[1024];
	team teams[50];
	std::size_t amountOfTeams = sizeof(teams) / sizeof(teams[0]);
};

bool isWorkerInCompany()
{

}



int main()
{


}