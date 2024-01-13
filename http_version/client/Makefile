client:main.cc add_contact.pb.cc
	g++ -o $@ $^ -lprotobuf -lpthread -lcpp-httplib -std=c++14

.PHONY:clean
clean:
	rm -f client
