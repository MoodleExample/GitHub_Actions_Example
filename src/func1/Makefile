# Makefile
all:
	gcc -c func1.c
	g++ test.cpp /home/runner/work/GitHub_Actions_Example/GitHub_Actions_Example/googletest-release-1.10.0/googletest/src/gtest_main.cc /home/runner/work/GitHub_Actions_Example/GitHub_Actions_Example/googletest-release-1.10.0/googletest/src/gtest-all.cc -I. -lpthread func1.o -o func1.test
	./func1.test

gtest-gen:
	python3 /home/runner/work/GitHub_Actions_Example/GitHub_Actions_Example/googletest-release-1.10.0/googletest/scripts/fuse_gtest_files.py ./
