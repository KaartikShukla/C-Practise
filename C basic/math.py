import ctypes

lib = ctypes.CDLL("./C basic/math.dll")

result = lib.add(10, 20)

print(result)