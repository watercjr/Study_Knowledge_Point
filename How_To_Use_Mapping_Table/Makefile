TARGET=main
CC=g++
SRCS=$(wildcard *.cpp PropertyTable/*.cpp)  # 查找当前目录所有的.c

# 需要在编译选项前加上 -g 选项
$(TARGET):$(SRCS)
	$(CC) $(SRCS) -o $(TARGET) -std=c++11 -g -Wall

clean:
	rm main