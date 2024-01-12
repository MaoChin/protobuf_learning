all:write read

write:write.cc contacts.pb.cc
	g++ -o $@ $^ -lprotobuf -std=c++14
read:read.cc contacts.pb.cc
	g++ -o $@ $^ -lprotobuf -std=c++14

.PHONY:clean
clean:
	rm -f write read
