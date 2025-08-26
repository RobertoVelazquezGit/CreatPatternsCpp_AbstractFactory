#include "MySqlCommand.h"
#include <iostream>
#include "Connection.h"
#include "MySqlRecordSet.h"

void MySqlCommand::ExecuteCommand() {
	std::cout
		<< "[SqlCommand] Executing command on"
		<< m_pConnection->GetConnectionString()
		<< std::endl;
}

MySqlRecordSet* MySqlCommand::ExecuteQuery() {
	std::cout << "[MySqlCommand] Executing query\n";
	return new MySqlRecordSet();
}
