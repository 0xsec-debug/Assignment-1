class solution:
  def isPowerof2(self, n: int) -> bool:
    if n <=0:
      return False
    while n % 2 == 0:
      n = n // 2
    return n == 1
