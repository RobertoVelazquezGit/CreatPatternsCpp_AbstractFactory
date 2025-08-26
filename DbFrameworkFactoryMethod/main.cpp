
#include "SqlConnection.h"
#include "SqlCommand.h"
#include "SqlRecordSet.h"
#include <iostream>

#include "MySqlCommand.h"
#include "MySqlConnection.h"
#include "DbFactory.h"


void FactoryMethod() {
	// The client has a chance to make mistakes, see DbFramework main.c to solve it
	std::string_view db{ "sql" };  // or "mysql"
	Connection* pCon{ DbFactory::CreateConnection(db) };

	pCon->SetConnectionString("uid=umar;db=movies;table=actors");
	pCon->Open();

	Command* pCmd{ DbFactory::CreateCommand(db) };


	pCmd->SetConnection(pCon);
	pCmd->SetCommand("select * from actors");

	RecordSet* rec = pCmd->ExecuteQuery();
	while (rec->HasNext()) {
		std::cout << rec->Get() << std::endl;
	}

	delete pCon;
	delete pCmd;
	delete rec;
}

int main() {
	FactoryMethod();
}

