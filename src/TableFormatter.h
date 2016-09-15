#ifndef TABLE_FORMATTER_H
#define TABLE_FORMATTER_H

#include <string>
#include <vector>
using namespace std;

template <class T>
class TableFormatter {
  public:
    TableFormatter(vector<T> entries);
    void pushRow(string name, string (*func)(T));
  private:
    void generateTable();

    vector<T>               m_entries;
    vector<string>          m_columns;
    vector<string (*) (T)>  m_computers;
    vector<vector<string>>  m_values;
}; 

#endif