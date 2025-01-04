FROM ubuntu:20.04
MAINTAINER Jong-Chan Kim <jongchank@gmail.com>

RUN apt-get update && apt-get install -y \
    vim \
    && rm -rf /var/lib/apt/lists/*

RUN echo "set ts=4\nset expandtab\n" > ~/.vimrc

WORKDIR /root

CMD ["vim"]
