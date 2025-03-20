#include <iostream>
#include <sqlite3.h>

using namespace std;

// Function to create the table if it doesn't exist
void create_table(sqlite3 *db) {
    const char *create_table_sql = R"(
        CREATE TABLE IF NOT EXISTS wormholes (
            id INTEGER PRIMARY KEY AUTOINCREMENT,
            room_name TEXT NOT NULL,
            x FLOAT NOT NULL,
            y FLOAT NOT NULL
        );
    )";

    char *err_msg = nullptr;
    int rc = sqlite3_exec(db, create_table_sql, nullptr, nullptr, &err_msg);
    if (rc != SQLITE_OK) {
        cerr << "SQL error: " << err_msg << endl;
        sqlite3_free(err_msg);
    } else {
        cout << "Table created (if not exists)." << endl;
    }
}

// Function to insert a new row into the wormholes table
void insert_wormhole(sqlite3 *db, const string &room_name, float x, float y) {
    const char *insert_sql = "INSERT INTO wormholes (room_name, x, y) VALUES (?, ?, ?);";
    sqlite3_stmt *stmt;

    int rc = sqlite3_prepare_v2(db, insert_sql, -1, &stmt, nullptr);
    if (rc != SQLITE_OK) {
        cerr << "Failed to prepare statement: " << sqlite3_errmsg(db) << endl;
        return;
    }

    sqlite3_bind_text(stmt, 1, room_name.c_str(), -1, SQLITE_STATIC);
    sqlite3_bind_double(stmt, 2, x);
    sqlite3_bind_double(stmt, 3, y);

    rc = sqlite3_step(stmt);
    if (rc != SQLITE_DONE) {
        cerr << "Execution failed: " << sqlite3_errmsg(db) << endl;
    } else {
        cout << "Row inserted successfully." << endl;
    }

    sqlite3_finalize(stmt);
}

// Function to insert multiple rows based on user input
void insert_multiple_wormholes(sqlite3 *db) {
    int num_rows;
    cout << "Enter the number of rows you want to insert: ";
    cin >> num_rows;

    // Ensure table exists before inserting
    create_table(db);

    for (int i = 0; i < num_rows; i++) {
        string room_name;
        float x, y;

        cout << "Enter data for row " << i + 1 << ":\n";
        cout << "Enter the room name: ";
        cin.ignore(); // To clear the newline left by previous input
        getline(cin, room_name);

        cout << "Enter the x-coordinate: ";
        cin >> x;

        cout << "Enter the y-coordinate: ";
        cin >> y;

        // Insert the row into the database
        insert_wormhole(db, room_name, x, y);
    }
}

int main() {
    sqlite3 *db;
    int rc = sqlite3_open("wormhole_locations.db", &db);

    if (rc) {
        cerr << "Can't open database: " << sqlite3_errmsg(db) << endl;
        return 1;
    }

    insert_multiple_wormholes(db);

    sqlite3_close(db);
    return 0;
}
