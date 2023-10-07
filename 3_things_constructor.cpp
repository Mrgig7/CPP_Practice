#include <iostream>
#include <iomanip>
using namespace std;

class Numbers {
public:
  Numbers(int a, int b, int c) : m_a(a), m_b(b), m_c(c) {
  }
  void print() {
    cout << m_a << " " << m_b << " " << m_c << endl;
  }
  void printSum() {
    int sum = m_a + m_b + m_c;
    cout << sum << endl;
  }
  void printGreatest() {
    int greatest = m_a;
    if (m_b > greatest) {
      greatest = m_b;
    }
    if (m_c > greatest) {
      greatest = m_c;
    }
    cout << greatest;
  }
private:
  int m_a;
  int m_b;
  int m_c;
};

int main() {
    int a, b, c;
    cin >> a >> b >> c;
    Numbers n1(a, b, c);
    n1.print();
    n1.printSum();
    n1.printGreatest();

    return 0;
}
