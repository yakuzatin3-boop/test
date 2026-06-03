#include <iostream>
#include<mysql.h>
using namespace std;
int main() {
	
	MYSQL * conn;
	MYSQL_RES * res;
	MYSQL_ROW row;
	
	conn = mysql_init(NULL);
	
	conn = mysql_real_connect(
	       conn,
	       "127.0.0.1",
	       "root",
	       "vuthin007",
	       "emp",
	       3306,
	       NULL,
	       0
	);
	
	if(conn == NULL){
		cout<<"Connect to data base failed!!!\n";
		return 1;
	}
	cout<<"Connect to database Sucessfully\n";
	
	
	mysql_free_result(res);
	mysql_close(conn);
	return 0;
}