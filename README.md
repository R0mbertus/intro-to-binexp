# intro-to-binexp

Repo containing the relevant files for my intro to binexp workshop.

## Running

All the files need to be built using `make`, after which the binaries will be available in their
 respective directories. Some examples contain some exploit scripts that can be ran, such as an
 `exploit.py`.

### Docker

Additionally a docker is provided. Simply make sure one of docker or podman is installed, and run:

```sh
./run.sh
```

This'll spin up a docker with pwndbg and pwntools installed, and with a mount to the current dir.

## Layout

The repo is seperated into `examples` and `challenges`, which contain example files for and
 challenges to try out in the workshop respectively.

Some directories will contain a `flags.txt` file, which lists the flags used to compile the
 respective binary and **should not be touched!**

## Slides

You can open the [local copy](./slides.pdf) or go to the
 [google slides version](https://docs.google.com/presentation/d/122Q0i_hcRCn_UaaZI9GN_HBPee9gRKSYV5vqlsoJaso/edit?usp=sharing)
