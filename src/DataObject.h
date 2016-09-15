#ifndef DATA_OBJECT_H
#define DATA_OBJECT_H

class DataObject {
public:
  virtual vector<float> rowComputer() = 0;
};

#endif