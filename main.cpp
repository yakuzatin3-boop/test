#include <iostream>
#include <mysql.h>

using namespace std;

int main() {

    MYSQL *conn;
    MYSQL_RES *res;
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

    if (conn == NULL) {
        cout << "Connection failed!" << endl;
        return 1;
    }
    cout << "Connected successfully!" << endl;

    const char* query = "SELECT * FROM user";

    if (mysql_query(conn, query)) {
        cout << "Query error: " << mysql_error(conn) << endl;
        mysql_close(conn);
        return 1;
    }

    res = mysql_store_result(conn);

    if (res == NULL) {
        cout << "No result or wrong table name!" << endl;
        mysql_close(conn);
        return 1;
    }
    cout<<"\n";
    cout<<"<-------------Select * from User------------->\n";
    cout<<"\n";
    while ((row = mysql_fetch_row(res))) {
        cout << "ID: " << row[0]
             << " | Name: " << row[1]
             << " | Gender: " << row[2]
             << " | Salary: " << row[3]
             << endl;
    }

    mysql_free_result(res);
    mysql_close(conn);

    return 0;
}