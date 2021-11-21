echo "Building C++ addon for NodeJS"
node-gyp configure
node-gyp build

echo -e "\n\nRunning Main.js\n===============\n"
node Main.js