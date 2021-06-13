FROM ubuntu:latest

RUN apt update && \
    apt install -y build-essential curl xz-utils

WORKDIR /sample

RUN curl -L https://github.com/facebook/infer/releases/download/v1.1.0/infer-linux64-v1.1.0.tar.xz -o infer.tar.xz
RUN tar -xf infer.tar.xz

RUN DEBIAN_FRONTEND="noninteractive" apt-get -y install tzdata

RUN apt-get -y install openjdk-8-jdk-headless

COPY examples examples
