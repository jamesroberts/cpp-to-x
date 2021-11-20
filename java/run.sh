echo "Setting up C++ library for Java..."
# javah Main  # Only need to run this once to get java header file

rm -rf build || true
mkdir -p build/
sudo g++ cpp-to-java.cc -I../src/ -I/usr/lib/jvm/java-8-openjdk-amd64/include -I/usr/lib/jvm/java-8-openjdk-amd64/include/linux -c -o build/cpp-to-java.o -fPIC
g++ ../src/*.cc  -c -o build/cpp-to-x.o -fPIC

rm -rf lib || true
mkdir -p lib/
g++ -shared -o lib/libcpp-to-java.so build/cpp-to-java.o build/cpp-to-x.o

echo -e "Running Main.java...\n====================\n"
java -Djava.library.path=./lib Main.java