FROM alpine:3.9 as base

RUN apk update && \
    apk upgrade && \
    apk --update add g++ \
    rm -rf /var/cache/apk/*
