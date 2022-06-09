#include <memory>
#include <string>
#include <vector>

class StrBlobPtr;
class StrBlob {
  friend class StrBlobPtr;
public:
  StrBlobPtr begin();
  StrBlobPtr end();
public:
  typedef std::vector<std::string>::size_type size_type;
  StrBlob();
  StrBlob(std::initializer_list<std::string> il);
  size_type size() const { return data->size(); }
  bool empty() const { return data->empty(); }
  // 添加, 删除元素
  void push_back(const std::string &t) { data->push_back(t); }
  void pop_back();
  // 元素访问
  std::string &front();
  std::string &back();
  const std::string &front() const;
  const std::string &back() const;
private:
  std::shared_ptr<std::vector<std::string>> data;
  void check(size_type i, const std::string &msg) const;
};

class StrBlobPtr {
public:
  StrBlobPtr() : curr(0) { };
  StrBlobPtr(const StrBlob &a, size_t sz = 0) : wptr(a.data), curr(sz) { }
  std::string &deref() const;
  StrBlobPtr &incr();
private:
  std::shared_ptr<std::vector<std::string>>
    check(std::size_t, const std::string&) const;
private:
  std::weak_ptr<std::vector<std::string>> wptr;
  std::size_t curr;
};