#pragma once

#include <vector>
#include <string>
#include "Screen.h"

class Window_mgr {
public:
  using ScreenIndex = std::vector<Screen>::size_type;
  void clear(ScreenIndex idx);
  ScreenIndex addScreen(const Screen &s);
private:
  std::vector<Screen> screens{Screen{24, 80, ' '}};
  // std::vector<Screen> screens;
};

Window_mgr::ScreenIndex
Window_mgr::addScreen(const Screen &s) {
  screens.push_back(s);
  return screens.size() - 1;
}

inline
void Window_mgr::clear(ScreenIndex idx) {
  Screen &s = screens[idx];
  s.contents = std::string(s.height * s.width, ' ');
}