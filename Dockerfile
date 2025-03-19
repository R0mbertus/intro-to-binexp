FROM ubuntu:24.04

RUN apt update && apt install -y \
    python3 python3-pip git gdb gcc make \
    && pip3 install --no-cache-dir --break-system-packages pwntools \
    && git clone https://github.com/pwndbg/pwndbg /opt/pwndbg \
    && cd /opt/pwndbg && ./setup.sh

WORKDIR /app
ENTRYPOINT ["/bin/bash"]
