FROM alpine:3.9 as base

ENV LANG C.UTF-8
ENV APP_ROOT=/app
ENV GOOGLE_TEST_VERSION 1.8.1

RUN apk update && \
    apk upgrade && \
    apk --update add \
      g++ \
      make \
      cmake \
      curl && \
    rm -rf /var/cache/apk/*

RUN curl -OL https://github.com/google/googletest/archive/release-${GOOGLE_TEST_VERSION}.tar.gz && \
    tar xzf release-${GOOGLE_TEST_VERSION}.tar.gz && \
    rm -f release-${GOOGLE_TEST_VERSION}.tar.gz && \
    cd googletest-release-${GOOGLE_TEST_VERSION} && \
    cmake . && \
    make && make install && \
    cd - && \
    rm -rf googletest-release-${GOOGLE_TEST_VERSION}
