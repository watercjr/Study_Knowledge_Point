TARGET=main
CC=g++
SRCS=$(wildcard *.cpp) #查找当前目录所有的.c

$(TARGET):$(SRCS)
	$(CC) $(SRCS) -o $(TARGET) -std=c++11 -lpthread -g -rdynamic

clean:
	rm main