#
FROM ubuntu:18.04
LABEL build_date="2020-09-04"
LABEL description="daring-cyclops"
LABEL maintainer="guycole@gmail.com"
#
RUN apt-get update && apt-get -y upgrade
#
#RUN apt-get install -y python3 
#RUN apt-get install -y python3-pip 
#RUN apt-get install -y virtualenv
#RUN pip3 install --upgrade pip
#
RUN apt-get install -y ctags
RUN apt-get install -y curl
RUN apt-get install -y git
RUN apt-get install -y less
RUN apt-get install -y inetutils-tools inetutils-ping inetutils-telnet
RUN apt-get install -y netcat
#RUN apt-get install -y net-tools
RUN apt-get install -y unzip
RUN apt-get install -y vim
RUN apt-get install -y wget
#
RUN apt-get install -y autoconf automake
RUN apt-get install -y build-essential
RUN apt-get install -y libtool
RUN apt-get install -y pkg-config
RUN apt-get install -y uuid-dev
#
#RUN apt-get install -y libboost-system-dev
#RUN apt-get install -y postgresql-client
#
RUN apt-cache pkgnames | sort > pkg.names
#
RUN useradd -m -s /bin/bash gsc
RUN su - gsc
COPY bash_aliases /home/gsc/.bash_aliases
RUN chown gsc:gsc /home/gsc/.bash_aliases
RUN mkdir /home/gsc/daring-cyclops
RUN chown gsc:gsc /home/gsc/daring-cyclops
#
# protobuff
WORKDIR /home/gsc
RUN curl -L https://github.com/protocolbuffers/protobuf/releases/download/v3.13.0/protobuf-cpp-3.13.0.tar.gz -o protobuf-cpp-3.13.0.tar.gz
RUN su - gsc -c "tar -xzf protobuf-cpp-3.13.0.tar.gz"
RUN su - gsc -c "cd /home/gsc/protobuf-3.13.0;./configure"
RUN su - gsc -c "cd /home/gsc/protobuf-3.13.0;make;make check"
WORKDIR /home/gsc/protobuf-3.13.0
RUN make install
RUN ldconfig
#
# cmake
WORKDIR /home/gsc
RUN su - gsc -c "wget -q -O cmake-linux.sh https://github.com/Kitware/CMake/releases/download/v3.17.0/cmake-3.17.0-Linux-x86_64.sh"
RUN sh cmake-linux.sh -- --skip-license --prefix=/usr/local
#
# grpc
WORKDIR /home/gsc
RUN su - gsc -c "git clone --recurse-submodules -b v1.31.0 https://github.com/grpc/grpc"
RUN su - gsc -c "mkdir -p /home/gsc/grpc/cmake/build"
RUN su - gsc -c "cd /home/gsc/grpc/cmake/build;cmake -DgRPC_INSTALL=ON -DgRPC_BUILD_TESTS=OFF -DCMAKE_INSTALL_PREFIX=$MY_INSTALL_DIR ../.."
RUN su - gsc -c "cd /home/gsc/grpc/cmake/build;make"
WORKDIR /home/gsc/grpc/cmake/build
RUN make install
#