sudo apt update
sudo apt install -y cmake libssl-dev libtool pkg-config
git clone https://github.com/alanxz/rabbitmq-c.git
cd rabbitmq-c

mkdir build && cd build
cmake .. -DCMAKE_INSTALL_PREFIX=/usr/local -DBUILD_TOOLS=ON -DBUILD_SHARED_LIBS=ON
make -j$(nproc)
sudo make install
