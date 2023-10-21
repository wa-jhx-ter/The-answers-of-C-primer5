#include <iostream>
#include <string>
using namespace std;

int main() {
  // 定义一个string变量，用来存储用户输入的姓名
  string name;
  // 输出一个提示语，让用户输入姓名
  cout << "Please enter your name in the form of 'Firstname + whitespace( ) + Lastname': " << endl;
  // 使用getline()函数，从标准输入中读取一行字符串，即用户输入的姓名
  getline(cin, name);
  // 定义一个变量，用来存储空格的位置
  int space = 0;
  // 遍历字符串中的每个字符
  for (int i = 0; i < name.length(); i++) {
    // 判断字符是否是空格
    if (name[i] == ' ') {
      // 如果是，就把空格的位置赋值给变量
      space = i;
      // 跳出循环
      break;
    }
  }
  // 如果空格的位置不为0，说明姓名是合法的
  if (space != 0) {
    // 定义两个string变量，用来存储姓氏和名字
    string first_name = "";
    string last_name = "";
    // 使用一个循环，从字符串的开始位置到空格的前一个位置，依次将每个字符添加到姓氏中
    for (int i = 0; i < space; i++) {
      first_name += name[i];
    }
    // 使用另一个循环，从空格的下一个位置到字符串的末尾位置，依次将每个字符添加到名字中
    for (int i = space + 1; i < name.length(); i++) {
      last_name += name[i];
    }
    // 定义一个string变量，用来存储首字母缩写，并将姓氏和名字的第一个字符分别添加到首字母缩写中
    string initials = "";
    initials += first_name[0];
    initials += last_name[0];
    // 输出姓氏，名字和首字母缩写
    cout << "First Name: " << first_name << endl;
    cout << "Last Name: " << last_name << endl;
    cout << "Initials: " << initials << endl;
  }
  // 否则，说明姓名是不合法的
  else {
    // 输出一个错误信息，提示用户重新输入
    cout << "Invalid name format, please try again." << endl;
  }
  return 0;
}
