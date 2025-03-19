#!/bin/sh

mount="./:/app"

if ! command -v docker >/dev/null 2>&1; then
  if ! command -v podman >/dev/null 2>&1; then
    echo "Docker or Podman is required to run this script"
    exit 1
  fi
  alias docker=podman
  mount="${mount}:Z"
fi

docker run -v $mount --rm -it $(docker build -q .) 
