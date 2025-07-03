/*Problem 901: Online Stock Span
*Design an algorithm that collects daily price quotes for some stock and returns the span of that stock's price for the current day.
*The span of the stock's price in one day is the maximum number of consecutive days (starting from that day and going backward) for which the stock price was less than or equal to the price of that day.
*/

#include <stack>
using namespace std;

class StockSpanner {
 public:
  int next(int price) {
    int span = 1;
    while (!stack.empty() && stack.top().first <= price)
      span += stack.top().second, stack.pop();
    stack.emplace(price, span);
    return span;
  }

 private:
  stack<pair<int, int>> stack;  // (price, span)
};