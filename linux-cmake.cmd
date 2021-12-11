docker build . -t my-cmake:latest
docker run -it --rm -v "%cd%:/home" my-cmake:latest