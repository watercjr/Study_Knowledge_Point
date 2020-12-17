BUILDDIR=./build
CC=g++
SRCS=$(wildcard *.cpp) #查找当前目录所有的.c
CXXFLAGS=-std=c++11 -g -Wall
TARGET=$(BUILDDIR)/main

# 需要在编译选项前加上 -g 选项
$(TARGET):$(SRCS) $(BUILDDIR)
	$(CC) $(SRCS) -o $(TARGET) $(CXXFLAGS)

#all:$(BUILDDIR) $(TARGET)

$(BUILDDIR):
	mkdir -p $(BUILDDIR)

clean:
	rm $(BUILDDIR) -r