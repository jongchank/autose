FROM ubuntu:latest
RUN apt-get update && \
    apt-get install -y \
    build-essential \
    cmake \
    git \
    && rm -rf /var/lib/apt/lists/*
RUN git clone https://github.com/jongchank/calc && \
    cd calc && \
    cmake . && \
    make && \
    cp libarithmetic.so /usr/local/lib/ && \
    cp inc/arithmetic.h /usr/local/include/ && \
    cp prog /usr/local/bin/
RUN ldconfig
WORKDIR /root
ENTRYPOINT ["prog"]

