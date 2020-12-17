BINDIR=./build
CC=g++
SRCS=$(wildcard *.cpp) #查找当前目录所有的.c
CXXFLAGS=-std=c++11 -g -Wall
TARGET=$(BINDIR)/main

# 需要在编译选项前加上 -g 选项
$(TARGET):$(SRCS)
	$(CC) $(SRCS) -o $(TARGET) $(CXXFLAGS)

init:
	mkdir build

clean:
	rm build/ -r