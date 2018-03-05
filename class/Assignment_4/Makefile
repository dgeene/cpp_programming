CXX=g++
#CPP_FLAGS="-std=c++14"

default: clean submission


submission:
	$(CXX) -o INT-demo INTDemo.cpp INT.cpp
	$(CXX) -o RINT-demo RINTDemo.cpp RINT.cpp


# For initial testing and development. Running just 'make' with
#    no args will create the homework submission
INT-test:
	$(CXX) -o INT-test int_main.cpp INT.cpp

RINT-test:
	$(CXX) -o RINT-test rint_main.cpp RINT.cpp

clean:
	rm -f INT-test RINT-test
