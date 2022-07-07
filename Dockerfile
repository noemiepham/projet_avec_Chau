FROM ubuntu:20.04
RUN apt-get -y update
# update and install dependencies
RUN  apt-get update \
    && apt-get install -y \
        make \
        git \
    && apt install -y build-essential
RUN git clone -b work_of_chau https://github.com/noemiepham/projet_avec_chau