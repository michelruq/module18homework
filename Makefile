SRC_LIST = main.cpp message/message.cpp user/user.cpp
TARGET = filereadwrite

filereadwrite: $(SRC_LIST) 
	g++ -std=c++17 -o $(TARGET) $(SRC_LIST)

clean:
	rm -rf *.o *.a
