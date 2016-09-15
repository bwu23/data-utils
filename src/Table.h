#ifndef TABLE_H
#define TABLE_H

#include "DataObject.h"

class Table {
public:
  Table(const vector<DataObject>* rows);
  virtual ~Table();
  void pushColumn(string column);
  void outputAsCSV(string filename);
  void printToConsole();
private:
  vector<string>*      m_columns;
  vector<DataObject>*  m_rows;
};

inline 
Table(const vector<DataObject>* rows): m_rows(rows) {
  m_columns = new vector<string>();
}

#endif