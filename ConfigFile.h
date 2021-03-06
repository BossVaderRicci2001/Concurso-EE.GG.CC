
#ifndef CONFIGFILE_H
#define CONFIGFILE_H

#include <map>
#include <iostream>
#include <fstream>
#include <stdio.h>
#include <stdlib.h>
#include <sstream>

class ConfigFile{

  public:
      ConfigFile(const std::string& filename);
      ~ConfigFile();

      template<typename T> T get(const std::string& key) const;

      void process(const std::string& lineread);

      std::string toString() const;

      void printOut(const std::string& path) const;

  private:
      std::string trim(const std::string& str);

      std::map<std::string, std::string> configMap;
};

// include *.hpp dans le header file
#include "ConfigFile.hpp"

#endif
