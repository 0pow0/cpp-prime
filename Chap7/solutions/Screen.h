#pragma once

#include <string>

class Screen {
friend class Window_mgr;
// friend void Window_mgr::clear(Window_mgr::ScreenIndex);
public:
  using pos = std::string::size_type;
  Screen() = default;
  Screen(pos ht, pos wd) : height(ht), width(wd), contents(ht * wd, ' ') {}
  Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd, c) {}
  char get() const {return contents[cursor];}
  char get(pos ht, pos wd) const;
  Screen &set(char c);
  Screen &set(pos r, pos col, char c);
  Screen &move(pos r, pos c);
  void some_member() const;
  Screen &display(std::ostream &os) {
    do_display(os);
    return *this;
  }
  const Screen &display(std::ostream &os) const {
    do_display(os);
    return *this;
  }
private:
  void do_display(std::ostream &os) const { os << contents; }
  pos cursor = 0;
  pos height = 0, width = 0;
  std::string contents;
  mutable size_t access_ctr;
};

inline
Screen &Screen::set(char c) {
  contents[cursor] = c;
  return *this;
}

inline
Screen &Screen::set(pos r, pos col, char c) {
  contents[r * width + col] = c;
  return *this;
}

inline
void Screen::some_member() const {
  ++access_ctr;
}

inline
Screen &Screen::move(pos r, pos c) {
  pos row = r * width;
  cursor = row + c;
  return *this;
}

inline
char Screen::get(pos r, pos c) const {
  pos row = r * width;
  return contents[row + c];
}